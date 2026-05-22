/*
 * XREFs of ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180091DAC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x180091AA6 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputP_ea_180091AA6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180091BE6 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_ea_180091BE6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180091D2D (_Microsoft--WRL--Details--MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_Input_ea_180091D2D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x18012E89A (_Microsoft--WRL--Details--MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_Inpu_ea_18012E89A.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x18013EA39 (_Microsoft--WRL--Details--MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_Inp_ea_18013EA39.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x18013F076 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputP_ea_18013F076.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x18013F682 (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_18013F682.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180092110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_180092110.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCHandProcessor>::~ComPtr<MPCHandProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(result);
  }
  return result;
}
