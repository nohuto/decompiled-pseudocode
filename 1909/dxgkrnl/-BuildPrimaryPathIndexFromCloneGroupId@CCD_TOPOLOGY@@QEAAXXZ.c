/*
 * XREFs of ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D889C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  unsigned int j; // ecx
  unsigned __int16 v6; // ax
  __int64 v7; // r8
  int v8; // r11d
  unsigned int k; // r8d
  unsigned __int16 v10; // ax
  __int64 v11; // r9

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    *(_QWORD *)(272LL * i + v3 + 48) &= ~0x4000000000000uLL;
  }
  for ( j = 0; ; ++j )
  {
    v6 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( j >= v6 )
      break;
    v7 = 272LL * j;
    if ( (*(_QWORD *)(v7 + v3 + 48) & 0x4000000000000LL) == 0 )
    {
      v8 = *(_DWORD *)(v7 + v3 + 232);
      for ( k = j; ; ++k )
      {
        v10 = v3 ? *(_WORD *)(v3 + 20) : 0;
        v3 &= -(__int64)(v3 != 0);
        if ( k >= v10 )
          break;
        v11 = 272LL * k;
        if ( *(_DWORD *)(v11 + v3 + 232) == v8 )
        {
          *(_DWORD *)(v11 + v3 + 292) = j;
          *(_QWORD *)(v11 + *((_QWORD *)this + 8) + 48) |= 0x4000000000000uLL;
          v3 = *((_QWORD *)this + 8);
        }
      }
    }
  }
}
