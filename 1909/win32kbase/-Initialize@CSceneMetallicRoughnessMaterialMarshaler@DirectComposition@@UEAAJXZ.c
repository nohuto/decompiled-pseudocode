/*
 * XREFs of ?Initialize@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01B9940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::Initialize(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 7) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 20) = 1065353216;
  *((_DWORD *)this + 24) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  result = 0LL;
  *((_DWORD *)this + 10) = 1056964608;
  *((_BYTE *)this + 68) = 0;
  *((_OWORD *)this + 7) = _xmm;
  return result;
}
