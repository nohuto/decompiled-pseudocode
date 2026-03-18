/*
 * XREFs of xxxClientExpandStringW @ 0x1C0052778
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0052E24 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  __int64 v10; // xmm1_8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  char v14; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v15[3]; // [rsp+31h] [rbp-307h] BYREF
  int v16; // [rsp+34h] [rbp-304h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v18; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-2D0h]
  _BYTE v22[24]; // [rsp+80h] [rbp-2B8h] BYREF
  _BYTE v23[56]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v24[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v4 = AllocCallbackMessage(56, 1u, v2, v24, 1, 0x248uLL);
  v17[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
  if ( v4 != v23 && v4 != v24 )
    PushW32ThreadLock(v4, v22, Win32FreePool);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((_QWORD *)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_26;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v15,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v17, &v16);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v15, v6);
  if ( v5 < 0 || v16 != 24 )
    goto LABEL_26;
  v7 = (__int64 *)v17[0];
  if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || v17[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v18 = *v7;
  v9 = v17[0];
  if ( (unsigned __int64)(v17[0] + 24LL) < v17[0] || v17[0] + 24LL > MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v10 = *(_QWORD *)(v9 + 16);
  v20 = *(_OWORD *)v9;
  v21 = v10;
  v11 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v11 && (*(_DWORD *)(v11 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v11 + 96) == a1 )
  {
LABEL_26:
    v12 = 0;
  }
  else
  {
    v12 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v20, v8, *((_DWORD *)a1 + 1) >> 31, 0);
    v18 = v12;
    CopyOutputString((struct _CALLBACKSTATUS *)&v20, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v4 != v23 && v4 != v24 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v22);
  }
  return v12;
}
