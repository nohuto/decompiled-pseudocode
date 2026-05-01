/*
 * XREFs of ?GetDefaultKeyboardHeight@PositionAndSizeOptionsHelper@KeyboardHosting@@CAINMW4DEVICE_SCALE_FACTOR@@I@Z @ 0x18006E9AC
 * Callers:
 *     ?GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800945A0 (-GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHos.c)
 * Callees:
 *     ceilf_0 @ 0x18009B2A7 (ceilf_0.c)
 */

__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardHeight(
        double a1,
        float a2,
        enum DEVICE_SCALE_FACTOR a3,
        int a4)
{
  int v4; // eax
  float v5; // xmm3_4
  float v6; // xmm0_4
  double v7; // xmm1_8
  int v8; // ecx
  float v9; // xmm1_4
  float v10; // xmm3_4

  if ( a1 == 0.0 || a1 < 8.0 )
  {
    v10 = a2 * 0.5;
  }
  else
  {
    if ( a1 >= 23.5 )
    {
      v7 = (double)a4;
      if ( a1 >= 55.0 )
        v8 = (int)(v7 * 6.299212598425197);
      else
        v8 = (int)((a1 * 260.0 + 1700.0) / 2540.0 * v7);
      v9 = (float)v8;
      if ( a3 )
        v9 = (float)(v9 * 100.0) / (float)a3;
      v6 = v9;
    }
    else
    {
      v4 = 1600;
      if ( a1 >= 19.5 )
        v4 = 1900;
      v5 = (double)v4 / 2540.0 * 4.0 * (double)a4
         + (double)a4 * 0.07874015748031496
         + (double)a4 * ((double)v4 / 2540.0);
      if ( a3 )
        v5 = (float)(v5 * 100.0) / (float)a3;
      v6 = v5;
    }
    v10 = ceilf_0(v6);
  }
  return (unsigned int)(int)v10;
}
