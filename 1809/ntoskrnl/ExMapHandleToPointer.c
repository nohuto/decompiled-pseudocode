/*
 * XREFs of ExMapHandleToPointer @ 0x1405F56A0
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F5614 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpCloseHandle @ 0x1405F573C (ObpCloseHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x1405F6DAC (PspClearProcessThreadCidRefs.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x1405FC384 (ExMapHandleToPointerEx.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     ObSetHandleAttributes @ 0x14068D8F0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406979A0 (ObQueryObjectAuditingByHandle.c)
 *     RtlpFreeHandleForAtom @ 0x1406AD4C0 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406B741C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405E8990 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140697884 (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
