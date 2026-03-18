/*
 * XREFs of xxxClientLoadImage @ 0x1C00B7340
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReas.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01CA118 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01CA184 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

ULONG_PTR __fastcall xxxClientLoadImage(unsigned __int16 *a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdi
  unsigned __int16 v12; // ax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  ULONG_PTR *v16; // rbx
  ULONG_PTR v17; // rbx
  PVOID *v18; // rdx
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
  if ( v9 )
  {
    v11 = AllocCallbackMessage(96, v9 != 0, v9 & (unsigned __int64)-(__int64)(v9 != 0), v28, 1, 0x200uLL);
    v23 = v11;
    if ( !v11 )
      return 0LL;
  }
  else
  {
    v11 = (unsigned __int8 *)v27;
    v23 = (unsigned __int8 *)v27;
    memset(v27, 0, sizeof(v27));
    v27[0] = 96;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
  if ( v11 != (unsigned __int8 *)v27 && v11 != v28 )
    PushW32ThreadLock((__int64)v11, v26, (__int64)Win32FreePool);
  *((_DWORD *)v11 + 10) = 0;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, 0LL, 2u, (void **)v11 + 6) < 0 )
    goto LABEL_28;
  *((_WORD *)v11 + 28) = *a1;
  v12 = a1[1];
  *((_WORD *)v11 + 29) = v12;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v11,
                *((_QWORD *)a1 + 1),
                (unsigned int)*a1 + 2,
                (void **)v11 + 8) < 0 )
      goto LABEL_28;
  }
  else
  {
    *((_QWORD *)v11 + 8) = *((_QWORD *)a1 + 1);
  }
  *((_DWORD *)v11 + 18) = a3;
  *((_DWORD *)v11 + 19) = a4;
  *((_DWORD *)v11 + 20) = a5;
  *((_DWORD *)v11 + 21) = a6;
  *((_DWORD *)v11 + 22) = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v13 = KeUserModeCallback(74LL, v11, *(unsigned int *)v11, &v24, &v22);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v21, v14);
  if ( v13 >= 0 && v22 == 24 )
  {
    v16 = (ULONG_PTR *)v24;
    if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
      v16 = (ULONG_PTR *)MmUserProbeAddress;
    v17 = *v16;
    RegionSize[1] = v17;
    if ( v17 )
    {
      LOBYTE(v15) = 3;
      v17 = HMValidateHandleNoRip(v17, v15);
    }
    goto LABEL_17;
  }
LABEL_28:
  v17 = 0LL;
LABEL_17:
  if ( v11 != (unsigned __int8 *)v27 && v11 != v28 )
  {
    v18 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v26, (__int64)v18);
  }
  return v17;
}
