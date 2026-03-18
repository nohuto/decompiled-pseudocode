/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C02A7310
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreGetCharacterPlacementW @ 0x1C02B43E4 (GreGetCharacterPlacementW.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(HDC a1, const void *a2, int a3, int a4, __m128i *a5, int a6)
{
  int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rsi
  const void *v12; // r10
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  char *v17; // r14
  size_t v19; // r8
  ULONG64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rcx
  size_t v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdi
  const void *v26; // rdx
  const void *v27; // rdx
  const void *v28; // rdx
  const void *v29; // rdx
  const void *v30; // rdx
  const void *v31; // rdx
  unsigned int v32; // [rsp+34h] [rbp-B4h]
  unsigned int v33; // [rsp+38h] [rbp-B0h]
  unsigned int v34; // [rsp+3Ch] [rbp-ACh]
  unsigned int v35; // [rsp+40h] [rbp-A8h]
  unsigned int v36; // [rsp+44h] [rbp-A4h]
  unsigned int v37; // [rsp+48h] [rbp-A0h]
  int CharacterPlacementW; // [rsp+4Ch] [rbp-9Ch]
  __m128i v39[4]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int16 *v40; // [rsp+A0h] [rbp-48h]
  __int64 v41; // [rsp+A8h] [rbp-40h]

  v7 = a3;
  v8 = 0;
  CharacterPlacementW = 0;
  v9 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v10 = 0LL;
  v41 = 0LL;
  v11 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( v7 < 0 )
    return 0LL;
  if ( a4 < -1 )
    return 0LL;
  v12 = a2;
  if ( !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[63] = v13[63];
    v39[0] = *a5;
    v39[1] = a5[1];
    v39[2] = a5[2];
    v39[3] = a5[3];
    v7 = a3;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v39[3], 8));
    if ( a3 > v14 )
      v7 = v14;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v15 = (unsigned int)(2 * v7);
  v16 = 4 * v7;
  if ( a5 )
  {
    v9 = 64;
    if ( v39[0].m128i_i64[1] )
    {
      v32 = 64;
      v9 = ((v15 + 3) & 0xFFFFFFFC) + 64;
      if ( (((_DWORD)v15 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
    }
    if ( v39[1].m128i_i64[0] )
    {
      v33 = v9;
      v9 += v16;
      if ( v9 < v33 )
        return 0LL;
    }
    v17 = (char *)v39[1].m128i_i64[1];
    if ( v39[1].m128i_i64[1] )
    {
      v34 = v9;
      v9 += v16;
      if ( v9 < v34 )
        return 0LL;
    }
    if ( v39[2].m128i_i64[0] )
    {
      v35 = v9;
      v9 += v16;
      if ( v9 < v35 )
        return 0LL;
    }
    if ( v39[2].m128i_i64[1] )
    {
      v36 = v9;
      v9 += (v7 + 3) & 0xFFFFFFFC;
      if ( v9 < v36 )
        return 0LL;
    }
    if ( v39[3].m128i_i64[0] )
    {
      v37 = v9;
      v9 += v15;
      if ( v9 < v37 )
        return 0LL;
    }
  }
  else
  {
    v17 = (char *)v39[1].m128i_i64[1];
  }
  if ( v9 <= 40960000 - (int)v15 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v15);
    v15 = (unsigned int)(2 * v7);
    v12 = a2;
  }
  if ( v11 )
  {
    v40 = (unsigned __int16 *)(v11 + v9);
    if ( a5 )
    {
      v10 = v11;
      v41 = v11;
      if ( v39[0].m128i_i64[1] )
        *(_QWORD *)(v11 + 8) = v11 + v32;
      else
        *(_QWORD *)(v11 + 8) = 0LL;
      if ( v39[1].m128i_i64[0] )
        *(_QWORD *)(v11 + 16) = v11 + v33;
      else
        *(_QWORD *)(v11 + 16) = 0LL;
      if ( v17 )
        *(_QWORD *)(v11 + 24) = v11 + v34;
      else
        *(_QWORD *)(v11 + 24) = 0LL;
      if ( v39[2].m128i_i64[0] )
        *(_QWORD *)(v11 + 32) = v11 + v35;
      else
        *(_QWORD *)(v11 + 32) = 0LL;
      if ( v39[2].m128i_i64[1] )
        *(_QWORD *)(v11 + 40) = v11 + v36;
      else
        *(_QWORD *)(v11 + 40) = 0LL;
      if ( v39[3].m128i_i64[0] )
        *(_QWORD *)(v11 + 48) = v11 + v37;
      else
        *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v7;
    }
    v19 = (unsigned int)v15;
    v20 = (ULONG64)v12 + v15;
    if ( v20 < (unsigned __int64)v12 || v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v11 + v9), v12, v19);
    if ( (a6 & 0x200000) != 0 && a5 && v17 )
    {
      v21 = (unsigned int)(4 * v7);
      v22 = *(void **)(v10 + 24);
      if ( &v17[v21] < v17 || (unsigned __int64)&v17[v21] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v17, (unsigned int)(4 * v7));
    }
    CharacterPlacementW = GreGetCharacterPlacementW(a1, v40, v10, a6);
    if ( CharacterPlacementW && a5 )
    {
      a5[3].m128i_i32[3] = *(_DWORD *)(v10 + 60);
      v23 = *(int *)(v10 + 56);
      a5[3].m128i_i32[2] = v23;
      v24 = (unsigned int)(2 * v23);
      v25 = (unsigned int)(4 * v23);
      if ( v39[0].m128i_i64[1] )
      {
        v26 = *(const void **)(v10 + 8);
        if ( v39[0].m128i_i64[1] + v24 > MmUserProbeAddress
          || (unsigned __int64)(v39[0].m128i_i64[1] + v24) <= v39[0].m128i_i64[1] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v39[0].m128i_i64[1], v26, (unsigned int)v24);
      }
      if ( v39[1].m128i_i64[0] )
      {
        v27 = *(const void **)(v10 + 16);
        if ( v25 + v39[1].m128i_i64[0] > MmUserProbeAddress
          || (unsigned __int64)(v25 + v39[1].m128i_i64[0]) <= v39[1].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v39[1].m128i_i64[0], v27, (unsigned int)(4 * v23));
      }
      if ( v17 )
      {
        v28 = *(const void **)(v10 + 24);
        if ( (unsigned __int64)&v17[v25] > MmUserProbeAddress || &v17[v25] <= v17 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v17, v28, (unsigned int)(4 * v23));
      }
      if ( v39[2].m128i_i64[0] )
      {
        v29 = *(const void **)(v10 + 32);
        if ( v25 + v39[2].m128i_i64[0] > MmUserProbeAddress
          || (unsigned __int64)(v25 + v39[2].m128i_i64[0]) <= v39[2].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v39[2].m128i_i64[0], v29, (unsigned int)(4 * v23));
      }
      if ( v39[2].m128i_i64[1] )
      {
        v30 = *(const void **)(v10 + 40);
        if ( v23 + v39[2].m128i_i64[1] > MmUserProbeAddress || v23 + v39[2].m128i_i64[1] <= v39[2].m128i_i64[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove((void *)v39[2].m128i_i64[1], v30, v23);
      }
      if ( v39[3].m128i_i64[0] )
      {
        v31 = *(const void **)(v10 + 48);
        if ( v39[3].m128i_i64[0] + v24 > MmUserProbeAddress
          || (unsigned __int64)(v39[3].m128i_i64[0] + v24) <= v39[3].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v39[3].m128i_i64[0], v31, (unsigned int)v24);
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
