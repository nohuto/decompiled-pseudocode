/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x1407FED68
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CmpCleanupKeyNodeStack @ 0x1407F99C0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407F9F48 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1407FA580 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FEDFC (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  char v7[80]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack(v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v7, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v7, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v7);
  return (unsigned int)started;
}
