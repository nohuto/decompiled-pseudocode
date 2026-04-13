/*
 * XREFs of ?do_compare@?$collate@D@std@@MEBAHPEBD000@Z @ 0x1800C7CE0
 * Callers:
 *     <none>
 * Callees:
 *     _Strcoll @ 0x1800C9F20 (_Strcoll.c)
 */

__int64 __fastcall std::collate<char>::do_compare(
        const _Collvec *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        char *a5)
{
  int v5; // ecx
  __int64 result; // rax

  v5 = Strcoll(a2, a3, a4, a5, a1 + 1);
  result = v5 != 0;
  if ( v5 < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
