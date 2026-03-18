/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800C16C0
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800C1938 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1800EF60C (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801AB4B8 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  CSharedSection *v4; // rcx
  __m128i *v5; // rax
  __m128i *v6; // r11
  __m128i v7; // xmm1
  int v8; // r12d
  __m128i v9; // xmm3
  __int64 v10; // xmm4_8
  __m128 v11; // xmm2
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  bool v21; // zf

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 9);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  v2 = *((unsigned int *)this + 108);
  v3 = *((unsigned int *)this + 109);
  v4 = (CSharedSection *)*((_QWORD *)this + 53);
  *((_BYTE *)this + 88) = 0;
  v5 = (__m128i *)CSharedSection::ResolveAllocation(v4, v3, v2);
  v6 = v5;
  if ( !v5 )
    goto LABEL_11;
  v7 = v5[1];
  v8 = v5[3].m128i_i32[2];
  v9 = *v5;
  v10 = v5[3].m128i_i64[0];
  v11 = (__m128)v5[2];
  v12 = HIDWORD(v7.m128i_i64[0]);
  v13 = (unsigned int)_mm_cvtsi128_si32(v7);
  v14 = HIDWORD(_mm_srli_si128(*v5, 8).m128i_u64[0]);
  v15 = HIDWORD(_mm_srli_si128(v7, 8).m128i_u64[0]);
  if ( (unsigned __int64)(v13 + 60) < 0x3C )
    goto LABEL_11;
  v16 = v13 + 60;
  v17 = v14;
  if ( v14 + v16 >= v16
    && (v18 = v14 + v16, v12 + v18 >= v18)
    && v2 >= v12 + v14 + v13 + 60
    && (v19 = (unsigned int)v14 / 0x94, v20 = v19 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)), v20 >= v19)
    && ((_DWORD)v15 == -1 || (unsigned int)v14 >= 0x94 && (unsigned int)v15 <= (int)v14 - 148) )
  {
    *(__m128i *)((char *)this + 440) = v9;
    *((_QWORD *)this + 64) = v13;
    *(__m128i *)((char *)this + 456) = v7;
    *((_QWORD *)this + 63) = (char *)v6 + 60;
    *((_QWORD *)this + 65) = (char *)v6 + v16;
    *(__m128 *)((char *)this + 472) = v11;
    *((_QWORD *)this + 66) = v14;
    *((_QWORD *)this + 67) = (char *)v6 + v18;
    *((_DWORD *)this + 143) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 4));
    *((_DWORD *)this + 140) = v10;
    *((_QWORD *)this + 61) = v10;
    *((_BYTE *)this + 576) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 8)) != 0;
    *((_DWORD *)this + 139) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    *((_DWORD *)this + 141) = HIDWORD(v10);
    *((_DWORD *)this + 142) = v8;
    *((_DWORD *)this + 124) = v8;
    *((_QWORD *)this + 68) = HIDWORD(v7.m128i_i64[0]);
    *((_DWORD *)this + 138) = v20;
  }
  else
  {
LABEL_11:
    CPrimitiveGroup::ClearPrimitiveContent(this);
    v17 = *((_QWORD *)this + 66);
  }
  v21 = *((_BYTE *)this + 577) == 0;
  *((_BYTE *)this + 578) = (unsigned int)(v17 / 0x94) < 0x15E;
  if ( !v21 )
    CPrimitiveGroup::BuildHeatMap(this);
}
