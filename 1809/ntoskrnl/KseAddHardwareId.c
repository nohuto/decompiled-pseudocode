/*
 * XREFs of KseAddHardwareId @ 0x1406FEFC8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     KsepPoolFreePaged @ 0x1400F4CB4 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400F4CDC (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x14029FC44 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14029FEE4 (KsepLogError.c)
 *     KsepStringFree @ 0x14067E14C (KsepStringFree.c)
 *     KsepCacheLookup @ 0x14070CADC (KsepCacheLookup.c)
 *     KsepStringDuplicate @ 0x14070CD98 (KsepStringDuplicate.c)
 *     KsepCacheInsert @ 0x14070CF8C (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  _QWORD *Paged; // rax
  int v6; // ebx
  char v7; // bp
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v11; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_14043C900;
  if ( dword_14043C8B4 != 2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073741823;
    KsepHistoryErrors[2 * v9] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v4 = (_QWORD *)KsepCacheLookup(v2, v10);
  if ( v4 )
  {
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  Paged = KsepPoolAllocatePaged(0x38uLL);
  v4 = Paged;
  if ( Paged && (int)KsepStringDuplicate(Paged + 5, SourceString) >= 0 )
  {
    KsepCacheInsert(v2, v4);
    goto LABEL_7;
  }
  v6 = -1073741801;
LABEL_8:
  v7 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree(v4 + 5);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v6;
}
