/*
 * XREFs of ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161C24
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C0161B34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C5BD0 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 712);
  if ( (v3 & 0x80u) != 0 && (v3 & 0x100) == 0 )
  {
    v4 = *(_QWORD *)(v2 + 720);
    if ( v4 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v4 + 504)) )
      {
        v5 = *(_QWORD *)(*(_QWORD *)this + 720LL);
        v7 = 0;
        v6 = v5;
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v6);
        *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x80u;
        v6 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
      }
    }
  }
}
