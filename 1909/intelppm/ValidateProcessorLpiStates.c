/*
 * XREFs of ValidateProcessorLpiStates @ 0x1C002E4EC
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0020AA4 (InitAcpiLpiStates.c)
 * Callees:
 *     ValidateLpiState @ 0x1C002DC80 (ValidateLpiState.c)
 */

__int64 __fastcall ValidateProcessorLpiStates(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  if ( !a1 )
    return 3221225473LL;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    result = ValidateLpiState(a1 + 80 * v3 + 24, 0);
    if ( (int)result < 0 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  return result;
}
