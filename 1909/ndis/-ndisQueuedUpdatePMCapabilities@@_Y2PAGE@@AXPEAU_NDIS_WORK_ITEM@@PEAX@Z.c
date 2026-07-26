/*
 * XREFs of ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ndisAddWoLMagicPacket @ 0x1C0034998 (ndisAddWoLMagicPacket.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C003C7BC (ndisUpdatePMCurrentCapabilities.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisIndicatePMCapabilities @ 0x1C0073210 (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  int v4; // edx
  int SetMiniport; // eax
  int v6; // edx
  char v7; // al
  int v8; // edx
  _QWORD v9[32]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v9, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      117,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( ndisUpdatePMCurrentCapabilities((__int64)MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (*(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 120LL) & 8) != 0 )
    {
      LODWORD(v9[1]) = 0;
      LODWORD(v9[11]) |= 0x100008u;
      v9[13] = &ndisIntReqGeneric;
      v9[0] = 0x100EC0196LL;
      v9[5] = MiniportAdapterHandle + 1120;
      LODWORD(v9[4]) = -50265847;
      LODWORD(v9[6]) = 20;
      SetMiniport = ndisQuerySetMiniport((__int64)MiniportAdapterHandle, 0LL, (__int64)v9, 0, 0LL);
      if ( SetMiniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            14,
            118,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            SetMiniport);
        }
      }
    }
    v7 = MiniportAdapterHandle[32];
    if ( ((unsigned __int8)v7 > 6u || v7 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u)
      && (*((_DWORD *)MiniportAdapterHandle + 281) & 2) != 0 )
    {
      ndisAddWoLMagicPacket((KSPIN_LOCK *)MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      119,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
