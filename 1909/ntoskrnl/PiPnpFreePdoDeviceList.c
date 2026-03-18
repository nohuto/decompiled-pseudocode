/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140623B80
 * Callers:
 *     PnpGetSystemPdoList @ 0x140623AEC (PnpGetSystemPdoList.c)
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
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
