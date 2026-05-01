/*
 * XREFs of std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_ @ 0x180227CA0
 * Callers:
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af___ @ 0x18022AA40 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_5945374.c)
 * Callees:
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18022ADF8 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_Tl.c)
 */

__int64 __fastcall std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_180463E50;
  v3 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = a2[1];
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a2 + 2);
  *(_QWORD *)(a1 + 32) = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  return a1;
}
