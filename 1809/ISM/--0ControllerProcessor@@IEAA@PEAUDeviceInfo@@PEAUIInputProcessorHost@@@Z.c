/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800329D4
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033AC0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x1800327EC (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800B87D4 (--0ManipulationInjector@@QEAA@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=22
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v5; // rdi
  unsigned int v7; // [rsp+28h] [rbp-40h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 3) = a3;
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v5 = (_QWORD *)((char *)this + 56);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                            this,
                            0LL,
                            0LL);
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  *(_DWORD *)v5 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v5,
    8LL);
  memset_0((char *)this + 120, 0, 0x640uLL);
  *((_DWORD *)this + 36) = 1600;
  *((_DWORD *)this + 430) = 2;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *(_QWORD *)((char *)this + 1788) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_BYTE *)this + 1824) = 0;
  *((_BYTE *)this + 1844) = 0;
  *((_DWORD *)this + 462) = 0;
  *(_QWORD *)((char *)this + 1860) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 1872));
  *((_BYTE *)this + 2672) = 0;
  *((_DWORD *)this + 669) = 0;
  *((_WORD *)this + 1340) = 0;
  InjectionDevice::InjectionDevice((__int64)this + 2688, (__int64)a3, 128);
  InjectionDevice::InjectionDevice((__int64)this + 3688, (__int64)a3, 4);
  InjectionDevice::InjectionDevice((__int64)this + 4688, (__int64)a3, 66);
  InjectionDevice::InjectionDevice((__int64)this + 5688, (__int64)a3, 8);
  *((_QWORD *)this + 836) = 0LL;
  *((_BYTE *)this + 6696) = 0;
  LOBYTE(v7) = 0;
  *((_QWORD *)this + 840) = v7;
  *((_DWORD *)this + 1682) = 0;
  *(_OWORD *)((char *)this + 6732) = 0LL;
  *(_QWORD *)((char *)this + 6748) = 0LL;
  *(_QWORD *)((char *)this + 6756) = 0LL;
  *((_BYTE *)this + 6764) = 0;
  *((_QWORD *)this + 846) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_0), (__m128)LODWORD(FLOAT_40_0)).m128_u64[0];
  *((_QWORD *)this + 847) = 5LL;
  memset_0((char *)this + 6784, 0, 0x50uLL);
  *((_QWORD *)this + 858) = 0LL;
  *((_QWORD *)this + 859) = 0LL;
  *((_QWORD *)this + 860) = 500000LL;
  *((_QWORD *)this + 861) = 160000LL;
  *((_QWORD *)this + 862) = 1000000LL;
  *((_DWORD *)this + 1728) = 100;
  *((_DWORD *)this + 1729) = 100;
  *((_BYTE *)this + 6920) = 0;
  *((_QWORD *)this + 866) = 0LL;
  *((_QWORD *)this + 867) = 0LL;
  *((_QWORD *)this + 868) = 0LL;
  *((_QWORD *)this + 869) = 0LL;
  return this;
}
