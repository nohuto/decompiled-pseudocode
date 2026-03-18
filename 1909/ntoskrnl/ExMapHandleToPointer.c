/*
 * XREFs of ExMapHandleToPointer @ 0x140610ED0
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x140610A28 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x140610AD0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x140610BE0 (ObSetHandleAttributes.c)
 *     ObpCloseHandle @ 0x140610DCC (ObpCloseHandle.c)
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x140612278 (ExMapHandleToPointerEx.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406C60AC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406DABBC (RtlpInsertStringAtom.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
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
