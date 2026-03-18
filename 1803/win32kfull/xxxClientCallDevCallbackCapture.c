/*
 * XREFs of xxxClientCallDevCallbackCapture @ 0x1C0006FC8
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C0112EE0 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0053774 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall xxxClientCallDevCallbackCapture(__int64 a1, __int64 a2)
{
  const void *v4; // r15
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rdi
  __int64 v7; // rbx
  void **v8; // rdx
  unsigned __int8 *v9; // r11
  void *v10; // r11
  int v11; // ebx
  ULONG_PTR *v12; // rcx
  ULONG_PTR v13; // rbx
  char v15; // [rsp+30h] [rbp-3C8h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-3C7h] BYREF
  int v17; // [rsp+34h] [rbp-3C4h] BYREF
  void *v18; // [rsp+38h] [rbp-3C0h]
  unsigned __int8 *v19; // [rsp+40h] [rbp-3B8h]
  unsigned __int64 v20; // [rsp+48h] [rbp-3B0h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+50h] [rbp-3A8h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-388h] BYREF
  unsigned __int8 v23[304]; // [rsp+90h] [rbp-368h] BYREF
  unsigned __int8 v24[512]; // [rsp+1C0h] [rbp-238h] BYREF

  v4 = 0LL;
  v5 = 0;
  v18 = 0LL;
  if ( *(_DWORD *)(a2 + 4) == 5 )
  {
    v4 = *(const void **)(a2 + 16);
    v5 = *(_DWORD *)(a2 + 8);
  }
  if ( !v4 || !v5 )
    return 87LL;
  v6 = (unsigned __int8 *)AllocCallbackMessage(0x128u, 1u, v5, v24, 1, 0x200uLL);
  v19 = v6;
  if ( !v6 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v6 != v23 && v6 != v24 )
    PushW32ThreadLock(v6, v22, Win32FreePool);
  *((_QWORD *)v6 + 5) = a1;
  *((_OWORD *)v6 + 3) = *(_OWORD *)a2;
  *((_OWORD *)v6 + 4) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)v6 + 5) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)v6 + 6) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)v6 + 7) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)v6 + 8) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)v6 + 9) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)v6 + 10) = *(_OWORD *)(a2 + 112);
  v7 = a2 + 128;
  *((_OWORD *)v6 + 11) = *(_OWORD *)v7;
  *((_OWORD *)v6 + 12) = *(_OWORD *)(v7 + 16);
  *((_OWORD *)v6 + 13) = *(_OWORD *)(v7 + 32);
  *((_OWORD *)v6 + 14) = *(_OWORD *)(v7 + 48);
  *((_OWORD *)v6 + 15) = *(_OWORD *)(v7 + 64);
  *((_OWORD *)v6 + 16) = *(_OWORD *)(v7 + 80);
  *((_OWORD *)v6 + 17) = *(_OWORD *)(v7 + 96);
  *((_QWORD *)v6 + 36) = *(_QWORD *)(v7 + 112);
  v8 = (void **)(v6 + 64);
  if ( *((_DWORD *)v6 + 13) != 5 )
    v8 = 0LL;
  if ( v5 <= *((_DWORD *)v6 + 1) )
  {
    v9 = (unsigned __int8 *)*((_QWORD *)v6 + 2);
    *((_QWORD *)v6 + 2) = &v9[(v5 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    FixupCaptureDataOffsets((struct _CAPTUREBUF *)v6, v8, v9);
    v18 = v10;
  }
  memmove(v18, v4, v5);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(55LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v11 = KeUserModeCallback(55LL, v6, *(unsigned int *)v6, &v20, &v17);
  EtwTraceEndCallback(55LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
  if ( v11 >= 0 && v17 == 24 )
  {
    v12 = (ULONG_PTR *)v20;
    if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
      v12 = (ULONG_PTR *)MmUserProbeAddress;
    v13 = *v12;
    RegionSize[1] = *v12;
  }
  else
  {
    LODWORD(v13) = 0;
  }
  if ( v6 != v23 && v6 != v24 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v22);
  }
  return (unsigned int)v13;
}
