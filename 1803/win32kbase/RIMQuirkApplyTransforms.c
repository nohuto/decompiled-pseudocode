/*
 * XREFs of RIMQuirkApplyTransforms @ 0x1C0107018
 * Callers:
 *     rimTransformGeometry @ 0x1C010357C (rimTransformGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C00E8FBC (RIMConvertPointCoordinates.c)
 *     RIMQuirkSetContactBoundary @ 0x1C01070EC (RIMQuirkSetContactBoundary.c)
 *     ApiSetUseDisplaySizeFromRegistry @ 0x1C0141D24 (ApiSetUseDisplaySizeFromRegistry.c)
 */

__int64 __fastcall RIMQuirkApplyTransforms(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  __m128i v6; // xmm0
  __int64 v7; // rcx
  int v8; // eax
  __int128 v9; // xmm0
  _DWORD *v10; // rdi
  __int64 result; // rax
  _OWORD *v12; // rdx
  __m128i v13; // [rsp+30h] [rbp-28h] BYREF
  int v14[6]; // [rsp+40h] [rbp-18h] BYREF

  *a3 = 0;
  if ( (unsigned int)ApiSetUseDisplaySizeFromRegistry(0LL) || (*(_DWORD *)(a1 + 276) & 0x20) != 0 )
  {
    v10 = (_DWORD *)(a2 + 112);
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 4);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 4);
    v13 = *(__m128i *)(a1 + 124);
    v6 = v13;
    ++v13.m128i_i32[3];
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    v9 = *(_OWORD *)(a1 + 160);
    v10 = (_DWORD *)(a2 + 112);
    v13.m128i_i32[2] = v8 + 1;
    *(_OWORD *)v14 = v9;
    if ( !(unsigned int)RIMConvertPointCoordinates(v7, v13.m128i_i32, v14, (_QWORD *)(a2 + 112)) )
    {
      *v10 = 0;
      *(_DWORD *)(a2 + 116) = 0;
    }
  }
  result = *(_QWORD *)v10;
  *(_QWORD *)(a2 + 96) = *(_QWORD *)v10;
  if ( *(_DWORD *)(a2 + 20) )
  {
    result = RIMQuirkSetContactBoundary(
               v5,
               (int)a2 + 184,
               *(_QWORD *)(a2 + 12),
               *(_DWORD *)(a2 + 24),
               *(_DWORD *)(a2 + 28));
    *(_OWORD *)(a2 + 168) = *v12;
  }
  return result;
}
