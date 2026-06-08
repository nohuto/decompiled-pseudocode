/*
 * XREFs of ValidateCoordinatedLpiStates @ 0x1C002DA00
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003896C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     ValidateLpiState @ 0x1C002DC80 (ValidateLpiState.c)
 */

__int64 __fastcall ValidateCoordinatedLpiStates(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp

  if ( !a1 )
    return 3221225473LL;
  v4 = 0LL;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)&a1[10 * v4 + 6];
    if ( v5 )
    {
      v6 = 0LL;
      if ( *(_DWORD *)(v5 + 16) )
        break;
    }
LABEL_8:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *a1 )
      return 0LL;
  }
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    result = ValidateLpiState(v5 + 80 * v6 + 24, a2);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 16) )
      goto LABEL_8;
  }
}
