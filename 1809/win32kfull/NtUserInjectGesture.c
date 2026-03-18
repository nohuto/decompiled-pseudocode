/*
 * XREFs of NtUserInjectGesture @ 0x1C0218920
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _PostMessageCheckIL @ 0x1C01CF480 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C01FC808 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C01FCE1C (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C01FCEF8 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG64 v19; // rcx
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  SIZE_T v23; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const void *v32; // [rsp+40h] [rbp-B8h]
  _BYTE v33[16]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v34[3]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v35[3]; // [rsp+78h] [rbp-80h] BYREF
  SIZE_T v36; // [rsp+A8h] [rbp-50h]
  SIZE_T Length; // [rsp+E0h] [rbp-18h]

  v32 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v34[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v34;
    v34[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a3 || !a4 || a2 )
    {
      v13 = 87LL;
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v14 + 20) >= 0 && *(char *)(v14 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10, v11, v12) )
        {
LABEL_9:
          LODWORD(v10) = 0;
LABEL_26:
          ThreadUnlock1(v16, v15);
          goto LABEL_27;
        }
        v19 = a4 + 56;
        if ( a4 + 56 < a4 || v19 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v20 = *(_OWORD *)a4;
        v21 = *(_OWORD *)(a4 + 16);
        v22 = *(_OWORD *)(a4 + 32);
        Length = *(_QWORD *)(a4 + 48);
        v35[0] = v20;
        v35[1] = v21;
        v35[2] = v22;
        v36 = Length;
        v23 = (unsigned int)Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
            ProbeForRead(Address, v23, CurrentProcessWow64Process != 0 ? 1 : 4);
            v32 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v35, v15, v17, v18) )
          {
            v25 = AllocGestureInfo(v10, 0LL, (__int64)v35, v32);
            v26 = v25;
            if ( v25 )
            {
              EtwTracePostInjectedGestureMessage(v10, v25);
              LODWORD(v10) = PostMessageCheckIL(
                               (struct tagWND *)v10,
                               0x119u,
                               *(unsigned int *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v26) + 40LL),
                               v26);
              if ( !(_DWORD)v10 )
                FreeGestureInfo(v26, 1LL);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v10) = 0;
        UserSetLastError(87LL, v15, v17, v18);
        goto LABEL_26;
      }
      v13 = 1400LL;
    }
    LODWORD(v10) = 0;
    UserSetLastError(v13, v9, v11, v12);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return (int)v10;
}
