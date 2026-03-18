/*
 * XREFs of ACPIGpeValidIndex @ 0x1C0023E5C
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C00224E8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0023C40 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0023E28 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIVectorConnect @ 0x1C00606B0 (ACPIVectorConnect.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIGpeValidIndex(unsigned int a1)
{
  bool result; // al
  unsigned int v2; // r8d

  result = 1;
  if ( a1 >= 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
  {
    v2 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( a1 < v2 || a1 >= v2 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
      return 0;
  }
  return result;
}
