/*
 * XREFs of ??1MPCHandProcessor@@UEAA@XZ @ 0x180133E6C
 * Callers:
 *     ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x180134680 (--_GMPCHandProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall MPCHandProcessor::~MPCHandProcessor(MPCHandProcessor *this)
{
  _QWORD *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  v2 = (_QWORD *)*((_QWORD *)this + 581);
  if ( v2 )
  {
    v3 = (std::_Ref_count_base *)v2[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v2, (const struct std::nothrow_t *)0x20);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 580);
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
  *((_DWORD *)this + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
