/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x1801BFAEC
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801BFC20 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x1800A4878 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C0170 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x1801C01C0 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  void *v2; // rcx
  CTargetMapEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 57);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 59) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  std::list<std::pair<CChannelContext * const,float>>::clear((char *)this + 440);
  std::_Deallocate<16,0>(*((void **)this + 55), 0x20uLL);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    (char *)this + 400,
    &RestartKey,
    **((_QWORD **)this + 50),
    *((_QWORD *)this + 50));
  std::_Deallocate<16,0>(*((void **)this + 50), 0x20uLL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 328),
                              &RestartKey);
    if ( !v3 )
      break;
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 328),
      v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  `vector destructor iterator'(
    (char *)this + 168,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArray<CBaseExpression *,1>::~DynArray<CBaseExpression *,1>);
  *((_QWORD *)this + 4) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 7);
}
