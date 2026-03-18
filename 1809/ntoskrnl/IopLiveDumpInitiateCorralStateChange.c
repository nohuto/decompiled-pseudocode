/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x140578D24
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpUncorralProcessors @ 0x140579628 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140579558 (IopLiveDumpProcessCorralStateChange.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  IopLiveDumpProcessCorralStateChange(a1, a1 + 112);
  for ( i = 0; ; KeYieldProcessorEx(&i, v3, v4) )
  {
    result = *(unsigned int *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) == (_DWORD)result )
      break;
  }
  return result;
}
