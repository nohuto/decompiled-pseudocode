/*
 * XREFs of ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0022090
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 */

unsigned __int8 __fastcall ndisMIndicateNicSwitchCapsChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned __int8 result; // al
  unsigned __int16 v7; // r9
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  size_t v9; // r8

  result = 0;
  if ( a4 >= 0x20 && *(_BYTE *)a3 == 0x80 )
  {
    v7 = a3[1];
    if ( v7 >= 0x20u )
    {
      if ( *((_BYTE *)a3 + 1) )
      {
        if ( a5 )
          TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        else
          TopNicSwitchCurrentCapabilities = a2 == 1073872960
                                          ? a1->NicSwitchCurrentCapabilities
                                          : a1->NicSwitchHwCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
        {
          v9 = 132LL;
          if ( v7 < 0x84u )
            v9 = v7;
          memmove(TopNicSwitchCurrentCapabilities, a3, v9);
          return 1;
        }
      }
    }
  }
  return result;
}
