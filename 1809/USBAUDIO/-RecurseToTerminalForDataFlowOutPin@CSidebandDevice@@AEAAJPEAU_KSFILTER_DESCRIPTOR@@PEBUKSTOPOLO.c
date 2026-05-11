/*
 * XREFs of ?RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000A198
 * Callers:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000A198 (-RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLO.c)
 * Callees:
 *     ?RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000A198 (-RecurseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLO.c)
 */

__int64 __fastcall CSidebandDevice::RecurseToTerminalForDataFlowOutPin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int *a4)
{
  int v8; // r10d
  ULONG ConnectionsCount; // r14d
  ULONG v10; // edi
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  ULONG *p_ToNode; // rbp

  v8 = -1073741275;
  if ( a3->FromNode == -1 )
  {
    v8 = 0;
    *a4 = a3->FromNodePin;
  }
  else if ( a2 )
  {
    ConnectionsCount = a2->ConnectionsCount;
    v10 = 0;
    Connections = a2->Connections;
    if ( ConnectionsCount )
    {
      p_ToNode = &Connections->ToNode;
      do
      {
        if ( *p_ToNode == a3->FromNode )
          v8 = CSidebandDevice::RecurseToTerminalForDataFlowOutPin(this, a2, &Connections[v10], a4);
        if ( v8 >= 0 )
          break;
        ++v10;
        p_ToNode += 4;
      }
      while ( v10 < ConnectionsCount );
    }
  }
  return (unsigned int)v8;
}
