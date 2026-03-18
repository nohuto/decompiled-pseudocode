/*
 * XREFs of xxxClientLoadStringW @ 0x1C0052BB4
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0052AC4 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0052E24 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0053734 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // r10
  ULONG64 v12; // rcx
  __int64 v13; // xmm1_8
  __int64 v14; // rdx
  unsigned int v15; // ebx
  char v17; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v19; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-2E0h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-2C8h]
  __int64 v23; // [rsp+58h] [rbp-2C0h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-2A0h]
  _BYTE v27[32]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v28[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v29[512]; // [rsp+F0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v22 = a2;
  v21[0] = 0;
  v21[1] = 2;
  v7 = AllocCallbackMessage(64, 1u, 2 * a3, v29, 0, 0x200uLL);
  v20[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( v7 != v28 && v7 != v29 )
    PushW32ThreadLock(v7, v27, Win32FreePool);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v7, v5, (void **)v7 + 6) < 0 )
    goto LABEL_24;
  *((_DWORD *)v7 + 14) = v5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v18,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, v20, &v19);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v18, v9);
  if ( v8 < 0 || v19 != 24 )
    goto LABEL_24;
  v10 = (__int64 *)v20[0];
  if ( (unsigned __int64)(v20[0] + 8LL) < v20[0] || v20[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v23 = *v10;
  v12 = v20[0];
  if ( (unsigned __int64)(v20[0] + 24LL) < v20[0] || v20[0] + 24LL > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_QWORD *)(v12 + 16);
  v25 = *(_OWORD *)v12;
  v26 = v13;
  v14 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v14 && (*(_DWORD *)(v14 + 84) & 1) != 0 && *(_DWORD **)(v14 + 96) == v21 )
  {
LABEL_24:
    v15 = 0;
  }
  else
  {
    v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v25, v11, 0, 0);
    v23 = v15;
    CopyOutputString((struct _CALLBACKSTATUS *)&v25, (struct _LARGE_STRING *)v21, a3, 0);
  }
  if ( v7 != v28 && v7 != v29 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v27);
  }
  return v15;
}
