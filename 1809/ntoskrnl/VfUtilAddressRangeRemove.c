/*
 * XREFs of VfUtilAddressRangeRemove @ 0x140927040
 * Callers:
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x14092706C (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViDeadlockRemoveResource @ 0x14093E948 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14093EAE4 (ViDeadlockRemoveThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeRemove(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( a2 == *a1 )
    *a1 += a3;
  v3 = a1[1];
  result = a2 + a3;
  if ( a2 + a3 == v3 )
    a1[1] = v3 - a3;
  return result;
}
