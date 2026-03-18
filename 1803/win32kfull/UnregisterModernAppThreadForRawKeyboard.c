/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x1C01A32A8
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C01F9350 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01A2B00 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(_QWORD *)(a1 + 416);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 824) + 100LL) & 0x800) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1200);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 1200) = v3 & 0xFFDFFFFF;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration((const struct tagPROCESSINFO *)v2) )
          RegisterRawInputDevices((__int64)&unk_1C031FE58, 1u, 2u);
      }
    }
  }
  return 1LL;
}
