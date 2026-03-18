/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02889D8
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C028D960 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(CCD_TOPOLOGY *this, unsigned int a2)
{
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  _DWORD *v12; // rcx

  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, a2);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  v6 = (unsigned __int16)v5;
  while ( v6 )
  {
    v8 = CCD_TOPOLOGY::GetPathDescriptor(this, --v6);
    if ( (*(_QWORD *)v8 & 0x4000000000000LL) == 0 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 4387LL;
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = *((_QWORD *)this + 8);
    v11 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      v12 = (_DWORD *)(v10 + 232);
      while ( *v12 != *(_DWORD *)(272LL * v6 + v10 + 232) )
      {
        ++v11;
        v12 += 68;
        if ( v11 >= *(unsigned __int16 *)(v10 + 20) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v11 = -559038737;
    }
    *((_DWORD *)v8 + 46) = v11 | 0xFE558000;
  }
}
