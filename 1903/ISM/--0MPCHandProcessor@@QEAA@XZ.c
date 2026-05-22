/*
 * XREFs of ??0MPCHandProcessor@@QEAA@XZ @ 0x180133D54
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18009199C (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180018C00 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180091D40 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

MPCHandProcessor *__fastcall MPCHandProcessor::MPCHandProcessor(MPCHandProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *((_BYTE *)this + 4632) = 1;
  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 580) = 0LL;
  *((_QWORD *)this + 581) = 0LL;
  memset_0((char *)this + 4656, 0, 0x7F0uLL);
  *((_DWORD *)this + 1170) = 2032;
  memset_0((char *)this + 6688, 0, 0x7F0uLL);
  *((_DWORD *)this + 1678) = 2032;
  *((_BYTE *)this + 8720) = 0;
  *((_DWORD *)this + 2181) = 0;
  *((_BYTE *)this + 8728) = 0;
  *(_QWORD *)((char *)this + 8732) = 0LL;
  memset_0((char *)this + 8744, 0, 0xB8uLL);
  *((_BYTE *)this + 8928) = 0;
  *(_QWORD *)((char *)this + 8932) = 0LL;
  *(_QWORD *)((char *)this + 8940) = 0LL;
  *(_QWORD *)((char *)this + 8948) = 0LL;
  if ( *((_DWORD *)this + 107) != 4 )
  {
    *((_DWORD *)this + 107) = 4;
    RayStabilizer::CalculateMaximumSize((MPCHandProcessor *)((char *)this + 384));
    RayStabilizer::Reset(v2);
  }
  return this;
}
