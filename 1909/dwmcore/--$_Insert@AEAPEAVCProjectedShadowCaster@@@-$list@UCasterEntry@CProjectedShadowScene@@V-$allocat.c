/*
 * XREFs of ??$_Insert@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UCasterEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowCaster@@@Z @ 0x180004EF4
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180004E14 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@2@PEAU32@0@Z @ 0x180004FA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UCasterEntry@CProjectedShadowScene@@V-$allocator@UC.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<CProjectedShadowScene::CasterEntry>::_Insert<CProjectedShadowCaster * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = *(__int64 **)(a2 + 8);
  v7 = std::_List_alloc<std::_List_base_types<CProjectedShadowScene::CasterEntry>>::_Buynode0(a1, a2, v3);
  v8 = *a3;
  v9 = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_DWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 164) = 0;
  *(_BYTE *)(v9 + 168) = 0;
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 == 0x1745D1745D1745CLL )
    std::_Xlength_error((const char *)0x1745D1745D1745CLL);
  result = v10 + 1;
  *(_QWORD *)(a1 + 8) = v10 + 1;
  *(_QWORD *)(a2 + 8) = v9;
  *v3 = v9;
  return result;
}
