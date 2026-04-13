/*
 * XREFs of _lambda_1290cf522e3a88301cbf0056669b2abc_::__lambda_1290cf522e3a88301cbf0056669b2abc_ @ 0x1800719D8
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$2 @ 0x1800CCC3B (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800CCC3B.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$2 @ 0x1800CCD25 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180022FF0.c)
 */

volatile signed __int64 *__fastcall lambda_1290cf522e3a88301cbf0056669b2abc_::__lambda_1290cf522e3a88301cbf0056669b2abc_(
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
