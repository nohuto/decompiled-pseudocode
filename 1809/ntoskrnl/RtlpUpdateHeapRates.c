/*
 * XREFs of RtlpUpdateHeapRates @ 0x1402F3160
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++a1[157];
    }
    else
    {
      ++a1[156];
    }
  }
  else
  {
    ++a1[154];
    ++a1[155];
  }
}
