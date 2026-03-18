/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14083A3C8
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028061C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140832E50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083320C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _LOOKASIDE_LIST_EX *v5; // r9
  __int64 v6; // rdx
  int started; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpInitializeKeyNodeStack((char *)v11);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v11, a2, v4, v5);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v11);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v11, v6, v8, v9);
  return (unsigned int)started;
}
