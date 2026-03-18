/*
 * XREFs of NtUserInjectGesture @ 0x1C01F1540
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _PostMessageCheckIL @ 0x1C01AC270 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C01D7A1C (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C01D8020 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C01D80F4 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rcx
  SIZE_T v18; // xmm1_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const void *v27; // [rsp+40h] [rbp-B8h]
  _BYTE v28[16]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v30[3]; // [rsp+78h] [rbp-80h] BYREF
  SIZE_T v31; // [rsp+A8h] [rbp-50h]
  __int128 v32; // [rsp+B0h] [rbp-48h]
  __int128 v33; // [rsp+C0h] [rbp-38h]
  __int128 v34; // [rsp+D0h] [rbp-28h]
  SIZE_T Length; // [rsp+E0h] [rbp-18h]

  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v29;
    v29[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a3 || !a4 || a2 )
    {
      v11 = 87LL;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v12 + 20) >= 0 && *(char *)(v12 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10) )
        {
LABEL_9:
          LODWORD(v10) = 0;
LABEL_26:
          ThreadUnlock1(v14, v13, v15);
          goto LABEL_27;
        }
        v17 = a4 + 56;
        if ( a4 + 56 < a4 || v17 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v32 = *(_OWORD *)a4;
        v33 = *(_OWORD *)(a4 + 16);
        v34 = *(_OWORD *)(a4 + 32);
        v18 = *(_QWORD *)(a4 + 48);
        Length = v18;
        v30[0] = v32;
        v30[1] = v33;
        v30[2] = v34;
        v31 = v18;
        if ( (_DWORD)v18 )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v13, v15, v16);
            ProbeForRead(Address, (unsigned int)v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            v27 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v30, v13) )
          {
            v20 = AllocGestureInfo(v10, 0LL, (__int64)v30, v27);
            v21 = v20;
            if ( v20 )
            {
              EtwTracePostInjectedGestureMessage(v10, v20);
              LODWORD(v10) = PostMessageCheckIL(
                               (struct tagWND *)v10,
                               0x119u,
                               *(unsigned int *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v21) + 40LL),
                               v21);
              if ( !(_DWORD)v10 )
                FreeGestureInfo(v21, 1LL);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v10) = 0;
        UserSetLastError(87LL, v13);
        goto LABEL_26;
      }
      v11 = 1400LL;
    }
    LODWORD(v10) = 0;
    UserSetLastError(v11, v9);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return (int)v10;
}
