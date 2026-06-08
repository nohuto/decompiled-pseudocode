/*
 * XREFs of RegisterHvPepIdleStatesV2 @ 0x1C002D174
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002CCE0 (RegisterHvIdleStates.c)
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C002C37C (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C002C5F8 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C002D6BC (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvPepIdleStatesV2(__int64 a1)
{
  int v2; // ebx
  bool v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = RegisterHvCStates(a1);
  if ( v2 >= 0 )
  {
    GetHvPpmCapabilities(0LL, &v4, 0LL);
    if ( v4 )
      return (unsigned int)RegisterVmIdleStates(a1);
  }
  return (unsigned int)v2;
}
