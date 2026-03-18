/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1406A3B5C
 * Callers:
 *     sub_140622710 @ 0x140622710 (sub_140622710.c)
 *     PnpGetSystemPdoList @ 0x1406A3AC8 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
