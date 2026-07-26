/*
 * XREFs of ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BD40
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

char __fastcall ndisQueueOpenOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rsi
  __int64 PnPDeviceState; // rcx
  char v5; // di
  char v7; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      113,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v7);
  }
  PnPDeviceState = (unsigned int)a1->PnPDeviceState;
  if ( (((_DWORD)PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || (_DWORD)PnPDeviceState == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        6,
        114,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1,
        (char)v2);
    }
    if ( (byte_1C00E8041 & 2) != 0 )
      McTemplateK0jqxq(
        PnPDeviceState,
        &OpenFailedMiniportNotStarted,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)v2);
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v2->MiniportNextOpen = a1->OpenQueue;
    ++a1->NumOpens;
    a1->OpenQueue = v2;
    ndisUpdateCheckForLoopbackFlag((__int64)a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      115,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      (char)v2,
      v5);
  }
  return v5;
}
