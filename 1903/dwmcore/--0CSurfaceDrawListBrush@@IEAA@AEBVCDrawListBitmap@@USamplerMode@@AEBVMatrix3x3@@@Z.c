/*
 * XREFs of ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z @ 0x18004EC94
 * Callers:
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180051E20 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CSurfaceDrawListBrush(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = _xmm;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)a1 = &CSurfaceDrawListBrush::`vftable';
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v8 = *a2;
  *(_QWORD *)(a1 + 56) = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = a2[1];
  *(_QWORD *)(a1 + 64) = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_BYTE *)(a1 + 72) = *((_BYTE *)a2 + 16);
  *(_WORD *)(a1 + 80) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 82) = *(_BYTE *)(a3 + 2);
  *(_DWORD *)(a1 + 84) = *a4;
  *(_DWORD *)(a1 + 88) = a4[1];
  *(_DWORD *)(a1 + 92) = a4[2];
  *(_DWORD *)(a1 + 96) = a4[3];
  *(_DWORD *)(a1 + 100) = a4[4];
  result = a1;
  *(_DWORD *)(a1 + 104) = a4[5];
  *(_DWORD *)(a1 + 108) = a4[6];
  *(_DWORD *)(a1 + 112) = a4[7];
  *(_DWORD *)(a1 + 116) = a4[8];
  *(_WORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 120) = _xmm;
  return result;
}
