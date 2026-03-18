/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C006D440
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C006D240 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x1C00A22F0 (-lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ.c)
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  BEZIER32 *v2; // r10
  HFDBASIS32 *v3; // rdi
  HFDBASIS32 *v4; // rbx
  int v5; // r14d
  __int64 result; // rax
  int v7; // r8d
  int v8; // r13d
  int v9; // ebp
  int v10; // ecx
  int v11; // r9d
  int v12; // r11d
  int v13; // r12d
  signed int v14; // eax
  int v15; // edx
  int i; // r11d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx

  v2 = this;
  v3 = (BEZIER32 *)((char *)this + 4);
  v4 = (BEZIER32 *)((char *)this + 20);
  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v5 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  v7 = *((_DWORD *)this + 4);
  v8 = *((_DWORD *)this + 3);
  v9 = -v7;
  if ( v7 >= 0 )
    v9 = *((_DWORD *)this + 4);
  v10 = abs32(v8);
  if ( v10 > v9 )
  {
    v11 = abs32(v8);
  }
  else
  {
    v11 = v7;
    if ( v7 < 0 )
      v11 = -v7;
  }
  v12 = *((_DWORD *)v2 + 8);
  v13 = -v12;
  if ( v12 >= 0 )
    v13 = *((_DWORD *)v2 + 8);
  v14 = abs32(*((_DWORD *)v2 + 7));
  if ( v14 > v13 )
  {
    v15 = v14;
  }
  else
  {
    v15 = *((_DWORD *)v2 + 8);
    if ( v12 < 0 )
      v15 = -*((_DWORD *)v2 + 8);
  }
  if ( v11 > v15 )
  {
    if ( v10 <= v9 )
    {
      v10 = v7;
      if ( v7 < 0 )
        v10 = -v7;
    }
  }
  else if ( v14 > v13 )
  {
    v10 = v14;
  }
  else
  {
    v10 = *((_DWORD *)v2 + 8);
    if ( v12 < 0 )
      v10 = -*((_DWORD *)v2 + 8);
  }
  if ( v10 > 523776 )
  {
    v26 = (v7 + v8) >> 3;
    *((_DWORD *)v2 + 3) = v26;
    v27 = *((_DWORD *)v2 + 2) - v26;
    *((_DWORD *)v2 + 4) = v7 >> 2;
    *((_DWORD *)v2 + 2) = v27 >> 1;
    v28 = (v12 + *((_DWORD *)v2 + 7)) >> 3;
    *((_DWORD *)v2 + 6) = (*((_DWORD *)v2 + 6) - v28) >> 1;
    *((_DWORD *)v2 + 7) = v28;
    *((_DWORD *)v2 + 8) = v12 >> 2;
    *(_DWORD *)v2 *= 2;
    v5 = *(_DWORD *)v2;
  }
  for ( i = v5; (i & 1) == 0; *(_DWORD *)v2 = i )
  {
    if ( (int)HFDBASIS32::lParentErrorDividedBy4(v3) > 130944 )
      break;
    if ( (int)HFDBASIS32::lParentErrorDividedBy4(v4) > 130944 )
      break;
    *((_DWORD *)v3 + 3) *= 4;
    v23 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 1) = v23 + 2 * *((_DWORD *)v3 + 1);
    *((_DWORD *)v3 + 2) = 8 * v23 - *((_DWORD *)v3 + 3);
    v24 = *((_DWORD *)v4 + 2);
    v25 = *((_DWORD *)v4 + 1);
    *((_DWORD *)v4 + 3) *= 4;
    *((_DWORD *)v4 + 1) = v24 + 2 * v25;
    *((_DWORD *)v4 + 2) = 8 * v24 - *((_DWORD *)v4 + 3);
    i = *(int *)v2 >> 1;
  }
  *(_DWORD *)v2 = i - 1;
  v17 = *((_DWORD *)v3 + 2);
  v18 = *((_DWORD *)v3 + 1);
  *(_DWORD *)v3 += v18;
  *((_DWORD *)v3 + 1) = v17 + v18;
  v19 = v17 - *((_DWORD *)v3 + 3);
  *((_DWORD *)v3 + 3) = v17;
  *((_DWORD *)v3 + 2) = v17 + v19;
  result = 1LL;
  v20 = *((_DWORD *)v4 + 2);
  v21 = *((_DWORD *)v4 + 1);
  *(_DWORD *)v4 += v21;
  *((_DWORD *)v4 + 1) = v20 + v21;
  v22 = v20 - *((_DWORD *)v4 + 3);
  *((_DWORD *)v4 + 3) = v20;
  *((_DWORD *)v4 + 2) = v20 + v22;
  return result;
}
