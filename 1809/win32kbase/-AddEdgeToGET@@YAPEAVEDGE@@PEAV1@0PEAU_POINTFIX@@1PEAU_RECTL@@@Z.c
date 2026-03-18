/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C009EB78
 * Callers:
 *     bConstructGET @ 0x1C009EA60 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // r10d
  FIX v6; // r11d
  FIX x; // eax
  int v8; // ebx
  FIX v9; // r8d
  int v10; // r9d
  FIX v11; // esi
  FIX v12; // r12d
  FIX v13; // r14d
  FIX v16; // ebp
  int v17; // r11d
  LONG v18; // eax
  int v19; // r11d
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // r10d
  int v26; // ecx
  int v27; // edx
  bool v28; // zf
  int v29; // eax
  int v30; // r8d
  __int64 v31; // rax
  int v32; // ecx
  struct EDGE *result; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  int v37; // kr00_4
  int v38; // eax
  LONG top; // eax
  LONG bottom; // ecx
  bool v41; // sf
  bool v42; // of
  bool v43; // cc
  LONG v44; // edx

  y = a4->y;
  v6 = a3->y;
  x = a4->x;
  v8 = y - v6;
  v9 = a3->x;
  v10 = y - v6;
  v11 = v6;
  v12 = x;
  v13 = y;
  if ( y - v6 < 0 )
    v13 = v6;
  v16 = 0;
  if ( v8 < 0 )
  {
    v12 = v9;
    v11 = y;
    v9 = x;
  }
  v17 = v6 - y;
  v18 = v13;
  if ( v8 < 0 )
    v10 = v17;
  v19 = 0;
  *((_DWORD *)a2 + 10) = ((v8 >> 31) & 0xFFFFFFFE) + 1;
  if ( a5 )
  {
    top = a5->top;
    if ( v13 < top )
      return a2;
    bottom = a5->bottom;
    if ( v11 > bottom )
      return a2;
    v42 = __OFSUB__(v11, top);
    v41 = v11 - top < 0;
    v43 = v11 < top;
    v44 = a5->top;
    v16 = v11;
    v18 = v13;
    if ( !v43 )
      v44 = v11;
    LOBYTE(v19) = v41 ^ v42;
    if ( !v43 )
      v16 = 0;
    v11 = v44;
    if ( v13 > bottom )
      v18 = a5->bottom;
  }
  v20 = (v11 + 15) >> 4;
  v21 = ((v18 + 15) >> 4) - v20;
  *((_DWORD *)a2 + 4) = v20;
  *((_DWORD *)a2 + 2) = v21;
  if ( v21 <= 0 )
    return a2;
  v22 = v12 - v9;
  if ( v12 - v9 < 0 )
  {
    v22 = v9 - v12;
    v23 = -v10;
    v24 = -1;
  }
  else
  {
    v23 = -1;
    v24 = 1;
  }
  *((_DWORD *)a2 + 9) = v24;
  *((_DWORD *)a2 + 5) = v23;
  if ( v22 >= v10 )
  {
    v37 = v22;
    v36 = v22 >> 31;
    v38 = __SPAIR64__(v36, v37) / v10;
    v22 = __SPAIR64__(v36, v37) % v10;
    *((_DWORD *)a2 + 8) = v38;
    if ( v24 == -1 )
      *((_DWORD *)a2 + 8) = -v38;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
  }
  *((_DWORD *)a2 + 6) = v22;
  *((_DWORD *)a2 + 7) = v10;
  if ( v19 )
    v25 = a5->top;
  else
    v25 = (v11 + 15) & 0xFFFFFFF0;
  if ( !v19 )
    v16 = v11;
  if ( v16 != v25 )
  {
    v34 = *((_DWORD *)a2 + 5);
    v35 = v25 - v16;
    do
    {
      v9 += *((_DWORD *)a2 + 8);
      v34 += *((_DWORD *)a2 + 6);
      if ( v34 >= 0 )
      {
        v34 -= v10;
        v9 += *((_DWORD *)a2 + 9);
      }
      --v35;
    }
    while ( v35 );
    *((_DWORD *)a2 + 5) = v34;
  }
  v26 = *((_DWORD *)a2 + 5);
  v27 = (v9 + 15) >> 4;
  v28 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v27;
  if ( v28 )
    v29 = ((v9 + 15) & 0xFFFFFFF0) - v9;
  else
    v29 = ((_BYTE)v9 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v30 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 7) = 16 * v10;
  *((_DWORD *)a2 + 5) = v26 - v10 * v29;
  while ( 1 )
  {
    v31 = *(_QWORD *)a1;
    v32 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v30 <= v32 && (v30 != v32 || v27 <= *(_DWORD *)(v31 + 12)) )
      break;
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v31;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
