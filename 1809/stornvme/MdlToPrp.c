/*
 * XREFs of MdlToPrp @ 0x1C0004B10
 * Callers:
 *     SetPrpFromSrb @ 0x1C0002664 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     BuildReadWriteCommand @ 0x1C000FC58 (BuildReadWriteCommand.c)
 *     GetLbaFromCdb @ 0x1C001044C (GetLbaFromCdb.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // r9d
  __int64 v11; // r10
  __m128i *v12; // r8
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 SrbScsiData; // rax
  unsigned int v19; // r12d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  char v23; // cl
  unsigned __int8 v24; // cl
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  int v28; // [rsp+98h] [rbp+38h]
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+48h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0;
  v27 = 0LL;
  v30 = 0;
  v28 = 0;
  if ( (*(_BYTE *)(v4 + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v27);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v27);
    if ( !(_DWORD)result )
    {
      v7 = 16LL;
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v7 = 60LL;
      if ( *(_DWORD *)(a1 + 116) )
      {
        v29 = 0;
        SrbScsiData = GetSrbScsiData(a2, (unsigned int)&v29, 0, 0, 0LL);
        v19 = v29;
        if ( GetLbaFromCdb(SrbScsiData, v29, SrbScsiData) )
        {
          v23 = *v20;
          if ( v23 == 40 || v23 == 42 || v23 == -120 || v23 == -118 )
          {
            v28 = *(_DWORD *)(a1 + 116);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v24 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v24 = *(_BYTE *)(a2 + 7);
            v25 = a1 + 8LL * v24;
            *(_DWORD *)(v7 + a2) -= -*(_DWORD *)(*(_QWORD *)(v25 + 1640) + 52LL) & (*(_DWORD *)(*(_QWORD *)(v25 + 1640)
                                                                                              + 52LL)
                                                                                  + *(_DWORD *)(a1 + 116)
                                                                                  - 1);
            if ( (unsigned int)v24 < *(_DWORD *)(a1 + 184) )
            {
              v26 = *(_QWORD *)(v25 + 1640);
              if ( v26 )
                v22 = *(_DWORD *)(v26 + 16);
            }
            BuildReadWriteCommand(a1, a2, v21, v19, v4 + 4096, v22);
          }
        }
      }
      v8 = v28 + *(_DWORD *)(v4 + 4216);
      v9 = (*(_DWORD *)(v7 + a2) >> 12) + (((v8 & 0xFFF) + (*(_DWORD *)(v7 + a2) & 0xFFF) + 4095) >> 12);
      if ( v8 >= 0x1000 )
      {
        v5 = v8 >> 12;
        v8 -= v8 >> 12 << 12;
      }
      if ( !v9 || v5 + v9 > v30 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v8 + (*(_QWORD *)(8LL * v5) << 12);
      if ( v9 != 1 )
      {
        if ( v9 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(8LL * (v5 + 1)) << 12;
          memset((void *)v4, 0, 0x1000uLL);
          *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
        }
        else
        {
          memset((void *)v4, 0, 0x1000uLL);
          v10 = 1;
          v11 = v9 - 1;
          v12 = (__m128i *)v4;
          if ( (unsigned int)v11 >= 8
            && (v4 + 8 > 8 * (unsigned __int64)((unsigned int)v11 + v5) || v4 + 8 * v11 < 8 * (unsigned __int64)(v5 + 1)) )
          {
            v13 = v5 + 3;
            v14 = _mm_cvtsi32_si128(0xCu);
            do
            {
              v10 += 8;
              *v12 = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v13 - 2))), v14);
              v12[1] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8 * v13)), v14);
              v15 = _mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v13 + 2)));
              v16 = (unsigned int)(v13 + 4);
              v13 = (unsigned int)(v13 + 8);
              v12[2] = _mm_sll_epi64(v15, v14);
              v12[3] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8 * v16)), v14);
              v12 += 4;
            }
            while ( v10 < v9 - (((_BYTE)v9 - 1) & 7) );
          }
          for ( ; v10 < v9; v12[-1].m128i_i64[1] = *(_QWORD *)(8 * v17) << 12 )
          {
            v17 = v10 + v5;
            ++v10;
            v12 = (__m128i *)((char *)v12 + 8);
          }
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v29);
        }
      }
      return 0LL;
    }
  }
  return result;
}
