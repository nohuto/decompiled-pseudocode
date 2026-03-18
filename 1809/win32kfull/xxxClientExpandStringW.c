/*
 * XREFs of xxxClientExpandStringW @ 0x1C00DAF0C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReas.c)
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
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00B0068 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int8 *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r10
  ULONG64 v9; // rcx
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  PVOID *v14; // rdx
  char v15; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-307h] BYREF
  int v17; // [rsp+34h] [rbp-304h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v19; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-2D0h]
  _QWORD v23[3]; // [rsp+80h] [rbp-2B8h] BYREF
  _BYTE v24[56]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v25[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v4 = AllocCallbackMessage(56, 1u, v2, v25, 1, 0x248uLL);
  v18[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
  if ( v4 != v24 && v4 != v25 )
    PushW32ThreadLock((__int64)v4, v23, (__int64)Win32FreePool);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((_QWORD *)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_26;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v18, &v17);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16, v6);
  if ( v5 < 0 || v17 != 24 )
    goto LABEL_26;
  v7 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v19 = *v7;
  v9 = v18[0];
  if ( (unsigned __int64)(v18[0] + 24LL) < v18[0] || v18[0] + 24LL > MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v10 = *(_QWORD *)(v9 + 16);
  v21 = *(_OWORD *)v9;
  v22 = v10;
  v11 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v11 && (*(_DWORD *)(v11 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v11 + 96) == a1 )
  {
LABEL_26:
    v12 = 0;
  }
  else
  {
    v12 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v21, v8, *((_DWORD *)a1 + 1) >> 31, 0);
    v19 = v12;
    CopyOutputString((struct _CALLBACKSTATUS *)&v21, (PWCH *)a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v4 != v24 && v4 != v25 )
  {
    v14 = (PVOID *)(v4 + 32);
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v23, (__int64)v14);
  }
  return v12;
}
