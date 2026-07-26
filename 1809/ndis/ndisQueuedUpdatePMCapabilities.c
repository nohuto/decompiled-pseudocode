/*
 * XREFs of ndisQueuedUpdatePMCapabilities @ 0x1C00E7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisAddWoLMagicPacket @ 0x1C0014CE0 (ndisAddWoLMagicPacket.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001554C (ndisUpdatePMCurrentCapabilities.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisIndicatePMCapabilities @ 0x1C00E66C4 (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  int SetMiniport; // eax
  char v5; // al
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x75u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisUpdatePMCurrentCapabilities((__int64)MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (*(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 474) + 120LL) & 8) != 0 )
    {
      memset(v6, 0, sizeof(v6));
      *(_DWORD *)&v6[8] = 0;
      *(_DWORD *)&v6[88] |= 0x100008u;
      *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
      *(_DWORD *)v6 = 15466902;
      *(_QWORD *)&v6[40] = MiniportAdapterHandle + 1120;
      *(_DWORD *)&v6[32] = -50265847;
      *(_DWORD *)&v6[4] = 1;
      *(_DWORD *)&v6[48] = 20;
      SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v6, 0LL, 0LL);
      if ( SetMiniport )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 2u )
          WPP_SF_D(0x76u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, SetMiniport);
      }
    }
    v5 = MiniportAdapterHandle[32];
    if ( ((unsigned __int8)v5 > 6u || v5 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u)
      && (*((_DWORD *)MiniportAdapterHandle + 281) & 2) != 0 )
    {
      ndisAddWoLMagicPacket((KSPIN_LOCK *)MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x77u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)MiniportAdapterHandle);
}
