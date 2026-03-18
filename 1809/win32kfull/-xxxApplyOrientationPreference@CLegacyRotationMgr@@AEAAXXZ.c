/*
 * XREFs of ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00DAC74
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00DAB30 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01267B0 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00DACA0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0126AF8 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01BB054 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01C0D58 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01C1208 (-RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01C15C4 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxApplyOrientationPreference(CLegacyRotationMgr *this)
{
  unsigned int ActivePpiPreference; // edi
  CLegacyRotationMgr *v3; // rcx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)CLegacyRotationMgr::QueryAutoRotationState() <= 1 )
  {
    ActivePpiPreference = CRotationMgr::GetActivePpiPreference(0LL);
    if ( (int)GetCurrentOrientation(&v4) >= 0 )
    {
      if ( (unsigned int)CLegacyRotationMgr::RotationRequired(this, ActivePpiPreference, &v4) )
      {
        TraceLoggingScreenOrientationChangeEvent(v4, 1LL, 1LL, 1000LL);
        CLegacyRotationMgr::xxxRotateScreen(v3, v4, 0, 0LL);
      }
    }
  }
}
