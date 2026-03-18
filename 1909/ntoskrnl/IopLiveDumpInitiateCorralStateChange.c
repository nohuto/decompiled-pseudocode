/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x1405A8BA4
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8710 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405A9498 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1405A93C8 (IopLiveDumpProcessCorralStateChange.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2)
{
  __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  IopLiveDumpProcessCorralStateChange(a1, a1 + 112);
  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(unsigned int *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) == (_DWORD)result )
      break;
  }
  return result;
}
