/*
 * XREFs of ndisIsMiniportReady @ 0x1C007E5F4
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0092120 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C013620C (-ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 */

char __fastcall ndisIsMiniportReady(_DWORD *a1)
{
  int v1; // edx
  int v2; // r9d
  char v4; // [rsp+30h] [rbp-18h]

  v1 = a1[30];
  if ( (v1 & 0x80200020) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 60;
LABEL_13:
      v4 = v1;
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v1,
        13,
        v2,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        (char)a1,
        v4);
      return 0;
    }
    return 0;
  }
  v1 = a1[31];
  if ( (v1 & 0x1084910) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 61;
      goto LABEL_13;
    }
    return 0;
  }
  v1 = a1[380];
  if ( v1 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 62;
      goto LABEL_13;
    }
    return 0;
  }
  v1 = a1[967];
  if ( v1 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 63;
      goto LABEL_13;
    }
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      13,
      64,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  }
  return 1;
}
