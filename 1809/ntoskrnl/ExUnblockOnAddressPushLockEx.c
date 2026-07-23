/*
 * XREFs of ExUnblockOnAddressPushLockEx @ 0x14031B180
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall ExUnblockOnAddressPushLockEx(volatile __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v2, 0);
  if ( *BugCheckParameter2 )
    ExpUnblockPushLock(BugCheckParameter2, 0LL, 0);
}
