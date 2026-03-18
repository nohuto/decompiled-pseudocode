/*
 * XREFs of EngCloseFNTCache @ 0x1C011D8E8
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C011D370 (xxxLW_LoadFonts.c)
 *     EngFntCacheAllocInternal @ 0x1C02857BC (EngFntCacheAllocInternal.c)
 * Callees:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C011D930 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bSetFntCacheReg @ 0x1C0141A90 (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C0142960 (ComputeFileviewCheckSum.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx

  v0 = dword_1C032A320;
  if ( (dword_1C032A320 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C032A328;
    if ( qword_1C032A328 )
    {
      if ( (dword_1C032A320 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C032A328 && *(_DWORD *)(qword_1C032A328 + 20) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C032A328 + 20LL) = *(_DWORD *)(qword_1C032A328 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum(*(_QWORD *)v1 + 4LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        v1 = (_DWORD *)qword_1C032A328;
        **(_DWORD **)qword_1C032A328 = v3;
        v0 = dword_1C032A320;
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
  dword_1C032A320 = 0;
  gbFntCacheClosed = 1;
}
