/*
 * XREFs of GreGetKerningPairs @ 0x1C0144EE4
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C0144DF0 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C02B43E4 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01450E8 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C014535C (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  char v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  struct _FD_KERNINGPAIR *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+20h] [rbp-68h] BYREF
  float v18; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  struct _FD_KERNINGPAIR *v21; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  unsigned __int64 v24; // [rsp+68h] [rbp-20h]

  v4 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( !v22[0] )
    goto LABEL_27;
  v5 = 0;
  v18 = 0.0;
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v22, 0, 2u) )
    GreAcquireSemaphore(v17[63]);
  if ( !v17
    || (v6 = v17,
        v19[0] = v17[15],
        !bGetNtoWScale((struct EFLOAT *)&v18, (struct DCOBJ *)v22, (struct RFONTOBJ *)&v17, (struct PFEOBJ *)v19)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
LABEL_27:
    DCOBJ::~DCOBJ((DCOBJ *)v22);
    return 0LL;
  }
  v7 = (_QWORD *)v6[15];
  v8 = v17[16];
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
    v10 = PFEOBJ::cKernPairs((PFEOBJ *)v19, &v21);
    if ( v10 < (unsigned int)v4 )
      v4 = v10;
    v11 = a3 + 8 * v4;
    while ( a3 < v11 )
    {
      v12 = v21;
      *(_WORD *)a3 = v21->wcFirst;
      *(_WORD *)(a3 + 2) = v12->wcSecond;
      LODWORD(v13) = 0;
      *(float *)&v17 = (float)v12->fwdKern * v18;
      v14 = (unsigned __int8)((int)v17 >> 23) - 118;
      v20 = v14;
      if ( v14 <= 40 )
      {
        v15 = (unsigned int)v17 & 0x7FFFFF | 0x800000LL;
        v23 = v15;
        if ( v14 < 0 )
          v16 = v15 >> (118 - (unsigned __int8)((int)v17 >> 23));
        else
          v16 = v15 << v14;
        v23 = v16 + 0x80000000LL;
        v13 = (v16 + 0x80000000LL) >> 32;
        v20 = v13;
        if ( (int)v17 < 0 )
          LODWORD(v13) = -(int)v13;
      }
      *(_DWORD *)(a3 + 4) = v13;
      ++v21;
      a3 += 8LL;
      v24 = a3;
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
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return (unsigned int)v4;
}
