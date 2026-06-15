/*
 * XREFs of ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800D5A40
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800CF2C0 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4B14 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800D59B0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriodInternal(struct CEndpointCharacteristics *a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
  {
    v2 = -2147467261;
    goto LABEL_9;
  }
  if ( *a2 && (unsigned __int64)(*a2 - 50000) > 0xE7EF0 )
  {
    v2 = -2005139386;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriodInternal", 3782, v2);
    return (unsigned int)v2;
  }
  v3 = *((_QWORD *)a1 + 5);
  v5[2] = a2;
  v5[0] = 65LL;
  v5[1] = 8LL;
  v2 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD *))(*(_QWORD *)v3 + 48LL))(v3, &PKEY_AudioEngine_Period, v5);
  if ( v2 < 0 )
    goto LABEL_9;
  return (unsigned int)v2;
}
