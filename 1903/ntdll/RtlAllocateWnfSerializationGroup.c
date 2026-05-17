/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180082C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_180166090);
  while ( !(_DWORD)result );
  return result;
}
