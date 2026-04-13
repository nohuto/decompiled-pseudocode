/*
 * XREFs of _lambda_c61fab55ebd7ca4a424d2b4e7316a3f3_::__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3_ @ 0x18007333C
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$2 @ 0x1800D0E4D (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800D0E4D.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$2 @ 0x1800D0F37 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180023690.c)
 */

volatile signed __int64 *__fastcall lambda_c61fab55ebd7ca4a424d2b4e7316a3f3_::__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
