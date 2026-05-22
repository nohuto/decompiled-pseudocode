/*
 * XREFs of SpatialInteractionDevices::ReadThumbstick @ 0x1800DD12C
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800DC6E4 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x1800DAC20 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 */

void __fastcall SpatialInteractionDevices::ReadThumbstick(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  float *v6; // rsi

  if ( *(_BYTE *)(a2 + 139) )
  {
    v6 = (float *)(a4 + 56);
    if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                (__int64)a1,
                a3,
                a3,
                (USAGE **)(a2 + 24),
                (float *)(a4 + 56)) >= 0 )
    {
      *(_BYTE *)(a4 + 64) = 1;
      if ( !a1[232] )
      {
        if ( a1[235] )
          *v6 = 1.0 - *v6;
        if ( a1[236] )
          *(float *)(a4 + 60) = 1.0 - *(float *)(a4 + 60);
      }
    }
  }
}
