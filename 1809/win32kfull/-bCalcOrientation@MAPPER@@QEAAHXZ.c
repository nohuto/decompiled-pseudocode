/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00FCFF4
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00FCD5C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall MAPPER::bCalcOrientation(__int64 **this)
{
  int v1; // r8d
  int v3; // edi
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // r10
  float v7; // xmm0_4
  bool v8; // dl
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  float v12; // xmm0_4
  int v13; // r11d
  BOOL v14; // r10d
  float v15; // xmm0_4
  int v16; // r10d
  BOOL v17; // r9d
  float v18; // xmm0_4
  BOOL v19; // esi
  int v20; // r8d
  int v21; // ebp
  int v22; // esi
  int v23; // r8d
  unsigned int v24; // edx
  int v25; // r10d
  float *v26; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 63);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = 0;
    v4 = *((_DWORD *)this[1] + 2);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v6 = **this;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1002) == 2 )
      {
        v7 = *(float *)(v6 + 320);
        v8 = v7 > 0.0;
        v9 = v7 > 0.0;
        v10 = v7 == 0.0;
        v11 = *(float *)(v6 + 332);
        LOBYTE(v3) = v11 < 0.0;
        if ( v8 - (!v9 && !v10) != (v11 > 0.0) - v3 )
          *((_DWORD *)this + 44) = -v4;
      }
    }
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 976) + 340LL) & 0x802) == 0x802 || (v1 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = *((_DWORD *)this[1] + 3);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 63) = v1 | 0x80000;
    return result;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v26, (struct XDCOBJ *)*this, 516);
  v12 = v26[1];
  v14 = v12 > 0.0;
  v9 = v12 > 0.0;
  v10 = v12 == 0.0;
  v15 = v26[2];
  v16 = v14 - (!v9 && !v10);
  v17 = v15 > 0.0;
  v9 = v15 > 0.0;
  v10 = v15 == 0.0;
  v18 = v26[3];
  v19 = !v9 && !v10;
  v20 = v17 - v19;
  v21 = (__PAIR64__(v18 < 0.0, 0.0) - LODWORD(v18)) >> 32;
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 976) + 340LL) & 0x40) == 0 )
    v21 = (__PAIR64__(v18 > 0.0, LODWORD(v18)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v22 = v19 - v17;
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 976) + 340LL) & 0x40) == 0 )
    v22 = v20;
  v23 = *((_DWORD *)this[1] + 3);
  if ( v23 != 900 * (v23 / 900) )
    return 0;
  v24 = 1;
  v13 = (__PAIR64__(*v26 > 0.0, *v26) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (v22 + v16) | (v13 - v21) | (v13 ^ ~v16) & 1 )
  {
    return 0;
  }
  else
  {
    v25 = (v22 & 0xA8C)
        + v23
        + (((__PAIR64__(*v26 > 0.0, *v26) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708)
        + (v16 & 0x384);
    *((_DWORD *)this + 44) = v25;
    if ( v25 >= 3600 )
      *((_DWORD *)this + 44) = v25 - 3600;
    *((_DWORD *)this + 63) |= 0x80000u;
  }
  return v24;
}
