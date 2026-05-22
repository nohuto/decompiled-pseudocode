/*
 * XREFs of ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x1801044E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchInfoAdapter::EndCurrentSession(TouchInfoAdapter *this)
{
  char *v2; // rdx
  __int64 i; // r8
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v2 = (char *)this + 112;
  *((_WORD *)this + 57) |= 4u;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int8 *)this + 135); i = (unsigned int)(i + 1) )
    *(_WORD *)&v2[56 * (unsigned int)i + 26] = (v2[56 * (unsigned int)i + 26] & 3) != 0 ? 4 : 0;
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v2, i);
  *((_BYTE *)this + 696) = 0;
  ++*((_DWORD *)this + 26);
  *((_WORD *)this + 54) = 0;
  v4 = (_QWORD **)*((_QWORD *)this + 6);
  v5 = *v4;
  *v4 = v4;
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 7) = 0LL;
  if ( v5 != *((_QWORD **)this + 6) )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      operator delete(v5, (const struct std::nothrow_t *)0x18);
      v5 = v6;
    }
    while ( v6 != *((_QWORD **)this + 6) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 5,
    8LL);
  return 0LL;
}
