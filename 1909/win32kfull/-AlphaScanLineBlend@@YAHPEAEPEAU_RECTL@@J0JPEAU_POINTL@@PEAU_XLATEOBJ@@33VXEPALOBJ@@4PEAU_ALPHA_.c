/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00A5010
 * Callers:
 *     EngAlphaBlend @ 0x1C00A4980 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // r10d
  unsigned int v14; // r12d
  int v15; // r8d
  int v16; // esi
  char *v17; // r14
  int v18; // r9d
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r8
  char *v22; // rbx
  __int64 v23; // r8
  char *v24; // rdi
  char *v25; // rcx
  char *v27; // rdi
  char *v28; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+40h] [rbp-78h]
  char *v33; // [rsp+58h] [rbp-60h]
  char *i; // [rsp+60h] [rbp-58h]
  char *v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+80h] [rbp-38h]
  int Size; // [rsp+C8h] [rbp+10h]

  v13 = *a2;
  v14 = a2[2] - *a2;
  v15 = a2[1];
  v32 = a2[3] - v15;
  v16 = 4 * v14;
  v17 = 0LL;
  Size = 0;
  v18 = *(_DWORD *)(a12 + 4) >> 3;
  v19 = *(_DWORD *)a12 >> 3;
  v33 = 0LL;
  v35 = 0LL;
  if ( !a9 )
    return 0LL;
  v36 = *(_QWORD *)(a9 + 56);
  if ( v16 < (int)v14 )
    return 0LL;
  v20 = a3 * v15;
  if ( v19 )
  {
    v21 = v13 * v19 + v20;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v30 = v13 / 8;
    else
      v30 = v13 / 2;
    v21 = v30 + v20;
  }
  v22 = (char *)(v21 + a1);
  if ( v18 )
  {
    v23 = v18 * *a6 + (__int64)(a5 * a6[1]);
  }
  else
  {
    if ( *(_DWORD *)(a12 + 4) == 1 )
      v31 = *a6 / 8;
    else
      v31 = *a6 / 2;
    v23 = v31 + (__int64)(a5 * a6[1]);
  }
  v24 = (char *)(v23 + a4);
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v14;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v16;
    if ( Size < v16 )
      return 0LL;
  }
  if ( Size )
  {
    v35 = (char *)PALLOCMEM2((unsigned int)Size, 1886150983LL, 1);
    if ( !v35 )
      return 0LL;
  }
  v25 = v35;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v33 = v35;
    v25 = &v35[v16];
  }
  if ( *(_QWORD *)(a12 + 16) )
    v17 = v25;
  for ( i = v24; v32--; i += a5 )
  {
    v27 = i;
    v28 = v22;
    if ( v33 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 8))(v33, i, 0LL, v14, a7);
      v27 = v33;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 16))(v17, v22, 0LL, v14, a8);
      v28 = v17;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v28, v27, v14, *(unsigned int *)(a12 + 40));
    if ( v17 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v22,
        v17,
        v14,
        0LL,
        a9,
        a10,
        v36);
    v22 += a3;
  }
  if ( Size )
    Win32FreePool(v35);
  return 1LL;
}
