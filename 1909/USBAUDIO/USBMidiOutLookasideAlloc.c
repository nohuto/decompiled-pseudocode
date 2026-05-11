/*
 * XREFs of USBMidiOutLookasideAlloc @ 0x1C0030CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall USBMidiOutLookasideAlloc(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  int v3; // ebx
  _QWORD *result; // rax

  v3 = NumberOfBytes;
  result = ExAllocatePoolWithTag(PoolType, NumberOfBytes + 184, 0x41627845u);
  if ( result )
  {
    result[2] = 0LL;
    result[3] = result + 7;
    result[6] = result + 23;
    *((_DWORD *)result + 9) = v3;
  }
  return result;
}
