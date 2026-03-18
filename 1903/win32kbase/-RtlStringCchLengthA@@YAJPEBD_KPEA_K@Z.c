/*
 * XREFs of ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C015BF54
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C015C3FC (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C015C7C8 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C018FBF8 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthA(const char *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    v3 = 2048LL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( v3 )
        *a3 = 2048 - v3;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
