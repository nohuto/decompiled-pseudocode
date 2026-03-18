/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x1405E0EA0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  _KLOCK_ENTRY *v2; // rax
  signed __int64 BugCheckParameter4; // rax

  v2 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2 - 16, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      v2->AcquiredByte |= 1u;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
