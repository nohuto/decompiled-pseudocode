/*
 * XREFs of sub_18000EF6C @ 0x18000EF6C
 * Callers:
 *     sub_1800127D4 @ 0x1800127D4 (sub_1800127D4.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_1800FD4E8 @ 0x1800FD4E8 (sub_1800FD4E8.c)
 * Callees:
 *     sub_1800129A4 @ 0x1800129A4 (sub_1800129A4.c)
 */

__int64 __fastcall sub_18000EF6C(__int64 a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = *(wchar_t **)(a1 + 136);
    if ( v5 && (unsigned __int8)sub_1800129A4(v5, a2) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v6 = *(wchar_t **)(a1 + 152);
      if ( v6 )
        return (unsigned __int8)sub_1800129A4(v6, a2) != 0 ? 0xC0000034 : 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
