/*
 * XREFs of ??$_Insert@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x180003A68
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180003B74 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@2@PEAU32@0@Z @ 0x180003B34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UReceiverEntry@CProjectedShadowScene@@V-$allocator@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<CProjectedShadowScene::ReceiverEntry>::_Insert<CProjectedShadowReceiver * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax

  v3 = *(__int64 **)(a2 + 8);
  v7 = std::_List_alloc<std::_List_base_types<CProjectedShadowScene::ReceiverEntry>>::_Buynode0(a1, a2, v3);
  v8 = *a3;
  v9 = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(v9 + 24) = v10;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_DWORD *)(v9 + 112) = 0;
  *(_BYTE *)(v9 + 116) = 0;
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 == 0x222222222222221LL )
    std::_Xlength_error((const char *)0x222222222222221LL);
  result = v11 + 1;
  *(_QWORD *)(a1 + 8) = v11 + 1;
  *(_QWORD *)(a2 + 8) = v9;
  *v3 = v9;
  return result;
}
