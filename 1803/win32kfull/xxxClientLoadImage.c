/*
 * XREFs of xxxClientLoadImage @ 0x1C006BC38
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01A7FD4 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01A8058 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v9; // r10d
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rbx
  __int64 v18; // rbx
  unsigned __int8 *result; // rax
  char v20; // [rsp+30h] [rbp-2D8h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-2D7h] BYREF
  int v22; // [rsp+34h] [rbp-2D4h] BYREF
  unsigned __int8 *v23; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-2C8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2C0h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-2A8h] BYREF
  _DWORD v27[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v28[512]; // [rsp+E0h] [rbp-228h] BYREF

  v9 = a1[1];
  if ( (_WORD)v9 )
  {
    result = AllocCallbackMessage(96, (_WORD)v9 != 0, v9 & (unsigned int)-((_WORD)v9 != 0), v28, 1, 0x200uLL);
    v10 = result;
    v23 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v27;
    v23 = (unsigned __int8 *)v27;
    memset(v27, 0, sizeof(v27));
    v27[0] = 96;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  if ( v10 != (unsigned __int8 *)v27 && v10 != v28 )
    PushW32ThreadLock((__int64)v10, v26, (__int64)Win32FreePool);
  *((_DWORD *)v10 + 10) = 0;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, 0LL, 2u, (void **)v10 + 6) < 0 )
    goto LABEL_22;
  *((_WORD *)v10 + 28) = *a1;
  v12 = a1[1];
  *((_WORD *)v10 + 29) = v12;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v10,
                *((_QWORD *)a1 + 1),
                (unsigned int)*a1 + 2,
                (void **)v10 + 8) < 0 )
      goto LABEL_22;
  }
  else
  {
    *((_QWORD *)v10 + 8) = *((_QWORD *)a1 + 1);
  }
  *((_DWORD *)v10 + 18) = a3;
  *((_DWORD *)v10 + 19) = a4;
  *((_DWORD *)v10 + 20) = a5;
  *((_DWORD *)v10 + 21) = a6;
  *((_DWORD *)v10 + 22) = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v13 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v24, &v22);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v21, v14);
  if ( v13 >= 0 && v22 == 24 )
  {
    v17 = (__int64 *)v24;
    if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
      v17 = (__int64 *)MmUserProbeAddress;
    v18 = *v17;
    RegionSize[1] = v18;
    if ( v18 )
    {
      LOBYTE(v15) = 3;
      v18 = HMValidateHandleNoRip(v18, v15, v16);
    }
    goto LABEL_15;
  }
LABEL_22:
  v18 = 0LL;
LABEL_15:
  if ( v10 != (unsigned __int8 *)v27 && v10 != v28 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v26);
  }
  return (unsigned __int8 *)v18;
}
