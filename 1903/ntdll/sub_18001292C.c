/*
 * XREFs of sub_18001292C @ 0x18001292C
 * Callers:
 *     sub_1800127D4 @ 0x1800127D4 (sub_1800127D4.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_1800FD4E8 @ 0x1800FD4E8 (sub_1800FD4E8.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     sub_1800129A4 @ 0x1800129A4 (sub_1800129A4.c)
 */

__int64 __fastcall sub_18001292C(_QWORD *a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  int v9; // ecx

  v2 = 0;
  if ( a1 )
  {
    v5 = (wchar_t *)a1[17];
    if ( !v5 || (unsigned __int8)sub_1800129A4(v5, a2) )
    {
      v6 = (wchar_t *)a1[16];
      if ( v6 )
      {
        v9 = -((unsigned __int8)sub_1800129A4(v6, a2) == 0);
      }
      else
      {
        v7 = (wchar_t *)a1[19];
        if ( !v7 )
          return v2;
        v9 = -((unsigned __int8)sub_1800129A4(v7, a2) != 0);
      }
      return v9 & 0xC0000034;
    }
    return (unsigned int)-1073741772;
  }
  return 3221225524LL;
}
