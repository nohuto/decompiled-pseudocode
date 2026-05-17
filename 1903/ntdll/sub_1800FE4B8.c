/*
 * XREFs of sub_1800FE4B8 @ 0x1800FE4B8
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE4B8(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return sub_1800FED60();
  return a1;
}
