/*
 * XREFs of CmpTryToLockHashEntryExclusive @ 0x1406E6E08
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1406619EC (CmpReferenceHive.c)
 */

char __fastcall CmpTryToLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  char v4; // di
  ULONG_PTR v5; // rsi
  _KLOCK_ENTRY *v6; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = 1;
  v5 = *(_QWORD *)(BugCheckParameter2 + 1640)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1648) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  v6 = (_KLOCK_ENTRY *)KeAbPreAcquire(v5, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(v5, v6);
    return 0;
  }
  else
  {
    if ( v6 )
      v6->AcquiredByte |= 1u;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( !CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xDuLL, v2);
  }
  return v4;
}
