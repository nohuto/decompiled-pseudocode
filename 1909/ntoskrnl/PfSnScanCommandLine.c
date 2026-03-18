/*
 * XREFs of PfSnScanCommandLine @ 0x14066C4C8
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14066BCA4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnParsePrefetchParam @ 0x14066C560 (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x14066C728 (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x14066C774 (PfSnGetUnsafeProcessParameters.c)
 *     PfSnHashUnsafeUnicodeString @ 0x1406E26F8 (PfSnHashUnsafeUnicodeString.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, __int64 a2)
{
  int v2; // edi
  int v4; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v7[0] = 0LL;
  v7[1] = 0LL;
  v4 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters(a1, a2);
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v7);
  if ( (int)result >= 0 )
  {
    if ( (int)PfSnParsePrefetchParam(v7, &v8) >= 0 )
      v4 = v8;
    if ( !v2 )
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
