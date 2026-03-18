/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C0291C20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(HDC a1, const void *a2, int a3, int a4, ULONG64 a5, int a6)
{
  unsigned int v6; // r12d
  const void *v7; // r10
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rsi
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // r8
  ULONG64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  size_t v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdi
  const void *v35; // rdx
  const void *v36; // rdx
  const void *v37; // rdx
  const void *v38; // rdx
  const void *v39; // rdx
  const void *v40; // rdx
  int CharacterPlacementW; // [rsp+34h] [rbp-B4h]
  unsigned int v42; // [rsp+38h] [rbp-B0h]
  unsigned int v43; // [rsp+3Ch] [rbp-ACh]
  unsigned int v44; // [rsp+40h] [rbp-A8h]
  unsigned int v45; // [rsp+44h] [rbp-A4h]
  unsigned int v46; // [rsp+48h] [rbp-A0h]
  unsigned int v47; // [rsp+4Ch] [rbp-9Ch]
  void *v48[2]; // [rsp+60h] [rbp-88h]
  void *Src[2]; // [rsp+70h] [rbp-78h]
  void *v50[2]; // [rsp+80h] [rbp-68h]
  void *v51[2]; // [rsp+90h] [rbp-58h]

  v6 = a3;
  v7 = a2;
  v8 = 0;
  CharacterPlacementW = 0;
  v9 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 < 0 || a4 < -1 || !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    *(_OWORD *)v48 = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v50 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v51 = *(_OWORD *)(a5 + 48);
    v6 = a3;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v51, 8));
    if ( a3 > v13 )
      v6 = v13;
  }
  if ( v6 > 0x9C4000 )
    return 0LL;
  v14 = 2 * v6;
  v15 = 4 * v6;
  if ( a5 )
  {
    v9 = 64;
    if ( v48[1] )
    {
      v42 = 64;
      v9 = ((v14 + 3) & 0xFFFFFFFC) + 64;
      if ( v9 < 0x40 )
        return 0LL;
    }
    if ( Src[0] )
    {
      v43 = v9;
      v9 += v15;
      if ( v9 < v43 )
        return 0LL;
    }
    v16 = (char *)Src[1];
    if ( Src[1] )
    {
      v17 = v9;
      v44 = v9;
      v9 += v15;
      if ( v9 < v17 )
        return 0LL;
    }
    if ( v50[0] )
    {
      v18 = v9;
      v45 = v9;
      v9 += v15;
      if ( v9 < v18 )
        return 0LL;
    }
    if ( v50[1] )
    {
      v19 = v9;
      v46 = v9;
      v9 += (v6 + 3) & 0xFFFFFFFC;
      if ( v9 < v19 )
        return 0LL;
    }
    if ( v51[0] )
    {
      v20 = v9;
      v47 = v9;
      v9 += v14;
      if ( v9 < v20 )
        return 0LL;
    }
  }
  else
  {
    v16 = (char *)Src[1];
  }
  if ( v9 <= 40960000 - (int)v14 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v14);
    v14 = 2 * v6;
    v7 = a2;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      v10 = v11;
      if ( v48[1] )
        v22 = v11 + v42;
      else
        v22 = 0LL;
      *(_QWORD *)(v11 + 8) = v22;
      if ( Src[0] )
        v23 = v11 + v43;
      else
        v23 = 0LL;
      *(_QWORD *)(v11 + 16) = v23;
      if ( v16 )
        v24 = v11 + v44;
      else
        v24 = 0LL;
      *(_QWORD *)(v11 + 24) = v24;
      if ( v50[0] )
        v25 = v11 + v45;
      else
        v25 = 0LL;
      *(_QWORD *)(v11 + 32) = v25;
      if ( v50[1] )
        v26 = v11 + v46;
      else
        v26 = 0LL;
      *(_QWORD *)(v11 + 40) = v26;
      if ( v51[0] )
        v27 = v11 + v47;
      else
        v27 = 0LL;
      *(_QWORD *)(v11 + 48) = v27;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v6;
    }
    v28 = (unsigned int)v14;
    v29 = (ULONG64)v7 + v14;
    if ( v29 < (unsigned __int64)v7 || v29 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v11 + v9), v7, v28);
    if ( (a6 & 0x200000) != 0 && a5 && v16 )
    {
      v30 = 4 * v6;
      v31 = *(void **)(v10 + 24);
      if ( &v16[v30] < v16 || (unsigned __int64)&v16[v30] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v31, v16, 4 * v6);
    }
    CharacterPlacementW = GreGetCharacterPlacementW(a1, (unsigned __int16 *)(v11 + v9), v10, a6);
    if ( CharacterPlacementW && a5 )
    {
      *(_DWORD *)(a5 + 60) = *(_DWORD *)(v10 + 60);
      v32 = *(int *)(v10 + 56);
      *(_DWORD *)(a5 + 56) = v32;
      v33 = (unsigned int)(2 * v32);
      v34 = (unsigned int)(4 * v32);
      if ( v48[1] )
      {
        v35 = *(const void **)(v10 + 8);
        if ( (char *)v48[1] + v33 > (void *)MmUserProbeAddress || (char *)v48[1] + v33 <= v48[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v48[1], v35, (unsigned int)v33);
      }
      if ( Src[0] )
      {
        v36 = *(const void **)(v10 + 16);
        if ( (char *)Src[0] + v34 > (void *)MmUserProbeAddress || (char *)Src[0] + v34 <= Src[0] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Src[0], v36, (unsigned int)(4 * v32));
      }
      if ( v16 )
      {
        v37 = *(const void **)(v10 + 24);
        if ( (unsigned __int64)&v16[v34] > MmUserProbeAddress || &v16[v34] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v37, (unsigned int)(4 * v32));
      }
      if ( v50[0] )
      {
        v38 = *(const void **)(v10 + 32);
        if ( (char *)v50[0] + v34 > (void *)MmUserProbeAddress || (char *)v50[0] + v34 <= v50[0] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v50[0], v38, (unsigned int)(4 * v32));
      }
      if ( v50[1] )
      {
        v39 = *(const void **)(v10 + 40);
        if ( (char *)v50[1] + v32 > (void *)MmUserProbeAddress || (char *)v50[1] + v32 <= v50[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v50[1], v39, v32);
      }
      if ( v51[0] )
      {
        v40 = *(const void **)(v10 + 48);
        if ( (char *)v51[0] + v33 > (void *)MmUserProbeAddress || (char *)v51[0] + v33 <= v51[0] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v51[0], v40, (unsigned int)v33);
      }
      v8 = 1;
    }
    else
    {
      v8 = 1;
    }
    FreeTmpBuffer(v11);
  }
  return CharacterPlacementW & (unsigned int)-(v8 != 0);
}
