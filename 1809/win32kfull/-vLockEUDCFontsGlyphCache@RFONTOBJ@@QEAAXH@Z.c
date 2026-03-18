/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C01618E4
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161AD0 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[2]; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  int v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+68h] [rbp-8h]

  v2 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v5 <= 0x20 )
  {
    v21[0] = *(_QWORD *)(v2 + 736);
    v21[1] = *(_QWORD *)(v2 + 728);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 856);
      v9 = *(_DWORD *)(*(_QWORD *)this + 840LL);
      if ( v8 < v9 )
        break;
      v11 = v8 - v9;
      if ( (unsigned int)v11 < 2 )
      {
        _mm_lfence();
        v10 = v21[v11];
LABEL_8:
        if ( v10 )
        {
          if ( a2 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)this + 720LL);
            if ( v12 )
            {
              if ( *(_QWORD *)(v12 + 120) < *(_QWORD *)(v10 + 120) )
                RFONTOBJ::vLockSystemTTGlyphCache(this);
            }
          }
          v13 = *(_QWORD *)(v10 + 504);
          v23 = 0;
          GreAcquireSemaphore(v13);
          v22 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        }
      }
      ++v6;
      if ( !--v7 )
      {
        if ( a2 )
          RFONTOBJ::vLockSystemTTGlyphCache(this);
        return;
      }
    }
    _mm_lfence();
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 744LL) + 8LL * *(unsigned __int8 *)(v6 + *(_QWORD *)this + 856));
    goto LABEL_8;
  }
  if ( a2 )
  {
    RFONTOBJ::vLockSystemTTGlyphCache(this);
    v2 = *(_QWORD *)this;
  }
  v14 = *(_QWORD *)(v2 + 728);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 504);
    v25 = 0;
    GreAcquireSemaphore(v15);
    v24 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    v2 = *(_QWORD *)this;
  }
  v16 = *(_QWORD *)(v2 + 736);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 504);
    v27 = 0;
    GreAcquireSemaphore(v17);
    v26 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    v2 = *(_QWORD *)this;
  }
  v18 = 0LL;
  if ( *(_DWORD *)(v2 + 840) )
  {
    do
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v2 + 744) + 8 * v18);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 504);
        v29 = 0;
        GreAcquireSemaphore(v20);
        v28 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
      }
      v2 = *(_QWORD *)this;
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *(_DWORD *)(*(_QWORD *)this + 840LL) );
  }
}
