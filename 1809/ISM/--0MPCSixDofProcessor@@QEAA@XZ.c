/*
 * XREFs of ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1800F442C
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EE920 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800F4814 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  MPCSixDofProcessor *result; // rax

  MPCInputProviderBase::MPCInputProviderBase(this);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_DWORD *)this + 939) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  *((_WORD *)this + 1880) = 0;
  *(_QWORD *)this = &MPCSixDofProcessor::`vftable'{for `IInputProcessor'};
  *((_BYTE *)this + 3762) = 0;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_DWORD *)this + 941) = 0;
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_DWORD *)this + 942) = 2;
  *((_QWORD *)this + 3) = &MPCSixDofProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_WORD *)this + 1886) = 0;
  memset_0((char *)this + 3776, 0, 0x140uLL);
  *((_QWORD *)this + 512) = 0LL;
  *((_QWORD *)this + 513) = 0LL;
  *((_QWORD *)this + 514) = 0LL;
  *((_QWORD *)this + 515) = 0LL;
  *((_QWORD *)this + 516) = 0LL;
  *((_QWORD *)this + 517) = 0LL;
  *((_QWORD *)this + 518) = 0LL;
  *((_QWORD *)this + 519) = 0LL;
  *((_QWORD *)this + 520) = 0LL;
  *((_QWORD *)this + 521) = 0LL;
  *((_DWORD *)this + 1044) = 0;
  *(_QWORD *)((char *)this + 4180) = 1065353216LL;
  *(_QWORD *)((char *)this + 4188) = 0LL;
  *(_QWORD *)((char *)this + 4196) = 0LL;
  *(_QWORD *)((char *)this + 4204) = 0LL;
  *(_QWORD *)((char *)this + 4212) = 0LL;
  *(_QWORD *)((char *)this + 4220) = 0LL;
  *(_QWORD *)((char *)this + 4228) = 0LL;
  *(_QWORD *)((char *)this + 4236) = 0LL;
  *(_QWORD *)((char *)this + 4244) = 0LL;
  *(_QWORD *)((char *)this + 4252) = 0LL;
  *(_QWORD *)((char *)this + 4260) = 0LL;
  *((_DWORD *)this + 1067) = -1082130432;
  *((_QWORD *)this + 534) = 0LL;
  *((_QWORD *)this + 535) = 0LL;
  *((_QWORD *)this + 536) = 0LL;
  *((_WORD *)this + 2148) = 0;
  *((_QWORD *)this + 538) = 0LL;
  *((_QWORD *)this + 539) = 0LL;
  *((_QWORD *)this + 540) = 0LL;
  *((_QWORD *)this + 541) = 0LL;
  *((_QWORD *)this + 542) = 0LL;
  *((_QWORD *)this + 543) = 0LL;
  *((_QWORD *)this + 544) = 0LL;
  *((_QWORD *)this + 545) = 0LL;
  memset_0((char *)this + 4368, 0, 0x148uLL);
  *((_BYTE *)this + 4696) = 1;
  result = this;
  *((_DWORD *)this + 1175) = 0;
  *((_WORD *)this + 2352) = 1;
  *((_BYTE *)this + 4706) = 0;
  *((_DWORD *)this + 1177) = 0;
  *((_BYTE *)this + 4712) = 0;
  *((_DWORD *)this + 1179) = 0;
  *((_QWORD *)this + 590) = 0LL;
  *((_QWORD *)this + 591) = 0LL;
  *((_QWORD *)this + 592) = 0LL;
  return result;
}
