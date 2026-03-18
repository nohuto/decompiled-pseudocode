/*
 * XREFs of EditionResetIMELayout @ 0x1C013AD30
 * Callers:
 *     <none>
 * Callees:
 *     xxxImmLoadLayout @ 0x1C013AD9C (xxxImmLoadLayout.c)
 */

_BOOL8 __fastcall EditionResetIMELayout(int a1, int a2, __int64 *a3)
{
  __int64 Layout; // rax

  if ( (HIWORD(a1) & 0xF000) != 0xE000 && (*gpsi & 4) == 0 )
  {
    *a3 = 0LL;
    return 1LL;
  }
  Layout = xxxImmLoadLayout(a1);
  *a3 = Layout;
  return Layout || (a2 & 0xC0000000) != 0;
}
