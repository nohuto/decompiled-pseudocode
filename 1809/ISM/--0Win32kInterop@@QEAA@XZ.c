/*
 * XREFs of ??0Win32kInterop@@QEAA@XZ @ 0x180080F18
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180081ECC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAULegacyDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180085414 (--$_Insert@AEAU-$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x180085BF4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@PEAX@2@PEAU32@0@Z @ 0x180085C44 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVInputInfoValidator@@@std@@V-$alloc.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=16
Win32kInterop *__fastcall Win32kInterop::Win32kInterop(Win32kInterop *this)
{
  _QWORD *v2; // rdi
  char *v3; // r14
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // xmm0_4
  bool v8; // sf
  float v9; // xmm1_4
  _QWORD *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 **v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-88h]
  _BYTE v26[16]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v27[24]; // [rsp+38h] [rbp-70h] BYREF

  v25 = -2LL;
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &Win32kInterop::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &Win32kInterop::`vftable'{for `IInputBuffer'};
  *((_QWORD *)this + 2) = &Win32kInterop::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 3) = &Win32kInterop::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 16) = 0;
  v3 = (char *)this + 72;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v2,
    8LL);
  v4 = 8LL;
  v5 = *((_QWORD *)v3 + 1);
  v6 = (float)(int)v5;
  if ( v5 < 0 )
    v6 = v6 + 1.8446744e19;
  v7 = v6 / *(float *)v2;
  if ( (float)8 <= v7 )
  {
    do
    {
      if ( v4 >= 0x7FFFFFFFFFFFFFFLL )
        break;
      v8 = (v4 & 0x4000000000000000LL) != 0;
      v4 *= 2LL;
      v9 = (float)(int)v4;
      if ( v8 )
        v9 = v9 + 1.8446744e19;
    }
    while ( v9 <= v7 );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v2,
    v4);
  v10 = *(_QWORD **)v3;
  if ( (_QWORD *)*v10 != v10 )
  {
    v11 = v10[1];
    do
    {
      v12 = **(_QWORD **)v3;
      std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,LegacyDeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>>(
        v2,
        v26,
        v12 + 16,
        v12,
        v25);
    }
    while ( v12 != v11 );
  }
  *((_DWORD *)this + 32) = 0;
  v13 = (__int64 **)((char *)this + 136);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,InputInfoValidator *>>>::_Buynode0();
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 16,
    8LL);
  v14 = 8LL;
  v15 = *((_QWORD *)this + 18);
  v16 = (float)(int)v15;
  if ( v15 < 0 )
    v16 = v16 + 1.8446744e19;
  v17 = v16 / *((float *)this + 32);
  if ( (float)8 <= v17 )
  {
    do
    {
      if ( v14 >= 0x7FFFFFFFFFFFFFFLL )
        break;
      v8 = (v14 & 0x4000000000000000LL) != 0;
      v14 *= 2LL;
      v18 = (float)(int)v14;
      if ( v8 )
        v18 = v18 + 1.8446744e19;
    }
    while ( v18 <= v17 );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 16,
    v14);
  v20 = *v13;
  if ( (__int64 *)*v20 != v20 )
  {
    v21 = v20[1];
    do
    {
      v22 = **v13;
      std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,LegacyDeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>>(
        (char *)this + 128,
        v27,
        v22 + 16,
        v22,
        v25);
    }
    while ( v22 != v21 );
  }
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 25) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
                             v19,
                             0LL,
                             0LL);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 48) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 24,
    8LL);
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 33) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                             v23,
                             0LL,
                             0LL);
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 64) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 32,
    8LL);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  memset_0((char *)this + 336, 0, 0x640uLL);
  *((_DWORD *)this + 90) = 1600;
  *((_BYTE *)this + 1936) = 0;
  *((_QWORD *)this + 244) = 0LL;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 265) = 0LL;
  *((_QWORD *)this + 266) = 0LL;
  *((_QWORD *)this + 267) = 0LL;
  *((_QWORD *)this + 268) = 0LL;
  *((_QWORD *)this + 281) = 0LL;
  *((_QWORD *)this + 282) = 0LL;
  *((_QWORD *)this + 283) = 0LL;
  *((_QWORD *)this + 284) = 0LL;
  *((_QWORD *)this + 297) = 0LL;
  *((_QWORD *)this + 298) = 0LL;
  *((_QWORD *)this + 299) = 0LL;
  *((_QWORD *)this + 300) = 0LL;
  *((_QWORD *)this + 313) = 0LL;
  return this;
}
