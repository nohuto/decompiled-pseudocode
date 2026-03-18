/*
 * XREFs of EngCloseFNTCache @ 0x1C00E8F78
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00E8A00 (xxxLW_LoadFonts.c)
 *     EngFntCacheAllocInternal @ 0x1C0285E7C (EngFntCacheAllocInternal.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00E6B38 (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C00E859C (ComputeFileviewCheckSum.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E8FC0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  int v2; // edx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx

  v0 = dword_1C032C330;
  if ( (dword_1C032C330 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C032C338;
    if ( qword_1C032C338 )
    {
      if ( (dword_1C032C330 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C032C338 && *(_DWORD *)(qword_1C032C338 + 20) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C032C338 + 20LL) = *(_DWORD *)(qword_1C032C338 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum((_DWORD *)(*(_QWORD *)v1 + 4LL), *(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4);
        v1 = (_DWORD *)qword_1C032C338;
        **(_DWORD **)qword_1C032C338 = v3;
        v0 = dword_1C032C330;
      }
      if ( (v0 & 2) != 0 )
      {
        v4 = v1[4];
        if ( v1[3] != v4 )
          bSetFntCacheReg(1u, v4);
        v2 = 0;
        v5 = 0;
      }
      else
      {
LABEL_4:
        v2 = v1[4];
        if ( (v2 & 3) == 0 )
        {
LABEL_5:
          vCleanUpFntCacheInternal();
          return;
        }
        v5 = 1;
      }
      bSetFntCacheReg(v5, v2);
      goto LABEL_5;
    }
  }
  dword_1C032C330 = 0;
  gbFntCacheClosed = 1;
}
