/*
 * XREFs of xxxClientExpandStringW @ 0x1C005AC40
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0057C04 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0057744 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0057820 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rdi
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // r10
  ULONG64 v10; // rcx
  __int64 v11; // xmm0_8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  PVOID *v15; // rdx
  char v16; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-307h] BYREF
  int v18; // [rsp+34h] [rbp-304h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v20; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v24; // [rsp+80h] [rbp-2B8h]
  unsigned __int8 v25[56]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v26[592]; // [rsp+D0h] [rbp-268h] BYREF

  memset(v25, 0, sizeof(v25));
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = AllocCallbackMessage(56, 1u, v2, v26, 1, 0x248uLL);
  v19[1] = v3;
  if ( !v3 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v22, 0, sizeof(v22));
  if ( v3 != v25 && v3 != v26 )
    PushW32ThreadLock((__int64)v3, v22, (__int64)Win32FreePool);
  *((_DWORD *)v3 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v3 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v3 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v3, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v3 + 6) < 0 )
    goto LABEL_26;
  *((_DWORD *)v3 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    gdwInAtomicOperation,
    v4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v3 + 2) = 0LL;
  v5 = KeUserModeCallback(59LL, v3, *(unsigned int *)v3, v19, &v18);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    v6,
    v7);
  if ( v5 < 0 || v18 != 24 )
    goto LABEL_26;
  v8 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v20 = *v8;
  v10 = v19[0];
  if ( (unsigned __int64)(v19[0] + 24LL) < v19[0] || v19[0] + 24LL > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v11 = *(_QWORD *)(v10 + 16);
  v23 = *(_OWORD *)v10;
  v24 = v11;
  v12 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v12 && (*(_DWORD *)(v12 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v12 + 96) == a1 )
  {
LABEL_26:
    v13 = 0;
  }
  else
  {
    v13 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v23, v9, *((_DWORD *)a1 + 1) >> 31, 0);
    v20 = v13;
    CopyOutputString((volatile void **)&v23, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v3 != v25 && v3 != v26 )
  {
    v15 = (PVOID *)(v3 + 32);
    if ( *((_QWORD *)v3 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v15, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v22, (__int64)v15, v4);
  }
  return v13;
}
