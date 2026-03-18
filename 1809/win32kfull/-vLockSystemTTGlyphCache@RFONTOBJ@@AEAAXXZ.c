/*
 * XREFs of ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161AD0
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C01618E4 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vLockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 720LL);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v1 + 712) & 0x80u) == 0 )
    {
      v4 = *(_QWORD *)(v3 + 504);
      v7 = 0;
      GreAcquireSemaphore(v4);
      v5 = *(_QWORD *)this;
      v6 = 0LL;
      *(_DWORD *)(v5 + 712) |= 0x80u;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
    }
  }
}
