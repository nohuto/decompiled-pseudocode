/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140838490
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1408324B0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140832F58 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140838530 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  struct _LOOKASIDE_LIST_EX *v7; // r9
  __int64 v8; // rdx
  int started; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13[80]; // [rsp+20h] [rbp-78h] BYREF

  memset(v13, 0, sizeof(v13));
  CmpInitializeKeyNodeStack(v13);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v13, a2, v6, v7);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, v13, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v13, v8, v10, v11);
  return (unsigned int)started;
}
