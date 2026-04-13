/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180023390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef((Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *)(a1 - 8));
}
