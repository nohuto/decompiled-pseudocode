/*
 * XREFs of EditionDoHotKeys @ 0x1C00E9C50
 * Callers:
 *     <none>
 * Callees:
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     IsSAS @ 0x1C00EA2B0 (IsSAS.c)
 */

__int64 __fastcall EditionDoHotKeys(unsigned __int8 a1, char a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)xxxDoHotKeyStuff((struct tagHOTKEY *)a1) )
    return 0LL;
  LOBYTE(v7) = a2;
  if ( (unsigned int)IsSAS(v7, &v9) )
  {
    *a6 = 1;
    return 0LL;
  }
  return 1LL;
}
