/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C0270A6C
 * Callers:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0045FA0 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0271858 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0041FB8 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C02718C4 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this, __int64 a2)
{
  __int64 v3; // rax
  OUTPUTDUPL_MGR *v4; // rcx
  OUTPUTDUPL_MGR *v5; // rcx
  OUTPUTDUPL_MGR *v6; // rcx

  if ( this[4] != (OUTPUTDUPL_MGR *)(this + 4) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 864LL;
    WdLogEvent5_WdAssertion(v3);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v4 = this[3];
  if ( v4 )
  {
    operator delete(v4);
    this[3] = 0LL;
  }
  v5 = this[7];
  if ( v5 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v5);
    this[7] = 0LL;
  }
  v6 = this[8];
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6);
    this[8] = 0LL;
  }
}
