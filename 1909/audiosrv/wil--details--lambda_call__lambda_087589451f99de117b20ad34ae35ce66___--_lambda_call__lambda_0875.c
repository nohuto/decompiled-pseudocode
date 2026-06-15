/*
 * XREFs of wil::details::lambda_call__lambda_087589451f99de117b20ad34ae35ce66___::_lambda_call__lambda_087589451f99de117b20ad34ae35ce66___ @ 0x1800BB2EC
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$7 @ 0x180072CEA (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_087589451f99de117b20ad34ae35ce66___::_lambda_call__lambda_087589451f99de117b20ad34ae35ce66___(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(v1 + 24));
  }
  return result;
}
