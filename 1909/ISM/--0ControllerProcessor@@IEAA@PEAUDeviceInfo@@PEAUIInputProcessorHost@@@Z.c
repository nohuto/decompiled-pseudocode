/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180074534
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180075BE0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x18001886C (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??0?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1800744B0 (--0-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$e.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800E717C (--0ManipulationInjector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=22
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  unsigned int v6; // [rsp+28h] [rbp-30h]
  char *v7; // [rsp+68h] [rbp+10h] BYREF
  char *v8; // [rsp+70h] [rbp+18h]

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 4) = a3;
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v8 = (char *)this + 80;
  LODWORD(v7) = 0;
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>(
    (_QWORD *)this + 10,
    &v7);
  memset_0((char *)this + 144, 0, 0x7F0uLL);
  *((_DWORD *)this + 42) = 2032;
  *((_DWORD *)this + 544) = 2;
  *((_QWORD *)this + 273) = 0LL;
  *((_QWORD *)this + 274) = 0LL;
  *((_QWORD *)this + 275) = 0LL;
  *((_QWORD *)this + 276) = 0LL;
  *((_QWORD *)this + 277) = 0LL;
  *((_QWORD *)this + 278) = 0LL;
  *(_QWORD *)((char *)this + 2244) = 0LL;
  *((_QWORD *)this + 282) = 0LL;
  *((_BYTE *)this + 2280) = 0;
  *((_BYTE *)this + 2300) = 0;
  *((_DWORD *)this + 576) = 0;
  *(_QWORD *)((char *)this + 2316) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 2328));
  *((_BYTE *)this + 3136) = 0;
  *((_DWORD *)this + 785) = 0;
  *((_WORD *)this + 1572) = 0;
  InjectionDevice::InjectionDevice((__int64)this + 3152, (__int64)a3, 128);
  InjectionDevice::InjectionDevice((__int64)this + 4736, (__int64)a3, 4);
  InjectionDevice::InjectionDevice((__int64)this + 6320, (__int64)a3, 66);
  InjectionDevice::InjectionDevice((__int64)this + 7904, (__int64)a3, 8);
  v7 = (char *)this + 9488;
  InjectionDevice::InjectionDevice((__int64)this + 9488, (__int64)a3, 4);
  *((_QWORD *)this + 1384) = 0LL;
  *((_BYTE *)this + 11080) = 0;
  LOBYTE(v6) = 0;
  *((_QWORD *)this + 1388) = v6;
  *((_DWORD *)this + 2778) = 0;
  *(_OWORD *)((char *)this + 11116) = 0LL;
  v7 = 0LL;
  *(_QWORD *)((char *)this + 11132) = 0LL;
  *(_QWORD *)((char *)this + 11140) = 0LL;
  *((_BYTE *)this + 11148) = 0;
  *((_QWORD *)this + 1394) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_0), (__m128)LODWORD(FLOAT_40_0)).m128_u64[0];
  *((_QWORD *)this + 1395) = 5LL;
  memset_0((char *)this + 11168, 0, 0x50uLL);
  *((_QWORD *)this + 1406) = 0LL;
  *((_QWORD *)this + 1407) = 0LL;
  *((_QWORD *)this + 1408) = 500000LL;
  *((_QWORD *)this + 1409) = 160000LL;
  *((_QWORD *)this + 1410) = 1000000LL;
  *((_DWORD *)this + 2824) = 100;
  *((_DWORD *)this + 2825) = 100;
  *((_BYTE *)this + 11304) = 0;
  *((_QWORD *)this + 1414) = 0LL;
  *((_QWORD *)this + 1415) = 0LL;
  *((_QWORD *)this + 1416) = 0LL;
  *((_QWORD *)this + 1417) = 0LL;
  return this;
}
