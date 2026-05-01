/*
 * XREFs of ??1?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ @ 0x18010DEF8
 * Callers:
 *     _Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item____&__::_1_::dtor$0 @ 0x18008C09F (_Microsoft--WRL--Details--Make_AgileRegistrationList--AgileCallbackArray_std--vector_AgileRegist.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CBF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<AgileRegistrationList::AgileCallbackArray>::~ComPtr<AgileRegistrationList::AgileCallbackArray>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
