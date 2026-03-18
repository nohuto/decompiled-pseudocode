/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00A1C20
 * Callers:
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
        size_t Sizea,
        __int64 a12)
{
  int v15; // r11d
  int v16; // r9d
  int v17; // r14d
  unsigned int *v18; // r13
  int v19; // r8d
  int v20; // edx
  int v21; // r9d
  __int64 v22; // rcx
  unsigned int *v23; // rsi
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  int *v27; // rbx
  __int64 v28; // rcx
  int *v30; // rbx
  unsigned int *v31; // rdi
  __int64 (__fastcall *v32)(); // rax
  unsigned int v33; // r9d
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // r10d
  int v39; // eax
  __int64 v40; // r8
  int v41; // eax
  int v42; // [rsp+40h] [rbp-98h]
  int *v43; // [rsp+68h] [rbp-70h]
  int *i; // [rsp+70h] [rbp-68h]
  __int64 v45; // [rsp+78h] [rbp-60h]
  __int64 v46; // [rsp+A0h] [rbp-38h]
  unsigned int v47; // [rsp+E8h] [rbp+10h]
  int Size; // [rsp+130h] [rbp+58h]

  v15 = *a2;
  v47 = a2[2] - *a2;
  v16 = a2[1];
  v42 = a2[3] - v16;
  v17 = 4 * v47;
  v18 = 0LL;
  Size = 0;
  v19 = *(_DWORD *)(a12 + 4) >> 3;
  v20 = *(_DWORD *)a12 >> 3;
  v43 = 0LL;
  v45 = 0LL;
  if ( !a9 )
    return 0LL;
  v46 = *(_QWORD *)(a9 + 56);
  if ( v17 < (int)v47 )
    return 0LL;
  v21 = a3 * v16;
  if ( v20 )
  {
    v22 = v21 + (__int64)(v15 * v20);
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v39 = v15 / 8;
    else
      v39 = v15 / 2;
    v22 = v21 + (__int64)v39;
  }
  v23 = (unsigned int *)(v22 + a1);
  v24 = *a6;
  v25 = a5 * a6[1];
  if ( v19 )
  {
    v26 = v19 * v24 + (__int64)v25;
  }
  else
  {
    v40 = v25;
    if ( *(_DWORD *)(a12 + 4) == 1 )
      v41 = v24 / 8;
    else
      v41 = v24 / 2;
    v26 = v40 + v41;
  }
  v27 = (int *)(v26 + a4);
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v47;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v17;
    if ( Size < v17 )
      return 0LL;
  }
  if ( Size )
  {
    v45 = PALLOCMEM2((unsigned int)Size);
    if ( !v45 )
      return 0LL;
  }
  v28 = v45;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v43 = (int *)v45;
    v28 = v17 + v45;
  }
  if ( *(_QWORD *)(a12 + 16) )
    v18 = (unsigned int *)v28;
  for ( i = v27; v42--; i = (int *)((char *)i + a5) )
  {
    v30 = i;
    v31 = v23;
    if ( v43 )
    {
      (*(void (__fastcall **)(int *, int *, _QWORD, _QWORD, __int64))(a12 + 8))(v43, i, 0LL, v47, a7);
      v30 = v43;
    }
    if ( v18 )
    {
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64))(a12 + 16))(
        v18,
        v23,
        0LL,
        v47,
        a8);
      v31 = v18;
    }
    v32 = *(__int64 (__fastcall **)())(a12 + 32);
    if ( v32 == vAlphaPerPixelOnly )
    {
      v33 = v47;
      while ( v33-- )
      {
        v35 = *v30;
        v36 = HIBYTE(*v30);
        if ( HIBYTE(*v30) )
        {
          if ( (_BYTE)v36 != 0xFF )
          {
            v37 = *v31;
            v35 += (((255 - v36) * ((v37 >> 8) & 0xFF00FF)
                   + 8388736
                   + ((((255 - v36) * ((v37 >> 8) & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00)
                 + ((((255 - v36) * (v37 & 0xFF00FF)
                    + 8388736
                    + ((((255 - v36) * (v37 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
          }
          *v31 = v35;
        }
        ++v30;
        ++v31;
      }
    }
    else
    {
      ((void (__fastcall *)(unsigned int *, int *, _QWORD))v32)(v31, v30, v47);
    }
    if ( v18 )
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v23,
        v18,
        v47,
        0LL,
        a9,
        a10,
        v46);
    v23 = (unsigned int *)((char *)v23 + a3);
  }
  if ( Size )
    Win32FreePool(v45);
  return 1LL;
}
