/*
 * XREFs of BmlCompareTargetModes @ 0x1C00DB708
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00DB304 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00DB800 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00DC3AC (BmlCompareRegionsWithPivot.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1C013B8F0 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareMonitorRegions @ 0x1C02C1684 (BmlCompareMonitorRegions.c)
 *     BmlCompareWireFormat @ 0x1C02C17D8 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a4 == a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v10 = 104LL * a3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 28LL));
  if ( !Path )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v20);
  }
  v14 = *((_QWORD *)Path + 12);
  if ( !v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(0LL, v11);
    WdLogEvent5_WdAssertion(v21);
    v14 = *((_QWORD *)Path + 12);
  }
  if ( !*(_QWORD *)(v14 + 96) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v14, v11);
    WdLogEvent5_WdAssertion(v22);
  }
  result = BmlCompareTargetModesWithConstraint(a1, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v16) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v16, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(v10 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareMonitorRegions(a4, a5);
        if ( !(_DWORD)result )
          return BmlCompareWireFormat(a4, a5);
      }
    }
  }
  return result;
}
