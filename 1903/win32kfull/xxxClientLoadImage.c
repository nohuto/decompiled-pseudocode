/*
 * XREFs of xxxClientLoadImage @ 0x1C00B5A14
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B6714 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DDBD4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 *v23; // rbx
  __int64 v24; // rbx
  unsigned __int8 *result; // rax
  PVOID *v26; // rdx
  char v27; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v28[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v29; // [rsp+34h] [rbp-2E4h] BYREF
  __int64 v30; // [rsp+38h] [rbp-2E0h]
  void *v31; // [rsp+40h] [rbp-2D8h]
  unsigned __int8 *v32; // [rsp+48h] [rbp-2D0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-2C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-2C0h] BYREF
  _QWORD v35[6]; // [rsp+60h] [rbp-2B8h] BYREF
  _DWORD v36[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v37[512]; // [rsp+F0h] [rbp-228h] BYREF

  v30 = 0LL;
  memset(v36, 0, sizeof(v36));
  v9 = *((_WORD *)a1 + 1);
  v31 = 0LL;
  if ( v9 )
  {
    result = AllocCallbackMessage(96, v9 != 0, v9 & (unsigned __int64)-(__int64)(v9 != 0), v37, 1, 0x200uLL);
    v10 = result;
    v32 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v36;
    v32 = (unsigned __int8 *)v36;
    memset(&v36[1], 0, 0x5CuLL);
    v36[0] = 96;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  memset(v35, 0, 24);
  if ( v10 != (unsigned __int8 *)v36 && v10 != v37 )
    PushW32ThreadLock((__int64)v10, v35, (__int64)Win32FreePool, v14);
  *((_DWORD *)v10 + 10) = v30;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (char *)v31,
              (unsigned int)(unsigned __int16)v30 + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_22;
  *((_WORD *)v10 + 28) = *(_WORD *)a1;
  v17 = *((_WORD *)a1 + 1);
  *((_WORD *)v10 + 29) = v17;
  if ( v17 )
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
    (ReleaseAndReacquirePerObjectLocks *)v28,
    gdwInAtomicOperation,
    v15,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v18 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v33, &v29);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v28,
    v19,
    v20,
    v21);
  if ( v18 >= 0 && v29 == 24 )
  {
    v23 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v35[3] = v24;
    if ( v24 )
    {
      LOBYTE(v22) = 3;
      v24 = HMValidateHandleNoRip(v24, v22, v15, v16);
    }
    goto LABEL_15;
  }
LABEL_22:
  v24 = 0LL;
LABEL_15:
  if ( v10 != (unsigned __int8 *)v36 && v10 != v37 )
  {
    v26 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v26, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v35, (__int64)v26, v15, v16);
  }
  return (unsigned __int8 *)v24;
}
