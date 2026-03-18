/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1408CE130
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x1405FB378 (ExpFreeHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406965A0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1408613B4 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405E8990 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8LL * (unsigned __int8)(v3 >> 2);
  else
    return 0LL;
}
