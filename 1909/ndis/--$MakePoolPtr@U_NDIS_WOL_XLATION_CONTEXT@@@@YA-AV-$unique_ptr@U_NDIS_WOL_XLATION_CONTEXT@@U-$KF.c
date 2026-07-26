/*
 * XREFs of ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01151D8
 * Callers:
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C0077AB8 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C0077CF0 (ndisXlateAddWolPatternToPacketPatternOid.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

_QWORD *__fastcall MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(_QWORD *a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rcx
  PVOID v4; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v3 = 0LL;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v3 = v4;
  }
  *a1 = v3;
  return a1;
}
