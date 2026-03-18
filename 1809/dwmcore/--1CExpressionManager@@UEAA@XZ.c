/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x18018A0CC
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x18018A240 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x180069710 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800DA240 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800EA4A4 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  void *v2; // rcx
  void **v3; // rbx
  _QWORD *v4; // rax
  void **v5; // rbp
  void **v6; // rsi
  CTargetMapEntry *v7; // rax
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  v2 = (void *)*((_QWORD *)this + 57);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 59) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear((__int64)this + 440);
  std::_Deallocate<16,0>(*((void **)this + 55), 0x20uLL);
  v3 = (void **)((char *)this + 400);
  v4 = (_QWORD *)*((_QWORD *)this + 50);
  v5 = (void **)v4[1];
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        (__int64)this + 400,
        v6[2]);
      v6 = (void **)*v6;
      operator delete(v5);
      v5 = v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
    v4 = *v3;
  }
  v4[1] = v4;
  *(_QWORD *)*v3 = *v3;
  *((_QWORD *)*v3 + 2) = *v3;
  *((_QWORD *)this + 51) = 0LL;
  std::_Deallocate<16,0>(*v3, 0x20uLL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v7 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 328),
                              &RestartKey);
    if ( !v7 )
      break;
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 328),
      v7);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  `vector destructor iterator'(
    (char *)this + 168,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  *((_QWORD *)this + 4) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 7);
}
