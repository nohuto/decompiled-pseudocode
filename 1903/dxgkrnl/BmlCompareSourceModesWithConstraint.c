/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C00DB920
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00DB7F8 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00DB9EC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00DBD6C (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // edx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax

  v8 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v11 = 0;
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a3) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a4) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (*(_QWORD *)v8 & 0x8000000100LL) == 0
    || (v15 = *(_DWORD *)(v8 + 116), v16 = *(_DWORD *)(a3 + 96), (v16 == v15) == (*(_DWORD *)(a4 + 96) == v15)) )
  {
    if ( (*(_QWORD *)v8 & 0x100LL) != 0 )
      return (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)(a3 + 76),
                             (struct _D3DKMDT_2DREGION *)(a4 + 76),
                             (struct _D3DKMDT_2DREGION *)(v8 + 96));
  }
  else
  {
    v11 = -1;
    if ( v16 == v15 )
      return 1;
  }
  return v11;
}
