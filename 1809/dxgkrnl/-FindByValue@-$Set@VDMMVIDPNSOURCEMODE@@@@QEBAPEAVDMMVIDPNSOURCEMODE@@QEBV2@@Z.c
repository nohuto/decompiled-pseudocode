/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000BAF0
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000370C (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??$Add@VDMMVIDPNSOURCEMODE@@@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000B9E0 (--$Add@VDMMVIDPNSOURCEMODE@@@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a1 + 24;
  if ( v2 == a1 + 24 )
    return 0LL;
  v5 = v2 - 8;
  while ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 == a2[18] )
    {
      if ( v6 == 1 )
        goto LABEL_5;
      if ( v6 == 2 )
      {
        if ( *(_DWORD *)(v5 + 76) == a2[19] )
          return v5;
      }
      else
      {
        if ( v6 > 2 && v6 <= 4 )
        {
LABEL_5:
          if ( *(_DWORD *)(v5 + 76) == a2[19]
            && *(_DWORD *)(v5 + 80) == a2[20]
            && *(_DWORD *)(v5 + 84) == a2[21]
            && *(_DWORD *)(v5 + 88) == a2[22]
            && *(_DWORD *)(v5 + 92) == a2[23]
            && *(_DWORD *)(v5 + 96) == a2[24]
            && *(_DWORD *)(v5 + 100) == a2[25]
            && *(_DWORD *)(v5 + 104) == a2[26] )
          {
            return v5;
          }
          goto LABEL_6;
        }
        if ( (unsigned int)(v6 - 1) <= 3 )
        {
          v9 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v9);
        }
      }
    }
LABEL_6:
    v7 = *(_QWORD *)(v5 + 8);
    v5 = v7 - 8;
    if ( v7 == v3 )
      v5 = 0LL;
  }
  return v5;
}
