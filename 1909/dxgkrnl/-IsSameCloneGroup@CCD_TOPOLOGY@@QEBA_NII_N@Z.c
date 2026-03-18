/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02C0AD8
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D237C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0129360 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx

  v4 = *((_QWORD *)this + 8);
  v5 = 0LL;
  v6 = a3;
  v8 = (unsigned int)a2;
  if ( !v4
    && (v10 = WdLogNewEntry5_WdAssertion(this, a2), WdLogEvent5_WdAssertion(v10), (v4 = *((_QWORD *)this + 8)) == 0)
    || (v11 = *(unsigned __int16 *)(v4 + 20), (unsigned int)v8 >= v11)
    || (unsigned int)v6 >= v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
    v17[3] = v8;
    v17[4] = v6;
    v17[5] = this;
    v17[6] = *((_QWORD *)this + 8);
    v18 = *((_QWORD *)this + 8);
    if ( v18 )
      v5 = *(unsigned __int16 *)(v18 + 20);
    v17[7] = v5;
    WdLogEvent5_WdAssertion(v17);
    return 0;
  }
  v12 = 272 * v8;
  v13 = 272 * v6;
  if ( !a4 )
    return *(_DWORD *)(v12 + v4 + 232) == *(_DWORD *)(v13 + v4 + 232);
  if ( *(_DWORD *)(v12 + v4 + 72) != *(_DWORD *)(v13 + v4 + 72)
    || *(_DWORD *)(v12 + v4 + 64) != *(_DWORD *)(v13 + v4 + 64)
    || *(_DWORD *)(v12 + v4 + 68) != *(_DWORD *)(v13 + v4 + 68) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v12 + v4 + 232) != *(_DWORD *)(v13 + v4 + 232) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
    v4 = *((_QWORD *)this + 8);
  }
  if ( *(_DWORD *)(v12 + v4 + 76) == *(_DWORD *)(v13 + v4 + 76) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  return 1;
}
