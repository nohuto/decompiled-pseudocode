/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140585708
 * Callers:
 *     PnpGetSystemPdoList @ 0x140585678 (PnpGetSystemPdoList.c)
 *     sub_140585FE0 @ 0x140585FE0 (sub_140585FE0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
