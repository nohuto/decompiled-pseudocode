/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x14092706C
 * Callers:
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140934880 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140934B18 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x140927040 (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
