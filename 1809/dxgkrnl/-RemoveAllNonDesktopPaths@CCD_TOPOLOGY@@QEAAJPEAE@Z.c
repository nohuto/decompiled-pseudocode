/*
 * XREFs of ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C0288AD0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00C99A4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllNonDesktopPaths(__int64 this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r9
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int16 v8; // ax
  __int128 *v9; // rdx
  __int128 *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = this;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 64);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    v9 = (__int128 *)(272LL * v4 + v7 + 48);
    this = 0x1000000000LL;
    if ( (*(_QWORD *)v9 & 0x1000000000LL) != 0 )
    {
      *a2 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        v10 = (__int128 *)(272LL * v5 + v7 + 48);
        this = 2LL;
        do
        {
          v11 = *v9;
          v9 += 8;
          *v10 = v11;
          v10[1] = *(v9 - 7);
          v10[2] = *(v9 - 6);
          v10[3] = *(v9 - 5);
          v10[4] = *(v9 - 4);
          v10[5] = *(v9 - 3);
          v10[6] = *(v9 - 2);
          v10 += 8;
          *(v10 - 1) = *(v9 - 1);
          --this;
        }
        while ( this );
        *v10 = *v9;
      }
      ++v5;
    }
    ++v4;
  }
  if ( *a2 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
    {
      v12 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v12);
      v7 = *(_QWORD *)(v6 + 64);
    }
    *(_WORD *)(v7 + 20) = v5;
    CCD_TOPOLOGY::ClearModalitySetId((void **)v6);
  }
  return 0LL;
}
