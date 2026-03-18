/*
 * XREFs of _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C00EEFC0
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00EEE58 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00EEF80 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 * Callees:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00173C0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 *__fastcall lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *(__int64 **)a1;
  v5 = **(_QWORD **)a1;
  if ( v5 )
  {
    result = (__int64 *)_DeferWindowPosAndBand(
                          v5,
                          a2,
                          a3,
                          0,
                          0,
                          0,
                          0,
                          **(_DWORD **)(a1 + 8),
                          **(_DWORD **)(a1 + 16),
                          **(_DWORD **)(a1 + 24));
    **(_QWORD **)a1 = result;
  }
  return result;
}
