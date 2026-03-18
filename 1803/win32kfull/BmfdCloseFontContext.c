/*
 * XREFs of BmfdCloseFontContext @ 0x1C02270A4
 * Callers:
 *     BmfdDestroyFont @ 0x1C0227130 (BmfdDestroyFont.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 */

__int64 __fastcall BmfdCloseFontContext(_QWORD *pv)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  if ( pv )
  {
    v2 = pv[1];
    EngAcquireSemaphore(ghsemBMFD);
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 )
    {
      v4 = v3 - 1;
      v5 = 1;
      *(_DWORD *)(v2 + 24) = v4;
      if ( !v4 )
      {
        v6 = *(_DWORD *)(v2 + 4);
        if ( (v6 & 1) == 0 )
        {
          EngUnmapFontFileFD(*(_QWORD *)(v2 + 16));
          v6 = *(_DWORD *)(v2 + 4);
        }
        *(_DWORD *)(v2 + 4) = v6 & 0xFFFFFFFE;
      }
      EngFreeMem(pv);
    }
    else
    {
      v5 = 0;
    }
    EngReleaseSemaphore(ghsemBMFD);
  }
  else
  {
    return 0;
  }
  return v5;
}
