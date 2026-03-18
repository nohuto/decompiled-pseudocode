/*
 * XREFs of FxVerifierQueryStateSeparationDetection @ 0x1C005A8D4
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C00593B0 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall FxVerifierQueryStateSeparationDetection(
        void *Key,
        FxStateSeparationDetectionOption *StateSeparationDetection)
{
  unsigned int value; // [rsp+20h] [rbp-60h] BYREF
  _UNICODE_STRING valueName; // [rsp+28h] [rbp-58h] BYREF
  wchar_t valueName_buffer[28]; // [rsp+38h] [rbp-48h] BYREF

  value = 0;
  wcscpy(valueName_buffer, L"StateSeparationDetection");
  *(_QWORD *)&valueName.Length = 3276848LL;
  valueName.Buffer = valueName_buffer;
  if ( CUmdfSvcConfig::_QueryULong(Key, &valueName, &value) < 0 || value >= 3 )
    *StateSeparationDetection = FxStateSeparationDetectionNone;
  else
    *StateSeparationDetection = value;
}
