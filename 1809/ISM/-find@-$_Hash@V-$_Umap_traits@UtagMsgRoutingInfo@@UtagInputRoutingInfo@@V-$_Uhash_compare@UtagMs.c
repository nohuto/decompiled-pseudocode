/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1800D4920
 * Callers:
 *     ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x1800D4460 (-Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x1800D4668 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        _QWORD *a1,
        __int64 **a2,
        unsigned int *a3)
{
  int v3; // r11d
  __int64 v5; // rdi
  __int64 **v6; // r10
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  __int64 *v9; // r9
  __int64 *i; // r8
  __int64 v11; // rax
  _DWORD *v12; // rcx
  __int64 **result; // rax

  v3 = *a3;
  v5 = a1[3];
  v6 = a2;
  v7 = a1[6] & (a3[1] | ((unsigned __int64)*a3 << 32));
  v8 = 2 * v7;
  v9 = (__int64 *)a1[1];
  for ( i = *(__int64 **)(v5 + 16 * v7); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v5 + 8 * v8) == v9 ? (__int64)v9 : **(_QWORD **)(v5 + 8 * v8 + 8);
    if ( i == (__int64 *)v11 )
      break;
    v12 = i + 2;
    if ( *((_DWORD *)i + 4) == v3 && operator==((__int64)v12, (__int64)a3) )
    {
      if ( v3 == *v12 && operator==((__int64)a3, (__int64)(i + 2)) )
        v9 = i;
      break;
    }
  }
  result = v6;
  *v6 = v9;
  return result;
}
