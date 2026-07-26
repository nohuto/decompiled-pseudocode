/*
 * XREFs of ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CD74
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadSoftwareTimestampSettings(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int IntegerData; // ebx
  int v4; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER v5; // [rsp+58h] [rbp+20h] BYREF

  IntegerData = 0;
  NdisReadConfiguration(&v4, &v5, ConfigurationHandle, &SwTimestampSettingsStr, NdisParameterInteger);
  if ( !v4 )
    IntegerData = v5->ParameterData.IntegerData;
  a2->TimestampFlags = IntegerData;
}
