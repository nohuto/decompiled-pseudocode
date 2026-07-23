/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1402E9CA4
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
