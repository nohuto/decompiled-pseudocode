/*
 * XREFs of ?RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0009550
 * Callers:
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C00090CC (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0009550 (-RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNEC.c)
 * Callees:
 *     ?RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0009550 (-RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNEC.c)
 */

__int64 __fastcall CSidebandDevice::RecurseToCaptureBridgePin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int *a4)
{
  int v8; // r10d
  ULONG FromNodePin; // edx
  ULONG i; // edi
  const KSTOPOLOGY_CONNECTION *v11; // r8

  v8 = -1073741275;
  if ( a3->FromNode == -1 )
  {
    FromNodePin = a3->FromNodePin;
    if ( *(_QWORD *)((char *)&a2->PinDescriptors->PinDescriptor.DataFlow + FromNodePin * a2->PinDescriptorSize) == 0x400000001LL )
    {
      *a4 = FromNodePin;
      return 0;
    }
  }
  else
  {
    for ( i = 0; i < a2->ConnectionsCount; ++i )
    {
      v11 = &a2->Connections[i];
      if ( v11->ToNode == a3->FromNode )
      {
        v8 = CSidebandDevice::RecurseToCaptureBridgePin(this, a2, v11, a4);
        if ( v8 >= 0 )
          break;
      }
    }
  }
  return (unsigned int)v8;
}
