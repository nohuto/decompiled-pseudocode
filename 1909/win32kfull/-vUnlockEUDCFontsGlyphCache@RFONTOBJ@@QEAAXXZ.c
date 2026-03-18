/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C00F9548
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00F9478 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00F9600 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 712);
  if ( (v3 & 0x80u) != 0 && (v3 & 0x100) == 0 )
  {
    v9 = *(_QWORD *)(v2 + 720);
    if ( v9 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v9 + 504)) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)this + 720LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v10);
        *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x80u;
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v10);
      }
    }
  }
  v4 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x101) == 1 )
  {
    v5 = *(_DWORD *)(v4 + 840) - 1;
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = *(_QWORD *)this;
      do
      {
        v8 = *(_QWORD *)(v4 + 744);
        if ( *(_QWORD *)(v8 + 8 * v6) )
        {
          v10 = *(_QWORD *)(v8 + 8 * v6);
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v10);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v10);
          v4 = *(_QWORD *)this;
          v7 = *(_QWORD *)this;
        }
        --v6;
      }
      while ( v6 >= 0 );
      v4 = v7;
    }
    if ( *(_QWORD *)(v4 + 736) )
    {
      v10 = *(_QWORD *)(v4 + 736);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v10);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v10);
      v4 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v4 + 728) )
    {
      v10 = *(_QWORD *)(v4 + 728);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v10);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v10);
    }
  }
}
