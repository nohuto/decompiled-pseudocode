/*
 * XREFs of HUBCONNECTOR_MapExternalHubPorts @ 0x1C0071E80
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C006AC40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1C00713A8 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapExternalHubPorts(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 i; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
LABEL_2:
    for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v4 + 248) )
    {
      v4 = i - 248;
      if ( a1 == v4 - 2112 )
        break;
      if ( *(_WORD *)(v4 + 200) == v2 )
      {
        if ( v4 )
        {
          v5 = *(_QWORD *)(a1 + 280);
          *(_OWORD *)(v4 + 1368) = *(_OWORD *)v5;
          *(_OWORD *)(v4 + 1384) = *(_OWORD *)(v5 + 16);
          *(_OWORD *)(v4 + 1400) = *(_OWORD *)(v5 + 32);
          *(_QWORD *)(v4 + 1416) = *(_QWORD *)(v5 + 48);
          *(_DWORD *)(v4 + 4LL * (unsigned __int16)++*(_WORD *)(v4 + 1388) + 1392) = v2;
          if ( ((*(_DWORD *)(v4 + 204) & 1) == 0 || (int)HUBCONNECTOR_RegisterPort(v4) >= 0)
            && ++v2 <= *(_WORD *)(a1 + 48) )
          {
            goto LABEL_2;
          }
        }
        return;
      }
    }
  }
}
