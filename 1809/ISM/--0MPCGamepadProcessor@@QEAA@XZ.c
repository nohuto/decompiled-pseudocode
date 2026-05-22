/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800F7CBC
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800F8090 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800F4814 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  MPCGamepadProcessor *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable';
  *((_DWORD *)this + 941) = 1;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable';
  *v1 = &MPCGamepadProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 471) = 0LL;
  *((_QWORD *)this + 472) = 0LL;
  memset_0((char *)this + 3784, 0, 0x640uLL);
  *((_DWORD *)this + 952) = 1600;
  *((_DWORD *)this + 1346) = 0;
  memset_0((char *)this + 5392, 0, 0x1C0uLL);
  *((_DWORD *)this + 1460) = 0;
  *((_WORD *)this + 2922) = 0;
  *((_BYTE *)this + 5846) = 0;
  memset_0((char *)this + 5848, 0, 0x38uLL);
  *((_QWORD *)this + 739) = 0LL;
  *((_DWORD *)this + 1480) = 1065353216;
  *((_QWORD *)this + 738) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 741) = 0LL;
  *((_QWORD *)this + 742) = 0LL;
  *((_QWORD *)this + 743) = 0LL;
  *((_QWORD *)this + 744) = 0LL;
  *((_QWORD *)this + 745) = 0LL;
  *((_WORD *)this + 2984) = 0;
  *((_DWORD *)this + 1493) = 0;
  if ( *((_DWORD *)this + 107) )
  {
    *((_QWORD *)this + 53) = 0LL;
    RayStabilizer::Reset((MPCGamepadProcessor *)((char *)this + 384));
  }
  QueryPerformanceFrequency(&Frequency);
  result = this;
  *((double *)this + 738) = 1.0 / (double)(int)Frequency.LowPart;
  return result;
}
