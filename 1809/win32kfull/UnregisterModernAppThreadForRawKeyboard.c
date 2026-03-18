/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x1C01C4FD4
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C02213C0 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C00D2180 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C010345C (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01C4714 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(_QWORD *)(a1 + 424);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 832) + 100LL) & 0x800) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1208);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 1208) = v3 & 0xFFDFFFFF;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration((const struct tagPROCESSINFO *)v2) )
          RegisterRawInputDevices((__int64)&unk_1C03106F8, 1u, 2u);
      }
    }
  }
  return 1LL;
}
