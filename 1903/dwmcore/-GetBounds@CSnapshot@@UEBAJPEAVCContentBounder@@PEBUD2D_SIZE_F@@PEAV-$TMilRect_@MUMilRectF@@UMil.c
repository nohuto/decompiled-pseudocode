/*
 * XREFs of ?GetBounds@CSnapshot@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802182C0
 * Callers:
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1802180F0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapshot::GetBounds(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  float v4; // xmm1_4
  int v5; // eax

  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v4 = (float)*(int *)(a1 + 56);
  *(float *)(a4 + 8) = v4;
  v5 = *(_DWORD *)(a1 + 60);
  *(float *)(a4 + 12) = (float)v5;
  if ( a3 && *a3 != 0.0 && a3[1] != 0.0 )
  {
    *(float *)(a4 + 8) = fminf(v4, *a3);
    *(float *)(a4 + 12) = fminf((float)v5, a3[1]);
  }
  return 0LL;
}
