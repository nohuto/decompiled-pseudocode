/*
 * XREFs of sub_18011C210 @ 0x18011C210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 */

__int64 sub_18011C210()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_18026B268, 1u);
  if ( !(_DWORD)result )
    return sub_180001000((ULONGLONG *)&dword_18025DE98, 0LL, 0LL);
  return result;
}
