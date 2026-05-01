/*
 * XREFs of ??1?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB180
 * Callers:
 *     _Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item____&___ptr64__::_1_::dtor$0 @ 0x18008953F (_Microsoft--WRL--Details--Make_AgileRegistrationList--AgileCallbackArray_std--vector_AgileRegist.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800596E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AgileRegistrationList::AgileCallbackArray>::~ComPtr<AgileRegistrationList::AgileCallbackArray>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
