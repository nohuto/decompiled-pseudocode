/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106D34
 * Callers:
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x180107DF8 (-Initialize@DWMCursor@@QEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18009F598 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180106884 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ??$_Buynode@AEBUCursorId@@AEAPEAVDWMCursor@@@?$_List_buy@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@1@PEAU21@0AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180107AA4 (--$_Buynode@AEBUCursorId@@AEAPEAVDWMCursor@@@-$_List_buy@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v2; // rax
  struct DWMCursor *v3; // r14
  __int64 v5; // rdx
  unsigned __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *j; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ebx
  _QWORD *v26; // rdi
  unsigned int v28; // eax
  struct DWMCursor *v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v30[2]; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v31[4]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  v3 = a2;
  v29 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, _DWORD *))(v2 + 40))(a2, v31);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)v31 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *((_QWORD *)this + 9);
  v9 = (_QWORD *)*((_QWORD *)this + 7);
  v10 = v5 & *((_QWORD *)this + 12);
  v11 = 2 * v10;
  v12 = 2 * v10;
  v13 = *(_QWORD **)(v8 + 16 * v10);
  for ( j = v13; ; j = (_QWORD *)*j )
  {
    if ( v13 == v9 )
      v15 = (_QWORD *)*((_QWORD *)this + 7);
    else
      v15 = **(_QWORD ***)(v8 + 8 * v12 + 8);
    if ( j == v15 )
      goto LABEL_18;
    if ( *((_DWORD *)j + 4) == v31[0] )
      break;
  }
  v16 = j;
  v17 = j;
  while ( 1 )
  {
    v18 = v13 == v9 ? (_QWORD *)*((_QWORD *)this + 7) : **(_QWORD ***)(v8 + 8 * v11 + 8);
    if ( j == v18 || v31[0] != *((_DWORD *)j + 4) )
      break;
    j = (_QWORD *)*j;
  }
  if ( v16 == j )
  {
LABEL_18:
    v17 = (_QWORD *)*((_QWORD *)this + 7);
    j = v17;
  }
  v19 = 0LL;
  if ( v17 != j )
  {
    do
    {
      v17 = (_QWORD *)*v17;
      ++v19;
    }
    while ( v17 != j );
    if ( v19 )
    {
      v28 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)v28);
      JUMPOUT(0x180106F35LL);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 6,
    v30,
    v31);
  v20 = (__int64 *)*((_QWORD *)this + 7);
  if ( v30[0] == v20 )
  {
    v21 = *v20;
    v22 = *(__int64 **)(*v20 + 8);
    v23 = std::_List_buy<std::pair<CursorId const,DWMCursor *>>::_Buynode<CursorId const &,DWMCursor * &>(
            (_DWORD)v20,
            *v20,
            (_DWORD)v22,
            (unsigned int)v31,
            (__int64)&v29);
    v24 = *((_QWORD *)this + 8);
    if ( v24 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 8) = v24 + 1;
    *(_QWORD *)(v21 + 8) = v23;
    *v22 = v23;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
      (float *)this + 12,
      (__int64)v30,
      (_DWORD *)(**((_QWORD **)this + 7) + 16LL),
      **((__int64 ***)this + 7));
    v3 = v29;
  }
  else
  {
    v30[0][4] = (__int64)v3;
  }
  v25 = 0;
  v26 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v26 )
      DWMCursorBroker::DuplicateHandleAndVerifySend(this, v3, v25);
    ++v25;
    v26 += 2;
  }
  while ( v25 < 0xA );
  return 0LL;
}
