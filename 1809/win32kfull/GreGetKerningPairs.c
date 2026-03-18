/*
 * XREFs of GreGetKerningPairs @ 0x1C0144014
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C0143F20 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C0144220 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C01444AC (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  char v5; // r14
  struct _FD_KERNINGPAIR *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  struct _FD_KERNINGPAIR *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct _FD_KERNINGPAIR *v17; // [rsp+20h] [rbp-98h] BYREF
  int v18; // [rsp+28h] [rbp-90h]
  _QWORD v19[2]; // [rsp+30h] [rbp-88h] BYREF
  float v20; // [rsp+40h] [rbp-78h] BYREF
  float v21; // [rsp+48h] [rbp-70h]
  int v22; // [rsp+50h] [rbp-68h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  _QWORD v24[8]; // [rsp+60h] [rbp-58h] BYREF

  v4 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !v24[0] )
    goto LABEL_27;
  v5 = 0;
  v18 = 0;
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v24, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v17[84].wcFirst);
  if ( !v17
    || (v6 = v17,
        v19[0] = *(_QWORD *)&v17[20].wcFirst,
        !bGetNtoWScale((struct EFLOAT *)&v20, (struct DCOBJ *)v24, (struct RFONTOBJ *)&v17, (struct PFEOBJ *)v19)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
LABEL_27:
    DCOBJ::~DCOBJ((DCOBJ *)v24);
    return 0LL;
  }
  v7 = *(_QWORD **)&v6[20].wcFirst;
  v8 = *(_QWORD *)&v17[21].wcSecond;
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
    v10 = PFEOBJ::cKernPairs((PFEOBJ *)v19, &v17);
    if ( v10 < (unsigned int)v4 )
      v4 = v10;
    v11 = a3 + 8 * v4;
    while ( a3 < v11 )
    {
      v12 = v17;
      *(_WORD *)a3 = v17->wcFirst;
      *(_WORD *)(a3 + 2) = v12->wcSecond;
      LODWORD(v13) = 0;
      v21 = (float)v12->fwdKern * v20;
      v14 = (unsigned __int8)(SLODWORD(v21) >> 23) - 118;
      v22 = v14;
      if ( v14 <= 40 )
      {
        v15 = LODWORD(v21) & 0x7FFFFF | 0x800000LL;
        v23 = v15;
        if ( v14 < 0 )
          v16 = v15 >> (118 - (unsigned __int8)(SLODWORD(v21) >> 23));
        else
          v16 = v15 << v14;
        v23 = v16 + 0x80000000LL;
        v13 = (v16 + 0x80000000LL) >> 32;
        v22 = v13;
        if ( v21 < 0.0 )
          LODWORD(v13) = -(int)v13;
      }
      *(_DWORD *)(a3 + 4) = v13;
      ++v17;
      a3 += 8LL;
      v24[6] = a3;
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
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return (unsigned int)v4;
}
