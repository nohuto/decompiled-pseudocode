/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x1C0164A54
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = IsRetrieveCalibrationDataSupported();
  if ( (int)result >= 0 )
  {
    v5 = *a2;
    return RetrieveCalibrationData(a1, &v5);
  }
  return result;
}
