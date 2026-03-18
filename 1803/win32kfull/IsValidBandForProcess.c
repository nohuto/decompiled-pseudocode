/*
 * XREFs of IsValidBandForProcess @ 0x1C0030770
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00173C0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v6 = IsImmersiveBroker(a1);
  v7 = 0;
  if ( v6 )
    return 1LL;
  v8 = *(_DWORD *)(a1 + 812);
  result = 1LL;
  if ( (v8 & 0x30) != 0x10 )
  {
    if ( a2 == 1 )
      return result;
    if ( (v8 & 2) != 0 || a3 && *(_DWORD *)(*(_QWORD *)(a3 + 40) + 236LL) == 2 )
    {
      LOBYTE(v7) = a2 == 2;
      return v7;
    }
    return 0LL;
  }
  if ( a2 > 11 )
  {
    if ( a2 != 15 && a2 != 13 && (a2 <= 16 || a2 > 18) )
      return 0LL;
  }
  else if ( a2 != 1 && a2 < 8 && (a2 <= 2 || a2 > 4 && a2 != 6) )
  {
    return 0LL;
  }
  return result;
}
