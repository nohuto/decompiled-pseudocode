/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C00D739C
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D7880 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D76C4 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00D79EC (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r9d

  v8 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v10 = 0;
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (*(_QWORD *)v8 & 0x8000000100LL) == 0
    || (v14 = *(_DWORD *)(v8 + 116), v15 = *(_DWORD *)(a3 + 96), (v15 == v14) == (*(_DWORD *)(a4 + 96) == v14)) )
  {
    if ( (*(_QWORD *)v8 & 0x100LL) != 0 )
      return (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)(a3 + 76),
                             (struct _D3DKMDT_2DREGION *)(a4 + 76),
                             (struct _D3DKMDT_2DREGION *)(v8 + 96));
  }
  else
  {
    v10 = -1;
    if ( v15 == v14 )
      return 1;
  }
  return v10;
}
