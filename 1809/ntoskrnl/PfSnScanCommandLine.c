/*
 * XREFs of PfSnScanCommandLine @ 0x140668BB4
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnParsePrefetchParam @ 0x140668C44 (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x140668E00 (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x140668E4C (PfSnGetUnsafeProcessParameters.c)
 *     PfSnHashUnsafeUnicodeString @ 0x1406C1660 (PfSnHashUnsafeUnicodeString.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, int a2)
{
  int v4; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters();
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v7);
  if ( (int)result >= 0 )
  {
    if ( (int)PfSnParsePrefetchParam(v7, &v8) >= 0 )
      v4 = v8;
    if ( !a2 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString(v7, &v8);
    if ( (int)result >= 0 )
    {
      v4 += v8;
LABEL_6:
      *a1 = v4;
      return 0LL;
    }
  }
  return result;
}
