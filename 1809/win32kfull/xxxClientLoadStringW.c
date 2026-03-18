/*
 * XREFs of xxxClientLoadStringW @ 0x1C00BEB60
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00BEA70 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00B0068 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, WCHAR *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // r10
  ULONG64 v12; // rcx
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  unsigned int v15; // ebx
  PVOID *v17; // rdx
  char v18; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v19[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v20; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-2E0h] BYREF
  PWCH v22[2]; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-2C0h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-2A0h]
  _QWORD v27[4]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v28[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v29[512]; // [rsp+F0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v22[1] = a2;
  v22[0] = (PWCH)0x200000000LL;
  v7 = AllocCallbackMessage(64, 1u, 2 * a3, v29, 0, 0x200uLL);
  v21[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( v7 != v28 && v7 != v29 )
    PushW32ThreadLock((__int64)v7, v27, (__int64)Win32FreePool);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v7, v5, (void **)v7 + 6) < 0 )
    goto LABEL_24;
  *((_DWORD *)v7 + 14) = v5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v19,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, v21, &v20);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v19, v9);
  if ( v8 < 0 || v20 != 24 )
    goto LABEL_24;
  v10 = (__int64 *)v21[0];
  if ( (unsigned __int64)(v21[0] + 8LL) < v21[0] || v21[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v23 = *v10;
  v12 = v21[0];
  if ( (unsigned __int64)(v21[0] + 24LL) < v21[0] || v21[0] + 24LL > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_QWORD *)(v12 + 16);
  v25 = *(_OWORD *)v12;
  v26 = v13;
  v14 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v14 && (*(_DWORD *)(v14 + 84) & 1) != 0 && *(PWCH **)(v14 + 96) == v22 )
  {
LABEL_24:
    v15 = 0;
  }
  else
  {
    v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v25, v11, 0, 0);
    v23 = v15;
    CopyOutputString((struct _CALLBACKSTATUS *)&v25, v22, a3, 0);
  }
  if ( v7 != v28 && v7 != v29 )
  {
    v17 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v17, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v27, (__int64)v17);
  }
  return v15;
}
