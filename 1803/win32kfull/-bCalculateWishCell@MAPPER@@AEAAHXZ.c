/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0040828
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C003FCE0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0040A34 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119970 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // r14d
  unsigned int v6; // esi
  int v7; // edi
  int v8; // r12d
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  float *v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+60h] [rbp+30h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 63);
  v4 = v2;
  if ( (v3 & 0x20) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 352LL) & 0x802) == 0x802 || (v3 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = v2;
    *((_DWORD *)this + 63) = v3 | 0x1C;
    return 1LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, *(struct XDCOBJ **)this, 0x204u);
  v6 = 0;
  v7 = *((_DWORD *)this + 63);
  v8 = (__PAIR64__(*v18 > 0.0, *v18) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v9 = (__PAIR64__(v18[1] > 0.0, *((_DWORD *)v18 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v10 = -((__PAIR64__(v18[3] > 0.0, *((_DWORD *)v18 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32);
  v11 = *(_QWORD *)(**(_QWORD **)this + 80LL);
  v12 = *(_DWORD *)(v11 + 352) & 0x40;
  if ( (*(_DWORD *)(v11 + 352) & 0x40) == 0 )
    v10 = (__PAIR64__(v18[3] > 0.0, *((_DWORD *)v18 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v13 = -((__PAIR64__(v18[2] > 0.0, *((_DWORD *)v18 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32);
  if ( !(_DWORD)v12 )
    v13 = (__PAIR64__(v18[2] > 0.0, *((_DWORD *)v18 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (v7 & 0x81000) != 0 )
    goto LABEL_16;
  if ( v4 == 900 * (v4 / 900) )
  {
    v12 = (v8 - v10) | (v13 + v9) | ((unsigned __int8)v8 ^ (unsigned __int8)~(_BYTE)v9) & 1u;
    if ( !((v8 - v10) | (v13 + v9) | ((unsigned __int8)v8 ^ (unsigned __int8)~(_BYTE)v9) & 1) )
    {
      v14 = (((__PAIR64__(v18[1] > 0.0, *((_DWORD *)v18 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x384)
          + v4
          + (v13 & 0xA8C)
          + (((__PAIR64__(*v18 > 0.0, *v18) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
      *((_DWORD *)this + 44) = v14;
      if ( v14 >= 3600 )
        *((_DWORD *)this + 44) = v14 - 3600;
      v7 |= 0x80000u;
      *((_DWORD *)this + 63) = v7;
LABEL_16:
      if ( (v7 & 8) == 0 )
      {
        v19 = 0;
        bFToL(v12, &v19, 0LL);
        v16 = v19;
        *((_DWORD *)this + 41) = v19;
        if ( v16 < 0 )
        {
          v16 = -v16;
          *((_DWORD *)this + 41) = v16;
        }
        *((_DWORD *)this + 41) = (v16 + 8) >> 4;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) && (v7 & 0x10) == 0 )
      {
        v19 = 0;
        bFToL(v12, &v19, 0LL);
        v17 = v19;
        *((_DWORD *)this + 42) = v19;
        if ( v17 < 0 )
        {
          v17 = -v17;
          *((_DWORD *)this + 42) = v17;
        }
        *((_DWORD *)this + 42) = (v17 + 8) >> 4;
      }
      v15 = v7 | 0x1C;
      v6 = 1;
      goto LABEL_28;
    }
  }
  v15 = v7 | 0x20;
LABEL_28:
  *((_DWORD *)this + 63) = v15;
  return v6;
}
