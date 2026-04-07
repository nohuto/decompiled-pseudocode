/*
 * XREFs of ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x18000EC00
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm1_4

  result = 1LL;
  if ( *(_DWORD *)a2 != 1 )
    return 0LL;
  v3 = *(float *)(a2 + 4) - *(float *)(a2 + 8);
  v4 = *(float *)(a2 + 12) - *(float *)(a2 + 16);
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
  if ( v5 < 0.00000011920929 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
    if ( v6 < 0.00000011920929 )
      return 0LL;
  }
  if ( v3 >= -0.00000011920929 || v4 >= -0.00000011920929 )
  {
    if ( v3 > 0.00000011920929 )
    {
      if ( v4 > 0.00000011920929 )
        return 2LL;
      if ( v4 < -0.00000011920929 )
        return 3LL;
    }
    return 0LL;
  }
  return result;
}
