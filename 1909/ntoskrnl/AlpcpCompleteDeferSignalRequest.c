/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x140659FD0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140659B70 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

unsigned __int8 __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 result; // al
  void *v6; // rcx

  result = _bittestandreset((signed __int32 *)(a1 + 48), 2u);
  if ( result )
  {
    result = AlpcpSignal(a1, 0LL, 0LL, a4);
    v6 = *(void **)(a1 + 32);
    if ( v6 )
      return ObfDereferenceObject(v6);
  }
  return result;
}
