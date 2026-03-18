/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C013CB34
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C013C0CC (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0088C68 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 696) & 0x180) == 0x80 )
  {
    v3 = *(_QWORD *)(v2 + 704);
    if ( v3 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v3 + 496)) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)this + 704LL);
        v13 = 0;
        v12 = v4;
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v12);
        *(_DWORD *)(*(_QWORD *)this + 696LL) &= ~0x80u;
        v12 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      }
    }
  }
  v5 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 696LL) & 0x101) == 1 )
  {
    v6 = *(_DWORD *)(v5 + 824) - 1;
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)this;
      do
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 728) + 8 * v7);
        if ( v9 )
        {
          v13 = 0;
          v12 = v9;
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v12);
          v12 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
          v5 = *(_QWORD *)this;
          v8 = *(_QWORD *)this;
        }
        --v7;
      }
      while ( v7 >= 0 );
      v5 = v8;
    }
    v10 = *(_QWORD *)(v5 + 720);
    if ( v10 )
    {
      v13 = 0;
      v12 = v10;
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v12);
      v12 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      v5 = *(_QWORD *)this;
    }
    v11 = *(_QWORD *)(v5 + 712);
    if ( v11 )
    {
      v13 = 0;
      v12 = v11;
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v12);
      v12 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    }
  }
}
