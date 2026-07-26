/*
 * XREFs of ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C011C674
 * Callers:
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BDA3C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 */

bool ndisDisconnectInStandby(void)
{
  NTSTATUS v0; // eax
  int v1; // edx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  v3 = 0LL;
  v5 = 0;
  v4 = 1;
  v0 = ZwPowerInformation(PowerInformationInternal, &v4, 8u, &v3, 8u);
  if ( v0 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v1,
        14,
        28,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        BYTE5(v3) & 1);
    }
    return BYTE5(v3) & 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 3;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v1,
        14,
        27,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        v0);
    }
    return 0;
  }
}
