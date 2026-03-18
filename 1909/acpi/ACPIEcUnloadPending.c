/*
 * XREFs of ACPIEcUnloadPending @ 0x1C00AE9B0
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C0053B58 (ACPIEcDispatchQueries.c)
 *     ACPIEcServiceDevice @ 0x1C0053FDC (ACPIEcServiceDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnloadPending(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1[122] && !a1[456] && !a1[488] )
    a1[121] = 2;
  return result;
}
