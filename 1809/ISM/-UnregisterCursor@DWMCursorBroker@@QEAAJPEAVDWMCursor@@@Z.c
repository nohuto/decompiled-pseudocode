/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106F3C
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x180107CF4 (--_EDWMCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x180066388 (-erase@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdH.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801067E4 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@V21@@Z @ 0x180107570 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUDWMPointerMapping@@UC.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rcx
  unsigned __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD **v10; // rdx
  _QWORD **v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 j; // rbp
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned int v24; // eax
  _QWORD v25[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v26; // [rsp+30h] [rbp-78h] BYREF
  char v27[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v25[1] = -2LL;
  (*(void (__fastcall **)(struct DWMCursor *, __int128 *))(*(_QWORD *)a2 + 40LL))(a2, &v26);
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * ((unsigned __int8)v27[i - 16] ^ (unsigned __int64)v3);
  v5 = v3 & *((_QWORD *)this + 12);
  v6 = 2 * v5;
  v7 = *((_QWORD *)this + 9);
  v8 = *(_QWORD **)(v7 + 16 * v5);
  v9 = 2 * v5;
  v10 = (_QWORD **)*((_QWORD *)this + 7);
  v11 = (_QWORD **)v8;
  while ( 1 )
  {
    if ( v11 == v10 )
      v12 = (_QWORD *)*((_QWORD *)this + 7);
    else
      v12 = **(_QWORD ***)(v7 + 8 * v9 + 8);
    if ( v8 == v12 )
      goto LABEL_18;
    if ( *((_DWORD *)v8 + 4) == (_DWORD)v26 )
      break;
    v8 = (_QWORD *)*v8;
  }
  v13 = v8;
  v14 = v8;
  while ( 1 )
  {
    v15 = v11 == v10 ? (_QWORD *)*((_QWORD *)this + 7) : **(_QWORD ***)(v7 + 8 * v6 + 8);
    if ( v8 == v15 || (_DWORD)v26 != *((_DWORD *)v8 + 4) )
      break;
    v8 = (_QWORD *)*v8;
  }
  if ( v13 == v8 )
  {
LABEL_18:
    v14 = (_QWORD *)*((_QWORD *)this + 7);
    v8 = v14;
  }
  v16 = v14;
  for ( j = 0LL; v16 != v8; v16 = (_QWORD *)*v16 )
    ++j;
  v18 = *v10;
  if ( v14 == *v10 && v8 == v10 )
  {
    *v10 = v10;
    *(_QWORD *)(*((_QWORD *)this + 7) + 8LL) = *((_QWORD *)this + 7);
    *((_QWORD *)this + 8) = 0LL;
    if ( v18 != *((_QWORD **)this + 7) )
    {
      do
      {
        v19 = (_QWORD *)*v18;
        operator delete(v18, (const struct std::nothrow_t *)0x28);
        v18 = v19;
      }
      while ( v19 != *((_QWORD **)this + 7) );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      (_QWORD *)this + 6,
      8LL);
  }
  else
  {
    while ( v14 != v8 )
    {
      v20 = v14;
      v14 = (_QWORD *)*v14;
      std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::erase(
        (_QWORD *)this + 6,
        v25,
        v20);
    }
  }
  if ( !j )
  {
    v24 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)v24);
    JUMPOUT(0x180107146LL);
  }
  v21 = (__int64 *)*((_QWORD *)this + 15);
  v22 = *v21;
  if ( (__int64 *)*v21 != v21 )
  {
    do
    {
      if ( *(_DWORD *)(v22 + 24) == (_DWORD)v26 )
        v22 = std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>,void>(
                (char *)this + 112,
                v25,
                v22);
      v22 = *(_QWORD *)v22;
    }
    while ( v22 != *((_QWORD *)this + 15) );
  }
  v27[0] = 1;
  v28 = v26;
  DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v27);
  return 0LL;
}
