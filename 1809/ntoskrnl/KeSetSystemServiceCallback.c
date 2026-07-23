/*
 * XREFs of KeSetSystemServiceCallback @ 0x140845BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeIsValidTraceCallbackTarget @ 0x140845B80 (KeIsValidTraceCallbackTarget.c)
 *     KiGetSystemServiceTraceTable @ 0x140845D74 (KiGetSystemServiceTraceTable.c)
 */

__int64 __fastcall KeSetSystemServiceCallback(_BYTE *a1, char a2, unsigned __int64 a3, __int64 a4)
{
  int IsValidTraceCallbackTarget; // edi
  __int64 SystemServiceTraceTable; // r8
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *i; // rdx
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    IsValidTraceCallbackTarget = KeIsValidTraceCallbackTarget(a3);
    if ( IsValidTraceCallbackTarget < 0 )
      return (unsigned int)IsValidTraceCallbackTarget;
  }
  SystemServiceTraceTable = KiGetSystemServiceTraceTable();
  if ( !SystemServiceTraceTable )
    return (unsigned int)-1073741670;
  v10 = 0;
  while ( *a1 )
  {
    v10 = ((1025 * (v10 + (char)*a1)) >> 6) ^ (1025 * (v10 + (char)*a1));
    ++a1;
  }
  v11 = 0LL;
  for ( i = (_DWORD *)(SystemServiceTraceTable + 52); v10 != *i; i += 18 )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= 0x1D0 )
      return (unsigned int)-1073741275;
  }
  v13 = SystemServiceTraceTable + 8 * (v11 + 8 * v11 + 2);
  if ( !v13 )
    return (unsigned int)-1073741275;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiSystemServiceTraceCallbackLock, 0LL);
  v15 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = *(_QWORD *)(v15 + v13 + 56);
  if ( !a3 )
  {
    if ( v16 )
    {
      if ( !--KiSystemServiceTraceCallbackCount )
        _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFE);
      *(_QWORD *)(v15 + v13 + 56) = 0LL;
      _InterlockedOr(v18, 0);
      while ( KiSystemServiceTraceCallbacksActive )
        _mm_pause();
      *(_QWORD *)(v15 + v13 + 64) = 0LL;
    }
    goto LABEL_26;
  }
  if ( !v16 )
  {
    *(_QWORD *)(v15 + v13 + 64) = a4;
    _InterlockedOr(v18, 0);
    *(_QWORD *)(v15 + v13 + 56) = a3;
    if ( ++KiSystemServiceTraceCallbackCount == 1 )
      _InterlockedOr(&KiDynamicTraceMask, 1u);
LABEL_26:
    IsValidTraceCallbackTarget = 0;
    goto LABEL_27;
  }
  IsValidTraceCallbackTarget = -1073740008;
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock);
  KeAbPostRelease((ULONG_PTR)&KiSystemServiceTraceCallbackLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)IsValidTraceCallbackTarget;
}
