/*
 * XREFs of EngCloseFNTCache @ 0x1C00C36AC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00C2CF0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAllocInternal @ 0x1C026D5FC (EngFntCacheAllocInternal.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00C15D0 (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C00C278C (ComputeFileviewCheckSum.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C36F4 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 */

void EngCloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  int v2; // edx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx

  v0 = dword_1C0317300;
  if ( (dword_1C0317300 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C0317308;
    if ( qword_1C0317308 )
    {
      if ( (dword_1C0317300 & 2) == 0 )
        goto LABEL_4;
      if ( *(_QWORD *)qword_1C0317308 && *(_DWORD *)(qword_1C0317308 + 20) )
      {
        *(_DWORD *)(*(_QWORD *)qword_1C0317308 + 20LL) = *(_DWORD *)(qword_1C0317308 + 8);
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
        v3 = ComputeFileviewCheckSum((_DWORD *)(*(_QWORD *)v1 + 4LL), *(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4);
        v1 = (_DWORD *)qword_1C0317308;
        **(_DWORD **)qword_1C0317308 = v3;
        v0 = dword_1C0317300;
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
  dword_1C0317300 = 0;
  gbFntCacheClosed = 1;
}
