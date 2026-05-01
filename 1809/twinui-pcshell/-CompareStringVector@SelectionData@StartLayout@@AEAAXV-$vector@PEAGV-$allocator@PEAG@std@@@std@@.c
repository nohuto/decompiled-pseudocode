/*
 * XREFs of ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18013DAB0
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18013DCCC (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18013EDA4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall StartLayout::SelectionData::CompareStringVector(
        __int64 a1,
        LPCWCH **a2,
        char a3,
        LPCWCH **a4,
        char a5,
        int *a6)
{
  LPCWCH *v8; // rdi
  int v9; // ebx
  LPCWCH *v10; // r12
  LPCWCH *v11; // rsi
  LPCWCH *v12; // r13

  if ( a3 && a5 )
  {
    v8 = *a2;
    v9 = -1;
    v10 = a2[1];
LABEL_9:
    if ( v8 != v10 )
    {
      v11 = *a4;
      v12 = a4[1];
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          ++v8;
          goto LABEL_9;
        }
        if ( CompareStringOrdinal(*v8, -1, *v11, -1, 0) == 2 )
          break;
        ++v11;
      }
      v9 = *a6 + 1;
    }
    *a6 = v9;
  }
  std::vector<void *>::_Tidy(a2);
  return std::vector<void *>::_Tidy(a4);
}
