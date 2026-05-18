/*
 * XREFs of sub_18011C320 @ 0x18011C320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 */

__int64 sub_18011C320()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_18026C268, 1u);
  if ( !(_DWORD)result )
    return sub_180001000((ULONGLONG *)&dword_18025EE98, 0LL, 0LL);
  return result;
}
