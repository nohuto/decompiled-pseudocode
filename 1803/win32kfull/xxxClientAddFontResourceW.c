/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C004F294
 * Callers:
 *     xxxAddFontResourceW @ 0x1C004F254 (xxxAddFontResourceW.c)
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
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(unsigned __int16 *a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v11; // rbx
  char v13; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v15; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2E0h] BYREF
  _BYTE v18[32]; // [rsp+60h] [rbp-2C8h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v20[512]; // [rsp+110h] [rbp-218h] BYREF

  v7 = AllocCallbackMessage(136, 1u, a1[1], v20, 1, 0x200uLL);
  v16[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( v7 != v19 && v7 != v20 )
    PushW32ThreadLock(v7, v18, Win32FreePool);
  *((_WORD *)v7 + 20) = *a1;
  *((_WORD *)v7 + 21) = a1[1];
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v7, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v7 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v7 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v7 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v7 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v7 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v7 + 16) = 0;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(83LL, v7, *(unsigned int *)v7, v16, &v15);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v14, v9);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( v15 == 24 )
  {
    v10 = (ULONG_PTR *)v16[0];
    if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
      v10 = (ULONG_PTR *)MmUserProbeAddress;
    v11 = *v10;
    RegionSize[1] = *v10;
  }
  else
  {
LABEL_19:
    LODWORD(v11) = 0;
  }
  if ( v7 != v19 && v7 != v20 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  }
  return (unsigned int)v11;
}
