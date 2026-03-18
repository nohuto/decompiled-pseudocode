/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00502F0
 * Callers:
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v15; // ebx
  unsigned int v16; // r12d
  int v17; // r9d
  int v18; // r13d
  __int64 v19; // r14
  unsigned int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+40h] [rbp-78h]
  unsigned int v37; // [rsp+48h] [rbp-70h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  __int64 i; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  __int64 v41; // [rsp+80h] [rbp-38h]
  int Size; // [rsp+C8h] [rbp+10h]

  v15 = *a2;
  v16 = a2[2] - *a2;
  v17 = a2[1];
  v36 = a2[3] - v17;
  v18 = 4 * v16;
  v19 = 0LL;
  Size = 0;
  v37 = *(_DWORD *)(a12 + 4);
  v20 = v37 >> 3;
  v21 = *(_DWORD *)a12 >> 3;
  v38 = 0LL;
  v40 = 0LL;
  if ( !a9 )
    return 0LL;
  v41 = *(_QWORD *)(a9 + 56);
  if ( v18 < (int)v16 )
    return 0LL;
  v22 = a3 * v17;
  if ( v21 )
  {
    v23 = v22 + (__int64)(v15 * v21);
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v34 = v15 / 8;
    else
      v34 = v15 / 2;
    v23 = v22 + (__int64)v34;
  }
  v24 = v23 + a1;
  v25 = a6[1];
  v26 = *a6;
  if ( v20 )
  {
    v27 = a5 * v25 + (__int64)(int)(v20 * v26);
  }
  else
  {
    if ( v37 == 1 )
      v35 = v26 / 8;
    else
      v35 = v26 / 2;
    v27 = v25 * a5 + (__int64)v35;
  }
  v28 = v27 + a4;
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v16;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v18;
    if ( Size < v18 )
      return 0LL;
  }
  if ( Size )
  {
    v40 = PALLOCMEM2((unsigned int)Size);
    if ( !v40 )
      return 0LL;
  }
  v29 = v40;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v38 = v40;
    v29 = v18 + v40;
  }
  if ( *(_QWORD *)(a12 + 16) )
    v19 = v29;
  for ( i = v28; v36--; i += a5 )
  {
    v31 = i;
    v32 = v24;
    if ( v38 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(a12 + 8))(v38, i, 0LL, v16, a7);
      v31 = v38;
    }
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(a12 + 16))(v19, v24, 0LL, v16, a8);
      v32 = v19;
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a12 + 32))(v32, v31, v16, *(unsigned int *)(a12 + 40));
    if ( v19 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v24,
        v19,
        v16,
        0LL,
        a9,
        a10,
        v41);
    v24 += a3;
  }
  if ( Size )
    Win32FreePool(v40);
  return 1LL;
}
