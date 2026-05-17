/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180083300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_180166098);
  while ( !(_DWORD)result );
  return result;
}
