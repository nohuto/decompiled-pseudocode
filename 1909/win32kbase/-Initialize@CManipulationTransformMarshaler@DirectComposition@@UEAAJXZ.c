/*
 * XREFs of ?Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ @ 0x1C008CB10
 * Callers:
 *     ?InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C008CAB4 (-InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition@@QEAAJPEBV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::Initialize(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 7) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)((char *)this + 68) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 10) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 22) = 1065353216;
  *(_QWORD *)((char *)this + 92) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 25) = 0;
  return 0LL;
}
