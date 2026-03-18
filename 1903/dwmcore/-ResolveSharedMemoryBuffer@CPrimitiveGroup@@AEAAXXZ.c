/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180083D64
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180083C68 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x180083FD8 (-ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801C5AB0 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  CSharedSection *v4; // rcx
  __m128i *v5; // rax
  CPrimitiveGroup *v6; // rcx
  __m128i *v7; // rdi
  __int64 v8; // xmm9_8
  char *v9; // r15
  __int32 v10; // ebp
  __m128i v11; // xmm6
  __m128i v12; // xmm8
  __m128 v13; // xmm7
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r10
  unsigned int v16; // r9d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r11
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r12
  unsigned int v22; // ecx

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 9);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  v2 = *((unsigned int *)this + 108);
  v3 = *((unsigned int *)this + 109);
  v4 = (CSharedSection *)*((_QWORD *)this + 53);
  *((_BYTE *)this + 88) = 0;
  v5 = (__m128i *)CSharedSection::ResolveAllocation(v4, v3, v2);
  v7 = v5;
  if ( !v5 )
    goto LABEL_14;
  v8 = v5[3].m128i_i64[0];
  v9 = &v5[3].m128i_i8[12];
  v10 = v5[3].m128i_i32[2];
  v11 = v5[1];
  v12 = *v5;
  v13 = (__m128)v5[2];
  v14 = (unsigned int)_mm_cvtsi128_si32(v11);
  if ( (int)CPrimitiveGroup::ValidateBatches(v6, (char *)&v5[3].m128i_u64[1] + 4, v14) < 0 )
    goto LABEL_14;
  v15 = v14 + 60;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
  v17 = v16;
  v18 = v16 + v15;
  if ( v18 >= v15
    && (v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)), v19 + v18 >= v18)
    && *((unsigned int *)this + 108) >= v19 + v18
    && (v20 = v16 / 0x94, v21 = v20 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)), v21 >= v20)
    && ((v22 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)), v22 == -1) || v16 >= 0x94 && v22 <= v16 - 148) )
  {
    *(__m128i *)((char *)this + 440) = v12;
    *((_QWORD *)this + 63) = v9;
    *((_QWORD *)this + 65) = (char *)v7 + v15;
    *(__m128i *)((char *)this + 456) = v11;
    *((_QWORD *)this + 64) = v14;
    *(__m128 *)((char *)this + 472) = v13;
    *((_QWORD *)this + 67) = (char *)v7 + v18;
    *((_DWORD *)this + 143) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
    *((_DWORD *)this + 140) = v8;
    *((_QWORD *)this + 61) = v8;
    *((_BYTE *)this + 576) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
    *((_DWORD *)this + 139) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    *((_DWORD *)this + 141) = HIDWORD(v8);
    *((_DWORD *)this + 142) = v10;
    *((_DWORD *)this + 124) = v10;
    *((_QWORD *)this + 66) = v16;
    *((_QWORD *)this + 68) = v19;
    *((_DWORD *)this + 138) = v21;
  }
  else
  {
LABEL_14:
    *((_DWORD *)this + 143) = -1;
    *((_QWORD *)this + 66) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_BYTE *)this + 576) = 0;
    *(_QWORD *)((char *)this + 564) = 0LL;
    *((_DWORD *)this + 140) = 0;
    v17 = *((_QWORD *)this + 66);
  }
  *((_BYTE *)this + 578) = (unsigned int)(v17 / 0x94) < 0x15E;
  if ( *((_BYTE *)this + 577) )
    CPrimitiveGroup::BuildHeatMap(this);
}
