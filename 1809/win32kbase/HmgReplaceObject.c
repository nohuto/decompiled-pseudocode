/*
 * XREFs of HmgReplaceObject @ 0x1C0025270
 * Callers:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0023D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0020ED4 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00229B0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall HmgReplaceObject(struct OBJECT *a1, __m128i *a2)
{
  unsigned int v2; // ebx
  __int16 v5; // dx
  __m128i v6; // xmm1
  __int16 v7; // r8
  GdiHandleManager *v8; // rcx
  __int64 v9; // rax
  char v11[8]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v2 = 0;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v11, a1, 1, 0, 0);
  if ( v12 )
  {
    v5 = *((_WORD *)a1 + 7);
    v6 = *a2;
    v7 = a2->m128i_i16[7];
    v13 = a2[1].m128i_i64[0];
    v8 = (GdiHandleManager *)(v7 & 0x8000 | v5 & 0x4000u);
    a2->m128i_i16[7] = (__int16)v8;
    v9 = *(_QWORD *)a1;
    *((_WORD *)a1 + 7) = v5 & 0x8000 | v7 & 0x4000;
    a2->m128i_i64[0] = v9;
    a2->m128i_i16[6] = *((_WORD *)a1 + 6);
    a2->m128i_i32[2] = *((_DWORD *)a1 + 2);
    a2[1].m128i_i64[0] = *((_QWORD *)a1 + 2);
    GdiHandleManager::SetEntryObject(
      v8,
      (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000,
      (struct OBJECT *)a2);
    *(_QWORD *)a1 = v6.m128i_i64[0];
    *((_DWORD *)a1 + 2) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    *((_WORD *)a1 + 6) = _mm_extract_epi16(v6, 6);
    *((_QWORD *)a1 + 2) = v13;
    HANDLELOCK::vUnlock((HANDLELOCK *)v11);
    v2 = 1;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v11);
  return v2;
}
