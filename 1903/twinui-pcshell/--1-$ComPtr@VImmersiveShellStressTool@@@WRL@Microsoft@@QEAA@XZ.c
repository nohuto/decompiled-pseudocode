/*
 * XREFs of ??1?$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D6D90
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveShellStressTool_IUnknown__::_1_::dtor$2 @ 0x1801D69F8 (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveShellStressTool_IUnknown__--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSwitchController_IUnknown__::_1_::dtor$1 @ 0x18038C5DC (_Microsoft--WRL--Details--MakeAndInitialize_CSwitchController_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D72C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D72C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveShellStressTool>::~ComPtr<ImmersiveShellStressTool>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::Release(result);
  }
  return result;
}
