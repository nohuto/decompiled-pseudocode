/*
 * XREFs of FxVerifierQueryTrackPower @ 0x1C005A978
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C00593B0 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall FxVerifierQueryTrackPower(void *Key, FxTrackPowerOption *TrackPower)
{
  unsigned int value; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING valueName; // [rsp+28h] [rbp-38h] BYREF
  wchar_t valueName_buffer[12]; // [rsp+38h] [rbp-28h] BYREF

  value = 0;
  valueName.Buffer = valueName_buffer;
  wcscpy(valueName_buffer, L"TrackPower");
  *(_QWORD *)&valueName.Length = 1441812LL;
  if ( CUmdfSvcConfig::_QueryULong(Key, &valueName, &value) < 0 || value >= 3 )
    *TrackPower = FxTrackPowerNone;
  else
    *TrackPower = value;
}
