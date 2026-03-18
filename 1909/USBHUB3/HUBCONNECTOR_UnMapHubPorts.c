/*
 * XREFs of HUBCONNECTOR_UnMapHubPorts @ 0x1C0078E70
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0071660 (HUBFDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     HUBCONNECTOR_DeRegisterPort @ 0x1C0078514 (HUBCONNECTOR_DeRegisterPort.c)
 */

__int64 __fastcall HUBCONNECTOR_UnMapHubPorts(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 j; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int16 k; // di
  __int64 m; // rcx
  __int64 v8; // rcx

  for ( i = *(_WORD *)(a1 + 146); i <= *(_WORD *)(a1 + 148); ++i )
  {
    for ( j = *(_QWORD *)(a1 + 2360); ; j = *(_QWORD *)(v4 + 248) )
    {
      v4 = j - 248;
      result = v4 - 2112;
      if ( a1 == v4 - 2112 )
        break;
      if ( *(_WORD *)(v4 + 200) == i )
      {
        if ( v4 )
          result = HUBCONNECTOR_DeRegisterPort(v4);
        break;
      }
    }
  }
  for ( k = *(_WORD *)(a1 + 152); k <= *(_WORD *)(a1 + 154); ++k )
  {
    for ( m = *(_QWORD *)(a1 + 2360); ; m = *(_QWORD *)(v8 + 248) )
    {
      v8 = m - 248;
      result = v8 - 2112;
      if ( a1 == v8 - 2112 )
        break;
      if ( *(_WORD *)(v8 + 200) == k )
      {
        if ( v8 )
          result = HUBCONNECTOR_DeRegisterPort(v8);
        break;
      }
    }
  }
  return result;
}
