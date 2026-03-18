/*
 * XREFs of NtUserInjectGesture @ 0x1C0230070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     _PostMessageCheckIL @ 0x1C01E3F44 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C0213814 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C0213E44 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C0213EF8 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0213F30 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  const void *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG64 v20; // rcx
  SIZE_T v21; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE v28[8]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A0h]
  __int64 v31; // [rsp+60h] [rbp-98h]
  _BYTE v32[56]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-50h]
  __int128 v34; // [rsp+B8h] [rbp-40h]
  __int128 v35; // [rsp+C8h] [rbp-30h]
  SIZE_T Length; // [rsp+D8h] [rbp-20h]

  memset(v32, 0, sizeof(v32));
  v9 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    v30 = v10;
    HMLockObject(v10);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87LL;
    }
    else
    {
      v15 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10, v12, v13) )
        {
LABEL_9:
          LODWORD(v10) = 0;
LABEL_26:
          ThreadUnlock1(v17, v16, v18);
          goto LABEL_27;
        }
        v20 = a4 + 56;
        if ( a4 + 56 < a4 || v20 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v33 = *(_OWORD *)a4;
        v34 = *(_OWORD *)(a4 + 16);
        v35 = *(_OWORD *)(a4 + 32);
        Length = *(_QWORD *)(a4 + 48);
        *(_OWORD *)v32 = v33;
        *(_OWORD *)&v32[16] = v34;
        *(_OWORD *)&v32[32] = v35;
        *(_QWORD *)&v32[48] = Length;
        v21 = (unsigned int)Length;
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
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
            ProbeForRead(Address, v21, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(v32, v16, v18, v19) )
          {
            v23 = AllocGestureInfo(v10, 0LL, (__int64)v32, v9);
            v24 = v23;
            if ( v23 )
            {
              EtwTracePostInjectedGestureMessage(v10, v23);
              v25 = _HMObjectFromHandle(v24);
              LODWORD(v10) = PostMessageCheckIL((struct tagWND *)v10, 281LL, *(unsigned int *)(v25 + 40), v24);
              if ( !(_DWORD)v10 )
                FreeGestureInfo(v24, 1LL, v18);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v10) = 0;
        UserSetLastError(87LL, v16, v18, v19);
        goto LABEL_26;
      }
      v14 = 1400LL;
    }
    LODWORD(v10) = 0;
    UserSetLastError(v14, v11, v12, v13);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v26);
  return (int)v10;
}
