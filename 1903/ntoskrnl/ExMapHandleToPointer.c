/*
 * XREFs of ExMapHandleToPointer @ 0x14060F3C0
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x14060EF18 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x14060EFC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14060F0D0 (ObSetHandleAttributes.c)
 *     ObpCloseHandle @ 0x14060F2BC (ObpCloseHandle.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x140610768 (ExMapHandleToPointerEx.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406C77CC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406DA2BC (RtlpInsertStringAtom.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  signed __int64 *v2; // rax
  __int64 v3; // r9
  signed __int64 *v4; // rbx

  if ( (a2 & 0x3FC) != 0
    && (v2 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2), (v4 = v2) != 0LL)
    && ExLockHandleTableEntry(v3, v2) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
