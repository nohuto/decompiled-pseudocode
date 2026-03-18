/*
 * XREFs of GreGetKerningPairs @ 0x1C011936C
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C0119290 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C028A030 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0081170 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C0119570 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0119BD8 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  char v5; // r14
  struct _FD_KERNINGPAIR *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned __int64 v10; // r9
  struct _FD_KERNINGPAIR *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct _FD_KERNINGPAIR *v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-70h]
  _QWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF
  float v20; // [rsp+40h] [rbp-58h] BYREF
  float v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+50h] [rbp-48h]
  _QWORD v23[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v24; // [rsp+68h] [rbp-30h]
  unsigned __int64 v25; // [rsp+70h] [rbp-28h]

  v4 = a2;
  MDCOBJ::MDCOBJ((MDCOBJ *)v23, a1);
  if ( !v23[0] )
    goto LABEL_26;
  v5 = 0;
  v18 = 0;
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v23, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v17[82].fwdKern);
  if ( !v17
    || (v6 = v17,
        v19[0] = *(_QWORD *)&v17[17].wcSecond,
        !bGetNtoWScale((struct EFLOAT *)&v20, (struct DCOBJ *)v23, (struct RFONTOBJ *)&v17, (struct PFEOBJ *)v19)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
LABEL_26:
    DCOBJ::~DCOBJ((DCOBJ *)v23);
    return 0LL;
  }
  v7 = *(_QWORD **)&v6[17].wcSecond;
  v8 = *(_QWORD *)&v17[18].fwdKern;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 88) + 40LL) & 0x8000) != 0 )
  {
    v19[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v5 = 1;
    ++*(_DWORD *)(v8 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v19);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  v19[0] = v7;
  if ( (_DWORD)v4 && a3 )
  {
    v9 = PFEOBJ::cKernPairs((PFEOBJ *)v19, &v17);
    if ( v9 < (unsigned int)v4 )
      v4 = v9;
    v10 = a3 + 8 * v4;
    while ( a3 < v10 )
    {
      v11 = v17;
      *(_WORD *)a3 = v17->wcFirst;
      *(_WORD *)(a3 + 2) = v11->wcSecond;
      LODWORD(v12) = 0;
      v21 = (float)v11->fwdKern * v20;
      v13 = (unsigned __int8)(SLODWORD(v21) >> 23) - 118;
      v22 = v13;
      if ( v13 <= 40 )
      {
        v14 = LODWORD(v21) & 0x7FFFFF | 0x800000LL;
        v24 = v14;
        if ( v13 < 0 )
          v15 = v14 >> (118 - (unsigned __int8)(SLODWORD(v21) >> 23));
        else
          v15 = v14 << v13;
        v24 = v15 + 0x80000000LL;
        v12 = (v15 + 0x80000000LL) >> 32;
        v22 = v12;
        if ( v21 < 0.0 )
          LODWORD(v12) = -(int)v12;
      }
      *(_DWORD *)(a3 + 4) = v12;
      ++v17;
      a3 += 8LL;
      v25 = a3;
    }
  }
  else
  {
    LODWORD(v4) = *(_DWORD *)(v7[4] + 164LL);
  }
  if ( v5 )
  {
    v19[0] = *v7;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v19);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return (unsigned int)v4;
}
