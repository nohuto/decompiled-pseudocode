/*
 * XREFs of ?OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x1800CF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierProcessor::OnMagnifierClientUnregistered(
        MagnifierProcessor *this,
        struct BamoMagnifierClientProxy *a2)
{
  struct BamoMagnifierClientProxy *v3; // rcx
  _QWORD **v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  v3 = (struct BamoMagnifierClientProxy *)*((_QWORD *)this + 2);
  if ( v3 == a2 )
  {
    if ( v3 )
    {
      *((_QWORD *)this + 2) = 0LL;
      (*(void (__fastcall **)(struct BamoMagnifierClientProxy *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    v4 = (_QWORD **)*((_QWORD *)this + 4);
    v5 = *v4;
    *v4 = v4;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 5) = 0LL;
    if ( v5 != *((_QWORD **)this + 4) )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        v7 = v5[3];
        if ( v7 )
        {
          v5[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        operator delete(v5, (const struct std::nothrow_t *)0x20);
        v5 = v6;
      }
      while ( v6 != *((_QWORD **)this + 4) );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      (_QWORD *)this + 3,
      8LL);
  }
}
