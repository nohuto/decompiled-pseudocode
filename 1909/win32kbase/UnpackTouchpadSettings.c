/*
 * XREFs of UnpackTouchpadSettings @ 0x1C0185794
 * Callers:
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AFA0 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0107600 (_SetPrecisionTouchPadConfiguration.c)
 */

SIZE_T __fastcall UnpackTouchpadSettings(_DWORD *a1)
{
  unsigned int v1; // edx
  SIZE_T result; // rax
  int v3; // edx
  _DWORD Source1[6]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1[5];
  Source1[0] = a1[1];
  Source1[1] = a1[2];
  Source1[2] = a1[3];
  Source1[4] = a1[4];
  Source1[5] = (v1 >> 11) & 0x7F;
  Source1[3] = v1 & 0x7FF;
  result = RtlCompareMemory(Source1, &gTouchPadParameters, 0x18uLL);
  if ( result != 24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v3, 12, 11, (__int64)&WPP_bf142974e6cd37e959979a62310fe389_Traceguids);
    }
    return SetPrecisionTouchPadConfiguration(Source1);
  }
  return result;
}
