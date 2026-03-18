/*
 * XREFs of Generate_HTSC_WORD @ 0x1C0115ED8
 * Callers:
 *     CachedHalftonePattern @ 0x1C00C201C (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1C0005D38 (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C0005F54 (ExpandHTPatX.c)
 *     RotateHTPatXY @ 0x1C0008004 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C0009864 (RotateHTPat45.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __m128i v5; // xmm1
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // xmm0_8
  unsigned __int16 epi16; // di
  int v9; // r8d
  ULONG v10; // r8d
  __int64 v11; // rsi
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // rax
  char *v14; // rax
  char *v15; // r13
  __int64 v16; // r8
  unsigned int v17; // r14d
  int v18; // esi
  __int64 v19; // rdi
  unsigned __int64 v20; // [rsp+90h] [rbp+8h]

  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(qword_1C032A688);
    v2 = 0;
    v3 = ppwHTPat[a1->m128i_u8[1]];
    a1[1].m128i_i64[0] = v3;
    if ( v3 )
    {
LABEL_3:
      EngReleaseSemaphore(qword_1C032A688);
      LOBYTE(v2) = a1[1].m128i_i64[0] != 0;
      return v2;
    }
    v5 = *a1;
    v6 = (unsigned __int64)a1->m128i_i64[0] >> 8;
    v7 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(*a1, 4);
    v9 = (unsigned __int8)v6 + 7;
    if ( (unsigned __int8)v6 <= 9u )
      v9 = (unsigned __int8)v6;
    v20 = 16 * ((unsigned __int64)(unsigned __int8)v6 >> 1);
    v10 = (v9 << 24) + 808539208;
    v11 = *(__int64 *)((char *)&off_1C02D5108 + v20);
    v12 = (unsigned __int8 *)v11;
    v13 = 6 * epi16 * (unsigned __int64)WORD1(v7);
    if ( v13 <= 0xFFFFFFFF && HIDWORD(v7) >= (unsigned int)v13 )
    {
      v14 = (char *)EngAllocMem(1u, HIDWORD(v7), v10);
      v15 = v14;
      if ( v14 )
      {
        if ( v5.m128i_i8[1] <= 0xFu )
        {
          v17 = v5.m128i_u16[2];
          v18 = epi16;
          v19 = (__int64)(v14 + 2);
          RotateHTPat45(
            v12,
            (_WORD *)v14 + 1,
            v5.m128i_u16[2],
            v5.m128i_u16[5],
            *(unsigned __int16 *)((char *)&unk_1C02D5102 + v20),
            v18);
          RotateHTPatXY(v19, (_WORD *)v15 + 2, v17, v5.m128i_u16[5], v18, (v5.m128i_i8[1] & 1) != 0 ? v17 >> 1 : 0, 0);
          RotateHTPatXY(
            v19,
            v15,
            v17,
            v5.m128i_u16[5],
            v18,
            (v5.m128i_i8[1] & 1) != 0 ? v17 >> 2 : 0,
            (v5.m128i_i8[1] & 1) != 0 ? v5.m128i_u16[5] >> 2 : 0);
          ExpandHTPatX(v15, v5.m128i_u16[2], v5.m128i_u16[5], v18);
        }
        else
        {
          if ( v5.m128i_i8[1] == 16 )
          {
            v16 = v11;
          }
          else
          {
            v16 = v11 + 512;
            v12 = (unsigned __int8 *)(v11 + 256);
          }
          if ( !(unsigned int)GenerateWORDPat((__int64)v12, v11, v16, v14, v5.m128i_u16[2], epi16, v5.m128i_u16[5]) )
          {
            EngFreeMem(v15);
            v15 = 0LL;
          }
        }
      }
      a1[1].m128i_i64[0] = (__int64)v15;
      ppwHTPat[v5.m128i_u8[1]] = (__int64)v15;
      goto LABEL_3;
    }
  }
  return 0LL;
}
