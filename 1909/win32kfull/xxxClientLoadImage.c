/*
 * XREFs of xxxClientLoadImage @ 0x1C00567C4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0057C04 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00F1354 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C013C600 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DDA54 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        char **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 v9; // dx
  unsigned __int8 *v10; // rdi
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rbx
  __int64 v17; // rbx
  unsigned __int8 *result; // rax
  PVOID *v19; // rdx
  char v20; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v22; // [rsp+34h] [rbp-2E4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-2E0h]
  void *v24; // [rsp+40h] [rbp-2D8h]
  unsigned __int8 *v25; // [rsp+48h] [rbp-2D0h]
  unsigned __int64 v26; // [rsp+50h] [rbp-2C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-2C0h] BYREF
  _QWORD v28[6]; // [rsp+60h] [rbp-2B8h] BYREF
  _DWORD v29[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v30[512]; // [rsp+F0h] [rbp-228h] BYREF

  v23 = 0LL;
  memset(v29, 0, sizeof(v29));
  v9 = *((_WORD *)a1 + 1);
  v24 = 0LL;
  if ( v9 )
  {
    result = AllocCallbackMessage(96, v9 != 0, v9 & (unsigned __int64)-(__int64)(v9 != 0), v30, 1, 0x200uLL);
    v10 = result;
    v25 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v29;
    v25 = (unsigned __int8 *)v29;
    memset(&v29[1], 0, 0x5CuLL);
    v29[0] = 96;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v28, 0, 24);
  if ( v10 != (unsigned __int8 *)v29 && v10 != v30 )
    PushW32ThreadLock((__int64)v10, v28, (__int64)Win32FreePool);
  *((_DWORD *)v10 + 10) = v23;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (char *)v24,
              (unsigned int)(unsigned __int16)v23 + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_22;
  *((_WORD *)v10 + 28) = *(_WORD *)a1;
  v12 = *((_WORD *)a1 + 1);
  *((_WORD *)v10 + 29) = v12;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v10,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v10 + 8) < 0 )
      goto LABEL_22;
  }
  else
  {
    *((_QWORD *)v10 + 8) = a1[1];
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
    gdwInAtomicOperation,
    v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v13 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v26, &v22);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    v14,
    v15);
  if ( v13 >= 0 && v22 == 24 )
  {
    v16 = (__int64 *)v26;
    if ( v26 + 8 < v26 || v26 + 8 > MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v17 = *v16;
    v28[3] = v17;
    if ( v17 )
      v17 = HMValidateHandleNoRip(v17, 3);
    goto LABEL_15;
  }
LABEL_22:
  v17 = 0LL;
LABEL_15:
  if ( v10 != (unsigned __int8 *)v29 && v10 != v30 )
  {
    v19 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28, (__int64)v19, v11);
  }
  return (unsigned __int8 *)v17;
}
