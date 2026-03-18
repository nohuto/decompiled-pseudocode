/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C010EBF0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  bool v17; // cf
  __int64 v18; // rdx
  unsigned __int8 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  unsigned __int16 v33; // r8
  int v34; // ecx
  PVOID *v35; // rdx
  char v36; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v39; // [rsp+38h] [rbp-350h]
  int v40; // [rsp+40h] [rbp-348h]
  _DWORD v41[7]; // [rsp+44h] [rbp-344h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int64 v44; // [rsp+70h] [rbp-318h] BYREF
  __int64 v45; // [rsp+78h] [rbp-310h]
  __int64 v46; // [rsp+80h] [rbp-308h]
  __int128 v47; // [rsp+88h] [rbp-300h]
  __int64 v48; // [rsp+98h] [rbp-2F0h]
  __int64 v49; // [rsp+A0h] [rbp-2E8h]
  __int128 v50; // [rsp+C0h] [rbp-2C8h]
  _QWORD v51[4]; // [rsp+D0h] [rbp-2B8h] BYREF
  _DWORD v52[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v53[512]; // [rsp+150h] [rbp-238h] BYREF

  v40 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0uLL;
  v48 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  if ( a1 )
    v15 = *(_QWORD *)a1;
  else
    v15 = 0LL;
  LOBYTE(v12) = 1;
  if ( !HMValidateHandleNoSecure(v15, v12) )
    return 0LL;
  if ( a3 > 0x8013 )
    goto LABEL_14;
  switch ( (_DWORD)a3 )
  {
    case 0:
      v33 = 769;
      goto LABEL_51;
    case 4:
      SetOrClrWF(0, a1, 0x301u, 1);
      v33 = 770;
LABEL_51:
      v34 = 1;
      goto LABEL_49;
    case 2:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 1) == 0 )
        return 0LL;
      v33 = 769;
LABEL_48:
      v34 = 0;
LABEL_49:
      SetOrClrWF(v34, a1, v33, 1);
      goto LABEL_14;
  }
  if ( (unsigned int)a3 > 5 )
  {
    if ( (unsigned int)a3 > 7 )
    {
      if ( (_DWORD)a3 == 32787 )
        v10 = 1;
      goto LABEL_14;
    }
    SetOrClrWF(0, a1, 0x301u, 1);
    v33 = 770;
    goto LABEL_48;
  }
LABEL_14:
  v16 = 0;
  v38 = 0;
  if ( v9 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    v16 = -1;
    v17 = *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC;
    if ( *(_DWORD *)(a4 + 16) < 0xFFFFFFEC )
      v16 = *(_DWORD *)(a4 + 16) + 20;
    v38 = v16;
    if ( v17 )
      return 0LL;
  }
  if ( !v10 )
  {
    v19 = (unsigned __int8 *)v52;
    v39 = (unsigned __int8 *)v52;
    memset(v52, 0, 0x58uLL);
    v52[0] = 88;
    goto LABEL_22;
  }
  v19 = AllocCallbackMessage(88, v10, v16, v53, 1, 0x200uLL);
  v39 = v19;
  if ( !v19 )
    return 0LL;
LABEL_22:
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v19 != (unsigned __int8 *)v52 && v19 != v53 )
    PushW32ThreadLock((__int64)v19, v51, (__int64)Win32FreePool);
  *((_QWORD *)v19 + 5) = v14;
  *((_DWORD *)v19 + 12) = v40;
  *((_QWORD *)v19 + 7) = a3;
  if ( v38 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, a4, v38, (void **)v19 + 10) < 0 )
      goto LABEL_59;
  }
  else
  {
    *((_QWORD *)v19 + 10) = a4;
  }
  *((_QWORD *)v19 + 8) = a5;
  *((_QWORD *)v19 + 9) = a6;
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  v44 = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = &v44;
  v45 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v22 = *(_QWORD *)(v13 + 480);
  v50 = *(_OWORD *)(v22 + 64);
  v47 = v50;
  v48 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v25 = KeUserModeCallback(29LL, v19, *(unsigned int *)v19, &v42, v41);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37, v26);
  ThreadUnlock1(v28, v27);
  v29 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v29 + 64) = v50;
  *(_QWORD *)(v29 + 80) = v48;
  if ( v25 >= 0 && v41[0] == 24 )
  {
    v30 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v31 = *v30;
    v49 = *v30;
    goto LABEL_42;
  }
LABEL_59:
  v31 = 0LL;
LABEL_42:
  if ( v19 != (unsigned __int8 *)v52 && v19 != v53 )
  {
    v35 = (PVOID *)(v19 + 32);
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v51, (__int64)v35);
  }
  return v31;
}
