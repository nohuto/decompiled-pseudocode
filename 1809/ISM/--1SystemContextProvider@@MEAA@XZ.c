/*
 * XREFs of ??1SystemContextProvider@@MEAA@XZ @ 0x18009E9BC
 * Callers:
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x18009DC14 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x18009E970 (--_GSystemContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextProvider::~SystemContextProvider(SystemContextProvider *this)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (_QWORD **)*((_QWORD *)this + 4);
  v3 = *v2;
  *v2 = v2;
  *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 4);
  *((_QWORD *)this + 5) = 0LL;
  if ( v3 != *((_QWORD **)this + 4) )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 != *((_QWORD **)this + 4) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 3,
    8LL);
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((_QWORD *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
