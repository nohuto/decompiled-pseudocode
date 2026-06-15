/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180059D2C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800590E0 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180059F40 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180059F88 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006433C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristics>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 72,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 232),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 328), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 424), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 520),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 616),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 712), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 808), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 904),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1000),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1096), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1192), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1288),
    eKeywordDetectorConnector);
  `eh vector constructor iterator'(
    (char *)this + 1400,
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector constructor iterator'(
    (char *)this + 1496,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector constructor iterator'(
    (char *)this + 1560,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1624));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8544), 0, 0);
  *((_DWORD *)this + 2146) = 100;
  *((_WORD *)this + 4294) = 0;
  *((_BYTE *)this + 8590) = 0;
  return this;
}
