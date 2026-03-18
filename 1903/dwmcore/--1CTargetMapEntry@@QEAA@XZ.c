/*
 * XREFs of ??1CTargetMapEntry@@QEAA@XZ @ 0x180085E3C
 * Callers:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18007F9D4 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180085BF0 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180085DEC (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801E7EB0 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTargetMapEntry::~CTargetMapEntry(CTargetMapEntry *this)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)v1[2];
    operator delete(v2, 0x18uLL);
  }
}
