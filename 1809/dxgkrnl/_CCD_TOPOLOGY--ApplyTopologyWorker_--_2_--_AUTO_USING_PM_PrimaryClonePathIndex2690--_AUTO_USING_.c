/*
 * XREFs of _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::_AUTO_USING_PM_PrimaryClonePathIndex2690 @ 0x1C00AEE38
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::_AUTO_USING_PM_PrimaryClonePathIndex2690(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2 + 48;
  v3 = *(unsigned __int16 *)(a2 + 20);
  v4 = 0;
  for ( *(_DWORD *)(a1 + 8) = v3; v4 < *(_DWORD *)(a1 + 8); *(_DWORD *)(v6 + *(_QWORD *)a1 + 244) = 0 )
  {
    v5 = v4++;
    v6 = 272 * v5;
    *(_DWORD *)(v6 + *(_QWORD *)a1 + 232) |= 4u;
  }
  return a1;
}
