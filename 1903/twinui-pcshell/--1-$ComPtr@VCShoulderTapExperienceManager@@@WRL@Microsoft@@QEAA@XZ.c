/*
 * XREFs of ??1?$ComPtr@VCShoulderTapExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180193E94
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801939C3 (_Microsoft--WRL--Details--MakeAndInitialize_CShoulderTapExperienceManager_IInspecta_ea_1801939C3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVectorChangedEventArgs@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180147E70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVectorChangedEve.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CShoulderTapExperienceManager>::~ComPtr<CShoulderTapExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorChangedEventArgs>::Release(result);
  }
  return result;
}
