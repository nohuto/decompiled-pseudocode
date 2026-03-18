/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14090B6D8
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x14060F8C0 (ExpFreeHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x14089DE24 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
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
