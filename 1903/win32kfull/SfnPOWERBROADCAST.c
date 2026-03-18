/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C00B4E80
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned __int8 *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rdi
  unsigned __int16 v44; // r8
  int v45; // ecx
  PVOID *v46; // rdx
  char v47; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v48[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v49; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v50; // [rsp+38h] [rbp-350h]
  int v51; // [rsp+40h] [rbp-348h]
  _DWORD v52[7]; // [rsp+44h] [rbp-344h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int64 v55; // [rsp+70h] [rbp-318h] BYREF
  _QWORD *v56; // [rsp+78h] [rbp-310h]
  __int64 v57; // [rsp+80h] [rbp-308h]
  __int128 v58; // [rsp+88h] [rbp-300h]
  __int64 v59; // [rsp+98h] [rbp-2F0h]
  _QWORD v60[7]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int128 v61; // [rsp+D8h] [rbp-2B0h]
  _DWORD v62[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v63[512]; // [rsp+150h] [rbp-238h] BYREF

  v51 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  memset(v62, 0, 0x58uLL);
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0uLL;
  v59 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  LOBYTE(v15) = 1;
  if ( !HMValidateHandleNoSecure(v18, v15) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(a1[5] + 19LL) & 1) == 0 )
            return 0LL;
          v44 = 769;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v10 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0, (__int64)a1, 0x301u, 1);
          v44 = 770;
        }
        v45 = 0;
LABEL_48:
        SetOrClrWF(v45, (__int64)a1, v44, 1);
        goto LABEL_14;
      }
      SetOrClrWF(0, (__int64)a1, 0x301u, 1);
      v44 = 770;
    }
    else
    {
      v44 = 769;
    }
    v45 = 1;
    goto LABEL_48;
  }
LABEL_14:
  v19 = 0;
  v49 = 0;
  if ( v9 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    v19 = *(_DWORD *)(a4 + 16) + 20;
    if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
      return 0LL;
    v49 = *(_DWORD *)(a4 + 16) + 20;
  }
  if ( !v10 )
  {
    v21 = (unsigned __int8 *)v62;
    v50 = (unsigned __int8 *)v62;
    memset(&v62[1], 0, 0x54uLL);
    v62[0] = 88;
    goto LABEL_21;
  }
  v21 = AllocCallbackMessage(88, v10, v19, v63, 1, 0x200uLL);
  v50 = v21;
  if ( !v21 )
    return 0LL;
LABEL_21:
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v22, v23);
  memset(v60, 0, 24);
  if ( v21 != (unsigned __int8 *)v62 && v21 != v63 )
    PushW32ThreadLock((__int64)v21, v60, (__int64)Win32FreePool, v25);
  *((_QWORD *)v21 + 5) = v17;
  *((_DWORD *)v21 + 12) = v51;
  *((_QWORD *)v21 + 7) = a3;
  v26 = v49;
  if ( v49 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v21, (char *)a4, v49, (void **)v21 + 10) < 0 )
      goto LABEL_59;
  }
  else
  {
    *((_QWORD *)v21 + 10) = a4;
  }
  *((_QWORD *)v21 + 8) = a5;
  *((_QWORD *)v21 + 9) = a6;
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v25);
  v55 = *(_QWORD *)(v27 + 408);
  *(_QWORD *)(v27 + 408) = &v55;
  v56 = a1;
  if ( a1 )
    HMLockObject(a1);
  v30 = *(_QWORD *)(v16 + 472);
  v61 = *(_OWORD *)(v30 + 64);
  v58 = v61;
  v59 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v17;
  if ( a1 )
    v31 = *a1;
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v31;
  if ( a1 )
    v32 = *(_QWORD *)(a1[5] + 224LL);
  else
    v32 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v32;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v48,
    gdwInAtomicOperation,
    v28,
    v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v21 + 2) = 0LL;
  v33 = KeUserModeCallback(29LL, v21, *(unsigned int *)v21, &v53, v52);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v48,
    v34,
    v35,
    v36);
  ThreadUnlock1(v38, v37, v39);
  v40 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v40 + 64) = v61;
  *(_QWORD *)(v40 + 80) = v59;
  if ( v33 >= 0 && v52[0] == 24 )
  {
    v41 = (__int64 *)v53;
    if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
      v41 = (__int64 *)MmUserProbeAddress;
    v42 = *v41;
    v60[3] = *v41;
    goto LABEL_41;
  }
LABEL_59:
  v42 = 0LL;
LABEL_41:
  if ( v21 != (unsigned __int8 *)v62 && v21 != v63 )
  {
    v46 = (PVOID *)(v21 + 32);
    if ( *((_QWORD *)v21 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v46, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v60, (__int64)v46, v26, v25);
  }
  return v42;
}
