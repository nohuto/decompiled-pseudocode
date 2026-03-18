/*
 * XREFs of IsValidBandForProcess @ 0x1C005FD70
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0023074 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edx

  v6 = IsImmersiveBroker(a1);
  v7 = 0;
  if ( v6 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 812) & 0x30) == 0x10 )
    return a2 == 1
        || a2 > 2 && (a2 <= 6 || a2 > 7 && (a2 == 13 || a2 <= 11 || a2 == 15 || (unsigned int)(a2 - 17) <= 1));
  if ( a2 == 1 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 812) & 2) == 0 && (!a3 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 236LL) != 2) )
    return 0LL;
  LOBYTE(v7) = a2 == 2;
  return v7;
}
