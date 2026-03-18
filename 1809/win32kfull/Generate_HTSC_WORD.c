/*
 * XREFs of Generate_HTSC_WORD @ 0x1C0111A14
 * Callers:
 *     CachedHalftonePattern @ 0x1C0013FAC (CachedHalftonePattern.c)
 * Callees:
 *     RotateHTPatXY @ 0x1C0005874 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C0006308 (RotateHTPat45.c)
 *     GenerateWORDPat @ 0x1C0111C9C (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C0111EC0 (ExpandHTPatX.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __m128i v4; // xmm1
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // xmm0_8
  unsigned __int16 epi16; // di
  int v8; // r8d
  ULONG v9; // r8d
  unsigned __int8 *v10; // rsi
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  _WORD *v14; // r13
  int v15; // r8d
  unsigned int v17; // r14d
  int v18; // esi
  __int64 v19; // rdi
  unsigned __int64 v20; // [rsp+90h] [rbp+8h]

  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(qword_1C0317688);
    v2 = 0;
    v3 = ppwHTPat[a1->m128i_u8[1]];
    a1[1].m128i_i64[0] = v3;
    if ( v3 )
    {
LABEL_14:
      EngReleaseSemaphore(qword_1C0317688);
      LOBYTE(v2) = a1[1].m128i_i64[0] != 0;
      return v2;
    }
    v4 = *a1;
    v5 = (unsigned __int64)a1->m128i_i64[0] >> 8;
    v6 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(*a1, 4);
    v8 = (unsigned __int8)v5 + 7;
    if ( (unsigned __int8)v5 <= 9u )
      v8 = (unsigned __int8)v5;
    v20 = 16 * ((unsigned __int64)(unsigned __int8)v5 >> 1);
    v9 = (v8 << 24) + 808539208;
    v10 = *(unsigned __int8 **)((char *)&off_1C02C3258 + v20);
    v11 = v10;
    v12 = 6 * epi16 * (unsigned __int64)WORD1(v6);
    if ( v12 <= 0xFFFFFFFF && HIDWORD(v6) >= (unsigned int)v12 )
    {
      v13 = EngAllocMem(1u, HIDWORD(v6), v9);
      v14 = v13;
      if ( v13 )
      {
        if ( v4.m128i_i8[1] <= 0xFu )
        {
          v17 = v4.m128i_u16[2];
          v18 = epi16;
          v19 = (__int64)(v13 + 1);
          RotateHTPat45(
            v11,
            v13 + 1,
            v4.m128i_u16[2],
            v4.m128i_u16[5],
            *(unsigned __int16 *)((char *)&unk_1C02C3252 + v20),
            v18);
          RotateHTPatXY(v19, v14 + 2, v17, v4.m128i_u16[5], v18, (v4.m128i_i8[1] & 1) != 0 ? v17 >> 1 : 0, 0);
          RotateHTPatXY(
            v19,
            v14,
            v17,
            v4.m128i_u16[5],
            v18,
            (v4.m128i_i8[1] & 1) != 0 ? v17 >> 2 : 0,
            (v4.m128i_i8[1] & 1) != 0 ? v4.m128i_u16[5] >> 2 : 0);
          ExpandHTPatX(v14);
        }
        else
        {
          if ( v4.m128i_i8[1] == 16 )
          {
            v15 = (int)v10;
          }
          else
          {
            v15 = (_DWORD)v10 + 512;
            LODWORD(v11) = (_DWORD)v10 + 256;
          }
          if ( !(unsigned int)GenerateWORDPat(
                                (_DWORD)v11,
                                (_DWORD)v10,
                                v15,
                                (_DWORD)v13,
                                v4.m128i_u16[2],
                                epi16,
                                v4.m128i_u16[5]) )
          {
            EngFreeMem(v14);
            v14 = 0LL;
          }
        }
      }
      a1[1].m128i_i64[0] = (__int64)v14;
      ppwHTPat[v4.m128i_u8[1]] = (__int64)v14;
      goto LABEL_14;
    }
  }
  return 0LL;
}
