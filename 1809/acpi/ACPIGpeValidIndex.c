/*
 * XREFs of ACPIGpeValidIndex @ 0x1C0019D54
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0016EE4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019D20 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0026148 (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorConnect @ 0x1C005E7E0 (ACPIVectorConnect.c)
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
