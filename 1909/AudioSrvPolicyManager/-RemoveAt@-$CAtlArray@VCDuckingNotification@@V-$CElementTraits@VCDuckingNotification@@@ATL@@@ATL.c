/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000C680
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180008DBC (--1CDuckingManager@@UEAA@XZ.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000BEA8 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000C060 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000CD8C (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18003504E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003599F (memmove_0.c)
 */

void *__fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void *v4; // rsi
  __int64 v5; // r14
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  char *v9; // rbx
  size_t v10; // rsi
  char *v11; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > (unsigned __int64)v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 32 * a2;
  result = (void *)ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
                     (char *)*a1 + 32 * a2,
                     1LL);
  v8 = (__int64)v4 - v2;
  if ( v8 )
  {
    result = *a1;
    v9 = (char *)*a1 + 32 * v2;
    v10 = 32 * v8;
    v11 = (char *)*a1 + v5;
    if ( v10 )
    {
      if ( !v11 || !v9 )
      {
        *(_DWORD *)_o__errno(v11, v7) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = memmove_0(v11, v9, v10);
    }
  }
  a1[1] = (char *)a1[1] - 1;
  return result;
}
