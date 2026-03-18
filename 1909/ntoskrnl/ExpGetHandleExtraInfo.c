/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14090B138
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6FF0 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x1406113D0 (ExpFreeHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x14089D644 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
