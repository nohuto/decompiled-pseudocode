/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C014E48C
 * Callers:
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014C9B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C014E334 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // ebx
  FIX x; // r10d
  FIX v7; // r9d
  int v8; // r8d
  int v9; // r9d
  FIX y; // edi
  FIX v11; // edx
  int v12; // edx
  int v13; // r15d
  int v14; // eax
  int v15; // r10d
  int v16; // r15d
  int v17; // eax
  int v18; // edi
  signed __int64 v19; // rbp
  __int64 v20; // rbp
  char v21; // r8
  unsigned int v22; // esi
  int v23; // r14d
  signed int v24; // r9d
  int v25; // r8d
  signed int v26; // r8d
  int v27; // ecx
  int v28; // eax
  int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // ecx
  __int64 result; // rax
  int v35; // ecx
  FIX v36; // eax

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  if ( a3->x < a2->x )
  {
    x = -x;
    v8 = 32;
    *(_DWORD *)this = 32;
    v7 = -v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = v7 - x;
  *((_DWORD *)this + 4) = v9;
  if ( v9 < 0 )
    return 0LL;
  y = a2->y;
  v11 = a3->y;
  if ( v11 < y )
  {
    v8 |= 8u;
    y = -y;
    *(_DWORD *)this = v8;
    v11 = -v11;
  }
  v12 = v11 - y;
  *((_DWORD *)this + 3) = v12;
  if ( v12 < 0 )
    return 0LL;
  if ( v12 >= (unsigned int)v9 )
  {
    if ( v12 == v9 )
    {
      v8 |= 0x10u;
    }
    else
    {
      v35 = v9;
      *((_DWORD *)this + 3) = v9;
      v36 = x;
      *((_DWORD *)this + 4) = v12;
      x = y;
      v9 = v12;
      y = v36;
      v12 = v35;
      v8 |= 5u;
    }
  }
  v13 = *(_DWORD *)((char *)gaflRound + (v8 & 0xFFFFFFFC));
  v14 = x >> 4;
  v15 = x & 0xF;
  *((_DWORD *)this + 1) = v14;
  v16 = v8 | v13;
  v17 = y >> 4;
  v18 = y & 0xF;
  *((_DWORD *)this + 2) = v17;
  *(_DWORD *)this = v16;
  v19 = v9 * (unsigned __int64)(unsigned int)(v18 + 8) - v12 * (unsigned __int64)(unsigned int)v15;
  if ( (v16 & 0x8000) != 0 )
    --v19;
  v20 = v19 >> 4;
  v21 = v9 + v15;
  *((_QWORD *)this + 3) = v20;
  v22 = (unsigned int)(v9 + v15) >> 4;
  v23 = ((_BYTE)v12 + (_BYTE)v18) & 0xF;
  v24 = v22 - 1;
  v25 = v21 & 0xF;
  if ( v25 )
  {
    if ( (((_BYTE)v12 + (_BYTE)v18) & 0xF) != 0 )
    {
      if ( (int)abs32(v23 - 8) <= v25 )
        v24 = v22;
    }
    else
    {
      if ( v25 - (unsigned int)((v16 & 0x80) != 0) + 8 < 0x10 )
        --v22;
      v24 = v22;
    }
  }
  if ( (v16 & 0x90) != 0x90 )
    goto LABEL_12;
  if ( v25 && v23 == v25 + 8 )
    --v24;
  if ( v15 && v18 == v15 + 8 )
  {
    v26 = 0;
  }
  else
  {
LABEL_12:
    v26 = 0;
    if ( v15 )
    {
      if ( v18 )
        v26 = (int)abs32(v18 - 8) <= v15;
      else
        LOBYTE(v26) = v15 - (unsigned int)((v16 & 0x80) != 0) + 8 >= 0x10;
    }
  }
  if ( v20 >= 0 && (unsigned int)v20 >= *((_DWORD *)this + 4) - (*((_DWORD *)this + 3) & (unsigned int)-v26) )
    v3 = 1;
  if ( v24 < v26 )
    return 0LL;
  v27 = *((_DWORD *)this + 1);
  v28 = v27 + v26;
  v29 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v28;
  v30 = v27 + v24;
  v31 = *((int *)this + 3);
  *((_DWORD *)this + 10) = v30;
  *((_DWORD *)this + 9) = v29 + v3;
  v32 = v20 + v31 * v24;
  if ( v32 >= 0xFFFFFFFFLL )
    v32 /= (unsigned __int64)*((unsigned int *)this + 4);
  else
    LODWORD(v32) = (unsigned int)v32 / *((_DWORD *)this + 4);
  v33 = v29 + v32;
  result = 1LL;
  *((_DWORD *)this + 11) = v33;
  return result;
}
