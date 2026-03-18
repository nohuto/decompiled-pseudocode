/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x1409644FC
 * Callers:
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140972EC0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140973134 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x1409644D0 (VfUtilAddressRangeRemove.c)
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
