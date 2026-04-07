/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180022918
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180022890 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180017C30 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, float a2, char a3, _DWORD *a4)
{
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  int v8; // eax
  __int64 result; // rax
  int v10; // edx
  unsigned __int8 v11[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 26) )
  {
    if ( (a3 & 1) != 0 )
      v10 = *(_DWORD *)(a1 + 564);
    else
      v10 = *(_DWORD *)(a1 + 568);
  }
  else
  {
    v6 = *(_OWORD *)(a1 + 532);
    v14 = *(_DWORD *)(a1 + 556);
    v7 = *(_QWORD *)(a1 + 548);
    v8 = *(_DWORD *)(a1 + 496);
    v12 = v6;
    *(_DWORD *)v11 = v8;
    v13 = v7;
    if ( *(_BYTE *)(a1 + 25) )
      a3 |= 4u;
    if ( *(_BYTE *)(a1 + 560) )
      a3 |= 0x20u;
    CGlassColorizationParameters::AdjustWindowColorization((unsigned __int8 *)&v12, v11, a2, a3);
    result = (unsigned __int8)v12 << 16;
    v10 = v12 & 0xFF00FF00 | result | BYTE2(v12);
  }
  *a4 = v10;
  return result;
}
