/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x180018A04
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18002835C (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180091B00 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180136C24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180018720 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _QWORD *v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  MPCInputProviderBase *result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x148uLL);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *((_QWORD *)this + 48) = v2;
  *(_OWORD *)v2 = 0LL;
  **((_QWORD **)this + 48) = (char *)this + 384;
  *((_DWORD *)this + 107) = 1;
  memset_0(v6, 0, sizeof(v6));
  v3 = v6[0];
  *((_BYTE *)this + 464) = 0;
  v4 = v6[1];
  *((_OWORD *)this + 27) = v3;
  *((_OWORD *)this + 28) = v4;
  RayStabilizer::CalculateMaximumSize((MPCInputProviderBase *)((char *)this + 384));
  memset_0((char *)this + 472, 0, 0x7F0uLL);
  *((_DWORD *)this + 124) = 2032;
  memset_0((char *)this + 2504, 0, 0x7F0uLL);
  *((_DWORD *)this + 632) = 2032;
  *((_WORD *)this + 2268) = 0;
  *((_BYTE *)this + 4538) = 0;
  memset_0((char *)this + 4544, 0, 0x30uLL);
  result = this;
  *((_DWORD *)this + 1136) = 1106247680;
  *((_BYTE *)this + 4548) = 0;
  *((_QWORD *)this + 569) = 0LL;
  *((_DWORD *)this + 1140) = 0;
  *((_QWORD *)this + 571) = 0LL;
  *((_QWORD *)this + 572) = 0LL;
  *((_QWORD *)this + 573) = 0LL;
  *((_QWORD *)this + 574) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_BYTE *)this + 4616) = 0;
  *((_DWORD *)this + 1155) = 1;
  return result;
}
