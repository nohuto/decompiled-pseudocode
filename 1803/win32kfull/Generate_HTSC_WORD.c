/*
 * XREFs of Generate_HTSC_WORD @ 0x1C00D4C78
 * Callers:
 *     CachedHalftonePattern @ 0x1C00D10CC (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1C00D4EE0 (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C00D50F0 (ExpandHTPatX.c)
 *     RotateHTPatXY @ 0x1C0130E04 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C0131D38 (RotateHTPat45.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // r8d
  unsigned __int64 v6; // xmm0_8
  ULONG v7; // r8d
  unsigned __int16 epi16; // r15
  __int64 v9; // rbp
  int v10; // r14d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  PVOID v13; // rax
  void *v14; // rdi
  int v15; // r8d
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  __m128i v20; // [rsp+40h] [rbp-48h]
  char *v21; // [rsp+90h] [rbp+8h]

  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(qword_1C0326FC8);
    v2 = 0;
    v3 = ppwHTPat[a1->m128i_u8[1]];
    a1[1].m128i_i64[0] = v3;
    if ( v3 )
    {
LABEL_15:
      EngReleaseSemaphore(qword_1C0326FC8);
      LOBYTE(v2) = a1[1].m128i_i64[0] != 0;
      return v2;
    }
    v4 = (unsigned __int64)a1->m128i_i64[0] >> 8;
    v20 = *a1;
    v5 = (unsigned __int8)v4 + 7;
    v6 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    if ( (unsigned __int8)v4 <= 9u )
      v5 = (unsigned __int8)v4;
    v21 = (char *)&DefStdHTPat + 16 * ((unsigned __int64)(unsigned __int8)v4 >> 1);
    v7 = (v5 << 24) + 808539208;
    epi16 = _mm_extract_epi16(*a1, 4);
    v9 = *((_QWORD *)v21 + 1);
    v10 = v9;
    v11 = epi16 * (unsigned __int64)WORD1(v6);
    if ( v11 <= 0xFFFFFFFF )
    {
      v12 = 6LL * (unsigned int)v11;
      if ( v12 <= 0xFFFFFFFF && HIDWORD(v6) >= (unsigned int)v12 )
      {
        v13 = EngAllocMem(1u, HIDWORD(v6), v7);
        v14 = v13;
        if ( v13 )
        {
          if ( v20.m128i_i8[1] <= 0xFu )
          {
            RotateHTPat45(
              v9,
              (_DWORD)v13 + 2,
              v20.m128i_u16[2],
              v20.m128i_u16[5],
              *((unsigned __int16 *)v21 + 1),
              epi16);
            if ( (v20.m128i_i8[1] & 1) != 0 )
              v17 = v20.m128i_u16[2] >> 1;
            else
              v17 = 0;
            RotateHTPatXY((_DWORD)v14 + 2, (_DWORD)v14 + 4, v20.m128i_u16[2], v20.m128i_u16[5], epi16, v17, 0);
            if ( (v20.m128i_i8[1] & 1) != 0 )
            {
              v18 = v20.m128i_u16[2] >> 2;
              v19 = v20.m128i_u16[5] >> 2;
            }
            else
            {
              v19 = 0;
              v18 = 0;
            }
            RotateHTPatXY((_DWORD)v14 + 2, (_DWORD)v14, v20.m128i_u16[2], v20.m128i_u16[5], epi16, v18, v19);
            ExpandHTPatX(v14);
          }
          else
          {
            if ( v20.m128i_i8[1] == 16 )
            {
              v15 = v9;
            }
            else
            {
              v15 = v9 + 512;
              v10 = v9 + 256;
            }
            if ( !(unsigned int)GenerateWORDPat(v10, v9, v15, (_DWORD)v13, v20.m128i_u16[2], epi16, v20.m128i_u16[5]) )
            {
              EngFreeMem(v14);
              v14 = 0LL;
            }
          }
        }
        a1[1].m128i_i64[0] = (__int64)v14;
        ppwHTPat[v20.m128i_u8[1]] = v14;
        goto LABEL_15;
      }
    }
  }
  return 0LL;
}
