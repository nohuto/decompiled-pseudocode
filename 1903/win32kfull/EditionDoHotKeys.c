/*
 * XREFs of EditionDoHotKeys @ 0x1C010DF30
 * Callers:
 *     <none>
 * Callees:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     IsSAS @ 0x1C010E628 (IsSAS.c)
 */

__int64 __fastcall EditionDoHotKeys(unsigned __int8 a1, char a2, int a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)xxxDoHotKeyStuff(a1, a3) )
    return 0LL;
  LOBYTE(v7) = a2;
  if ( (unsigned int)IsSAS(v7, &v9) )
  {
    *a6 = 1;
    return 0LL;
  }
  return 1LL;
}
