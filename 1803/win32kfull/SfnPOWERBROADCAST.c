/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C00F7D00
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  __int16 v34; // r8
  int v35; // ecx
  char v36; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v39; // [rsp+38h] [rbp-340h]
  int v40; // [rsp+40h] [rbp-338h]
  _DWORD v41[5]; // [rsp+44h] [rbp-334h] BYREF
  __int128 v42; // [rsp+58h] [rbp-320h]
  __int64 v43; // [rsp+68h] [rbp-310h]
  unsigned __int64 v44; // [rsp+78h] [rbp-300h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-2E8h]
  __int64 v48; // [rsp+98h] [rbp-2E0h]
  __int64 v49; // [rsp+A0h] [rbp-2D8h]
  _QWORD v50[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v51[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v52[512]; // [rsp+140h] [rbp-238h] BYREF

  v40 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(ThreadWin32Thread + 464);
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
      v34 = 769;
      goto LABEL_48;
    case 4:
      SetOrClrWF(0, a1, 769, 1);
      v34 = 770;
LABEL_48:
      v35 = 1;
LABEL_49:
      SetOrClrWF(v35, a1, v34, 1);
      goto LABEL_14;
    case 2:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 1) == 0 )
        return 0LL;
      v34 = 769;
LABEL_51:
      v35 = 0;
      goto LABEL_49;
  }
  if ( (unsigned int)a3 > 5 )
  {
    if ( (unsigned int)a3 > 7 )
    {
      if ( (_DWORD)a3 == 32787 )
        v10 = 1;
      goto LABEL_14;
    }
    SetOrClrWF(0, a1, 769, 1);
    v34 = 770;
    goto LABEL_51;
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
    v19 = (unsigned __int8 *)v51;
    v39 = (unsigned __int8 *)v51;
    memset(v51, 0, 0x58uLL);
    v51[0] = 88;
    goto LABEL_22;
  }
  v19 = AllocCallbackMessage(88, v10, v16, v52, 1, 0x200uLL);
  v39 = v19;
  if ( !v19 )
    return 0LL;
LABEL_22:
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v19 != (unsigned __int8 *)v51 && v19 != v52 )
    PushW32ThreadLock((__int64)v19, v50, (__int64)Win32FreePool);
  *((_QWORD *)v19 + 5) = v14;
  *((_DWORD *)v19 + 12) = v40;
  *((_QWORD *)v19 + 7) = a3;
  if ( v38 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, a4, v38, (void **)v19 + 10) < 0 )
      goto LABEL_60;
  }
  else
  {
    *((_QWORD *)v19 + 10) = a4;
  }
  *((_QWORD *)v19 + 8) = a5;
  *((_QWORD *)v19 + 9) = a6;
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  v46 = *(_QWORD *)(v21 + 408);
  *(_QWORD *)(v21 + 408) = &v46;
  v47 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v22 = *(_QWORD *)(v13 + 472);
  v42 = *(_OWORD *)(v22 + 64);
  v43 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v25 = KeUserModeCallback(29LL, v19, *(unsigned int *)v19, &v44, v41);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37, v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v30 + 64) = v42;
  *(_QWORD *)(v30 + 80) = v43;
  if ( v25 >= 0 && v41[0] == 24 )
  {
    v31 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v49 = *v31;
    goto LABEL_42;
  }
LABEL_60:
  v32 = 0LL;
LABEL_42:
  if ( v19 != (unsigned __int8 *)v51 && v19 != v52 )
  {
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v19 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50);
  }
  return v32;
}
