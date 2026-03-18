/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C0161B34
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C01617B4 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C5BD0 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161C24 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]

  RFONTOBJ::vUnlockSystemTTGlyphCache(this);
  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x101) == 1 )
  {
    v3 = *(_DWORD *)(v2 + 840) - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = *(_QWORD *)this;
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v2 + 744) + 8 * v4);
        if ( v6 )
        {
          v10 = 0;
          v9 = v6;
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v9);
          v9 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
          v2 = *(_QWORD *)this;
          v5 = *(_QWORD *)this;
        }
        --v4;
      }
      while ( v4 >= 0 );
      v2 = v5;
    }
    v7 = *(_QWORD *)(v2 + 736);
    if ( v7 )
    {
      v10 = 0;
      v9 = v7;
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v9);
      v9 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      v2 = *(_QWORD *)this;
    }
    v8 = *(_QWORD *)(v2 + 728);
    if ( v8 )
    {
      v10 = 0;
      v9 = v8;
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v9);
      v9 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
    }
  }
}
