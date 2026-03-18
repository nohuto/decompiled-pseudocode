/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x180062CE8
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180062C30 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180062E20 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180062E4C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@2@PEAU32@0@Z @ 0x180069160 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18009BE2C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x1800C531C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E53C8 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 3) = -1LL;
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  CExpressionValueStack::CExpressionValueStack((CExpressionManager *)((char *)this + 32), this);
  *((_DWORD *)this + 41) = 0;
  `vector constructor iterator'(
    (char *)this + 168,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 232, 0LL, 0LL);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 264, 0LL, 0LL);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 296);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 328),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 50) = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 55) = std::_List_alloc<std::_List_base_types<std::pair<CChannelContext * const,float>>>::_Buynode0(
                             v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 108) = 1065353216;
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Init(
    (char *)this + 432,
    8LL);
  return this;
}
