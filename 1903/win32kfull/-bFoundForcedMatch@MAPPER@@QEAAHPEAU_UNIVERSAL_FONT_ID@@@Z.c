/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C004CC08
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00A6F94 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C004CD64 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00782A0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00A9E30 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00AAFA0 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0128FBC (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C0128FF4 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C01300DC (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0155A08 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C015D874 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028E63C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028E670 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  struct PFE *PFEFromUFIInternal; // rsi
  __int64 *v6; // r15
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // r8d
  int v12; // eax
  struct PFF *v14; // rax
  _QWORD *v15; // rax
  int *v16; // r11
  int v17; // r10d
  int v18; // r10d
  int v19; // r11d
  int v20; // eax
  int v22; // r14d
  int v23; // edx
  unsigned int v24; // eax
  int v25; // r10d
  int v26; // r11d
  int v27; // r10d
  unsigned int v28; // r11d
  _QWORD v29[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v30; // [rsp+30h] [rbp-10h]
  struct PFT *v31; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v31 = gpPFTDevice;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v31, *(HDEV *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v14 )
      return 0LL;
    v15 = (_QWORD *)((char *)v14 + 112);
    if ( !v15 )
      return 0LL;
    v29[0] = v15;
    v29[1] = *v15;
    v30 = 0LL;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v29);
    if ( !PFEFromUFIInternal )
      return 0LL;
    v17 = *v16;
    do
    {
      if ( *((_DWORD *)PFEFromUFIInternal + 21) == v17
        && *((_DWORD *)PFEFromUFIInternal + 22) == v16[1]
        && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v29);
    }
    while ( PFEFromUFIInternal );
  }
  else
  {
    PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(a2, 0, 1);
  }
  if ( PFEFromUFIInternal )
  {
    *((_DWORD *)this + 48) = 1;
    v6 = (__int64 *)((char *)this + 256);
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v7 = *((_QWORD *)PFEFromUFIInternal + 4);
    *((_QWORD *)this + 32) = v7;
    v8 = *(_DWORD *)(v7 + 48);
    if ( (v8 & 0x3000010) == 0 )
    {
      v4 = *((unsigned int *)this + 63);
      v18 = (v4 & 2) != 0 ? *(__int16 *)(v7 + 56) : *(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62);
      v19 = *((_DWORD *)this + 41);
      if ( v18 < v19 )
      {
        LOBYTE(v4) = (*((_DWORD *)this + 63) & 0x8000) == 0;
        if ( ((unsigned __int8)v4 & ((v8 & 0x100000) != 0)) != 0 && v19 > 7 * v18 / 4 )
        {
          if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v4, v19, v18, (int *)&v31) )
            return v2;
          v20 = (int)v31;
          v4 = 8LL;
          v7 = *v6;
          if ( (unsigned int)v31 > 8 )
            v20 = 8;
          *((_DWORD *)this + 49) = v20;
        }
      }
    }
    v9 = *((_QWORD *)this + 1);
    v10 = v7;
    if ( *(_BYTE *)(v9 + 20) )
    {
      if ( (*(_BYTE *)(v7 + 52) & 1) == 0 )
      {
        if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
          *((_DWORD *)this + 47) = 0x4000;
      }
    }
    v11 = *((_DWORD *)this + 63);
    if ( (v11 & 0x200000) == 0
      && *(unsigned __int16 *)(v10 + 46) - *((_DWORD *)this + 43) < 0
      && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v10 + 46) > 150
      && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x2000u;
    }
    v12 = *(_DWORD *)(v10 + 48);
    if ( (v12 & 0x2000010) != 0 )
    {
LABEL_10:
      v2 = 1;
      **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
      **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
      *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
      *((_DWORD *)this + 63) |= 0x1000000u;
      *((_QWORD *)this + 25) = PFEFromUFIInternal;
      return v2;
    }
    v22 = *(__int16 *)(v10 + 76);
    if ( *(_DWORD *)(v9 + 4) )
    {
      if ( (v11 & 4) == 0 )
      {
        MAPPER::bCalculateWishCell(this);
        v10 = *v6;
        v11 = *((_DWORD *)this + 63);
      }
      LOBYTE(v4) = (*(_DWORD *)(v10 + 48) & 0x100000) != 0;
      if ( ((unsigned __int8)v4 & ((v11 & 0x8000) == 0)) == 0 )
        goto LABEL_10;
      v23 = *((_DWORD *)this + 42);
      if ( v23 <= v22 )
        goto LABEL_10;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v4, v23, v22, (int *)&v31) )
        return v2;
      v24 = (unsigned int)v31;
    }
    else
    {
      if ( (v12 & 0x100000) == 0 || (v11 & 0x8000) != 0 )
        goto LABEL_10;
      v25 = *(_DWORD *)(v10 + 128);
      v26 = *(_DWORD *)(v10 + 132);
      LODWORD(v31) = 0;
      v32 = 0;
      if ( v25 == v26 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
      {
        v24 = *((_DWORD *)this + 49);
        if ( v24 == 1 )
          goto LABEL_10;
      }
      else
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             (unsigned int)(100 * *((_DWORD *)this + 62)),
                             *((unsigned int *)this + 61),
                             &v31)
          || (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v27), v28, &v33)
          || (unsigned int)SafeDivide<long,long,long>(v33, *((unsigned int *)this + 49), &v32) )
        {
          return v2;
        }
        if ( (unsigned int)v31 <= (3 * v32) >> 1 )
          goto LABEL_10;
        if ( !v32 )
          return v2;
        v24 = (unsigned int)v31 / v32;
      }
    }
    if ( v24 > 5 )
      v24 = 5;
    *((_DWORD *)this + 48) = v24;
    goto LABEL_10;
  }
  return 0LL;
}
