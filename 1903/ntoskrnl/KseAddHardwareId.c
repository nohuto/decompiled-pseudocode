/*
 * XREFs of KseAddHardwareId @ 0x14071AD10
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140154098 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1401540C0 (KsepPoolAllocatePaged.c)
 *     KsepLogError @ 0x140182C30 (KsepLogError.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 *     KsepCacheLookup @ 0x140738F58 (KsepCacheLookup.c)
 *     KsepStringDuplicate @ 0x140739310 (KsepStringDuplicate.c)
 *     KsepCacheInsert @ 0x1407394B4 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v1; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  _QWORD *Paged; // rax
  int v6; // ebx
  char v7; // bp
  __int64 v9; // rax
  _QWORD v10[8]; // [rsp+20h] [rbp-48h] BYREF

  v1 = (volatile signed __int64 *)qword_140468470;
  memset(v10, 0, 0x38uLL);
  if ( dword_140468424 != 2 )
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
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (_QWORD *)KsepCacheLookup(v1, v10);
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
    KsepCacheInsert(v1, v4);
    goto LABEL_7;
  }
  v6 = -1073741801;
LABEL_8:
  v7 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
