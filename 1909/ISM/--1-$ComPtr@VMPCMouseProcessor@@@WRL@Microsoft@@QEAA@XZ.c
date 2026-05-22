/*
 * XREFs of ??1?$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180139FB8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCMouseProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x18003BDF6 (_Microsoft--WRL--Details--MakeAndInitialize_MPCMouseProcessor_IInputProcessor_Input_ea_18003BDF6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 */

int __fastcall Microsoft::WRL::ComPtr<MPCMouseProcessor>::~ComPtr<MPCMouseProcessor>(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release(
                    v2,
                    a2);
  }
  return v2;
}
