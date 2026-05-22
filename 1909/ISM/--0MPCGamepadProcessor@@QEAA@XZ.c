/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180136CA8
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180136A9C (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180018720 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180136C24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>((__int64)this);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable';
  *((_QWORD *)this + 1) = &MPCGamepadProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 580) = 0LL;
  *((_QWORD *)this + 581) = 0LL;
  memset_0((char *)this + 4656, 0, 0x7F0uLL);
  *((_DWORD *)this + 1170) = 2032;
  *((_DWORD *)this + 1672) = 0;
  memset_0((char *)this + 6696, 0, 0x1C8uLL);
  *((_DWORD *)this + 1788) = 0;
  *((_WORD *)this + 3578) = 0;
  *((_BYTE *)this + 7158) = 0;
  memset_0((char *)this + 7160, 0, 0x38uLL);
  *((_QWORD *)this + 903) = 0LL;
  *((_DWORD *)this + 1808) = 1065353216;
  *((_QWORD *)this + 902) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 905) = 0LL;
  *((_QWORD *)this + 906) = 0LL;
  *((_QWORD *)this + 907) = 0LL;
  *((_QWORD *)this + 908) = 0LL;
  *((_QWORD *)this + 909) = 0LL;
  *((_WORD *)this + 3640) = 0;
  *((_DWORD *)this + 1821) = 0;
  if ( *((_DWORD *)this + 109) )
  {
    *((_DWORD *)this + 109) = 0;
    RayStabilizer::CalculateMaximumSize((MPCGamepadProcessor *)((char *)this + 392));
    RayStabilizer::Reset(v2);
  }
  return this;
}
