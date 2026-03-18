/*
 * XREFs of RegisterModernAppThreadForRawKeyboard @ 0x1C01D8170
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C0239570 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C001E620 (HasHidTable.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C00E762C (_RegisterRawInputDevices.c)
 */

__int64 __fastcall RegisterModernAppThreadForRawKeyboard(__int64 a1)
{
  int v1; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 1224);
  if ( (v1 & 0x200000) != 0 )
    return 1LL;
  if ( (unsigned int)HasHidTable(a1) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 824LL) + 100LL);
    if ( (v7 & 0x800) != 0 )
    {
      *(_DWORD *)(a1 + 1224) = v1 | 0x200000;
      return 1LL;
    }
    if ( (v7 & 0x10) != 0 )
    {
      UserSetLastError(85LL, v4, v5, v6);
      return 0LL;
    }
  }
  v9 = 0LL;
  v8[0] = 393217;
  v8[1] = 16944;
  if ( !(unsigned int)RegisterRawInputDevices((__int64)v8, 1LL, 2u) )
    return 0LL;
  *(_DWORD *)(a1 + 1224) |= 0x200000u;
  return 1LL;
}
