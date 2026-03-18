/*
 * XREFs of ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01D77DC
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01D8A58 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Prediction::DeltaOvershootCompensation(__int64 this, __int64 a2)
{
  __int64 v2; // r8
  bool v3; // sf
  __int64 v4; // rcx

  v2 = 0LL;
  v3 = this < 0;
  if ( this > 0 )
  {
    if ( a2 < 0 )
    {
      v2 = -this;
      if ( a2 / 2 >= -this )
        return a2 / 2;
      return v2;
    }
    v3 = this < 0;
  }
  if ( v3 && a2 > 0 )
  {
    v4 = -this;
    v2 = a2 / 2;
    if ( a2 / 2 > v4 )
      return v4;
  }
  return v2;
}
