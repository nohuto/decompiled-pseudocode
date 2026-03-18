/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C02AD6F4
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C029E0E8 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C029ECB4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // ebx
  FIX x; // r11d
  FIX v7; // r9d
  int v8; // edx
  int v9; // r9d
  __int64 result; // rax
  FIX y; // edi
  FIX v12; // r8d
  int v13; // r8d
  int v14; // ecx
  FIX v15; // eax
  int v16; // r12d
  int v17; // eax
  int v18; // r11d
  int v19; // r12d
  int v20; // eax
  int v21; // edi
  signed __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // r15d
  int v25; // r13d
  signed int v26; // r14d
  int v27; // ebp
  signed int v28; // ebp
  unsigned int v29; // r15d
  int v30; // ecx
  int v31; // r11d
  __int64 v32; // rax
  int v33; // ecx

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  *((_DWORD *)this + 4) = a3->x;
  if ( v7 >= x )
  {
    v8 = 0;
  }
  else
  {
    x = -x;
    v8 = 32;
    v7 = -v7;
    *(_DWORD *)this = 32;
    *((_DWORD *)this + 4) = v7;
  }
  v9 = v7 - x;
  *((_DWORD *)this + 4) = v9;
  if ( v9 < 0 )
    return 0LL;
  y = a2->y;
  v12 = a3->y;
  *((_DWORD *)this + 3) = v12;
  if ( v12 < y )
  {
    v12 = -v12;
    y = -y;
    v8 |= 8u;
    *((_DWORD *)this + 3) = v12;
    *(_DWORD *)this = v8;
  }
  v13 = v12 - y;
  *((_DWORD *)this + 3) = v13;
  if ( v13 < 0 )
    return 0LL;
  if ( v13 >= (unsigned int)v9 )
  {
    if ( v13 == v9 )
    {
      v8 |= 0x10u;
      *(_DWORD *)this = v8;
    }
    else
    {
      v14 = v9;
      *((_DWORD *)this + 3) = v9;
      v15 = x;
      *((_DWORD *)this + 4) = v13;
      v8 |= 5u;
      x = y;
      v9 = v13;
      *(_DWORD *)this = v8;
      y = v15;
      v13 = v14;
    }
  }
  v16 = *(_DWORD *)((char *)gaflRound + (v8 & 0xFFFFFFFC));
  v17 = x >> 4;
  v18 = x & 0xF;
  *((_DWORD *)this + 1) = v17;
  v19 = v8 | v16;
  v20 = y >> 4;
  v21 = y & 0xF;
  *((_DWORD *)this + 2) = v20;
  *(_DWORD *)this = v19;
  v22 = v9 * (unsigned __int64)(unsigned int)(v21 + 8) - v13 * (unsigned __int64)(unsigned int)v18;
  *((_QWORD *)this + 3) = v22;
  if ( (v19 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = --v22;
  v23 = v22 >> 4;
  *((_QWORD *)this + 3) = v23;
  v24 = (unsigned int)(v9 + v18) >> 4;
  v25 = ((_BYTE)v13 + (_BYTE)v21) & 0xF;
  v26 = v24 - 1;
  v27 = ((_BYTE)v9 + (_BYTE)v18) & 0xF;
  if ( (((_BYTE)v9 + (_BYTE)v18) & 0xF) != 0 )
  {
    if ( (((_BYTE)v13 + (_BYTE)v21) & 0xF) != 0 )
    {
      if ( (int)abs32(v25 - 8) <= v27 )
        v26 = (unsigned int)(v9 + v18) >> 4;
    }
    else
    {
      if ( v27 - (unsigned int)((v19 & 0x80) != 0) + 8 < 0x10 )
        --v24;
      v26 = v24;
    }
  }
  if ( (v19 & 0x90) != 0x90 )
    goto LABEL_29;
  if ( (((_BYTE)v9 + (_BYTE)v18) & 0xF) != 0 && v25 == v27 + 8 )
    --v26;
  if ( v18 && v21 == v18 + 8 )
  {
    v28 = 0;
    v29 = v23;
  }
  else
  {
LABEL_29:
    v28 = 0;
    v29 = v23;
    if ( v18 )
    {
      if ( v21 )
        v28 = (int)abs32(v21 - 8) <= v18;
      else
        LOBYTE(v28) = v18 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10;
    }
  }
  if ( v23 >= 0 )
  {
    v13 = *((_DWORD *)this + 3);
    v9 = *((_DWORD *)this + 4);
    if ( v29 >= v9 - (v13 & (unsigned int)-v28) )
      v3 = 1;
  }
  if ( v26 < v28 )
    return 0LL;
  v30 = *((_DWORD *)this + 1);
  v31 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v30 + v28;
  *((_DWORD *)this + 10) = v30 + v26;
  *((_DWORD *)this + 9) = v31 + v3;
  v32 = v23 + v13 * (__int64)v26;
  if ( v32 >= 0xFFFFFFFFLL )
    v32 /= (unsigned __int64)(unsigned int)v9;
  else
    LODWORD(v32) = (unsigned int)v32 / v9;
  v33 = v31 + v32;
  result = 1LL;
  *((_DWORD *)this + 11) = v33;
  return result;
}
