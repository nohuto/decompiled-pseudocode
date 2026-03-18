/*
 * XREFs of EngCloseFNTCache @ 0x1C004F588
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C004EBF0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C025A020 (EngFntCacheAlloc.c)
 * Callees:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C004F5D0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bSetFntCacheReg @ 0x1C00554CC (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C005665C (ComputeFileviewCheckSum.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx

  v0 = dword_1C0326C50;
  if ( (dword_1C0326C50 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C0326C58;
    if ( qword_1C0326C58 )
    {
      if ( (dword_1C0326C50 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C0326C58 && *(_DWORD *)(qword_1C0326C58 + 20) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C0326C58 + 20LL) = *(_DWORD *)(qword_1C0326C58 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum(*(_QWORD *)v1 + 4LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        v1 = (_DWORD *)qword_1C0326C58;
        **(_DWORD **)qword_1C0326C58 = v3;
        v0 = dword_1C0326C50;
      }
      if ( (v0 & 2) != 0 )
      {
        v4 = v1[4];
        if ( v1[3] != v4 )
          bSetFntCacheReg(1LL, v4);
        v2 = 0LL;
        v5 = 0LL;
      }
      else
      {
LABEL_4:
        v2 = (unsigned int)v1[4];
        if ( (v2 & 3) == 0 )
        {
LABEL_5:
          vCleanUpFntCacheInternal();
          return;
        }
        v5 = 1LL;
      }
      bSetFntCacheReg(v5, v2);
      goto LABEL_5;
    }
  }
  dword_1C0326C50 = 0;
  gbFntCacheClosed = 1;
}
