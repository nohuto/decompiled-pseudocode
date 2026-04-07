/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180020BCC
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C74 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001CFE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, float a2, char a3, _DWORD *a4)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 result; // rax
  int v9; // edx
  unsigned __int8 v10[8]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 26) )
  {
    if ( (a3 & 1) != 0 )
      v9 = *(_DWORD *)(a1 + 568);
    else
      v9 = *(_DWORD *)(a1 + 572);
  }
  else
  {
    v6 = *(_OWORD *)(a1 + 532);
    v7 = *(_OWORD *)(a1 + 548);
    *(_DWORD *)v10 = *(_DWORD *)(a1 + 496);
    v11[0] = v6;
    v11[1] = v7;
    if ( *(_BYTE *)(a1 + 25) )
      a3 |= 4u;
    if ( *(_BYTE *)(a1 + 564) )
      a3 |= 0x20u;
    CGlassColorizationParameters::AdjustWindowColorization((unsigned __int8 *)v11, v10, a2, a3);
    result = LOBYTE(v11[0]) << 16;
    v9 = v11[0] & 0xFF00FF00 | result | BYTE2(v11[0]);
  }
  *a4 = v9;
  return result;
}
