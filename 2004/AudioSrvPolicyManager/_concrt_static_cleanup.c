/*
 * XREFs of _concrt_static_cleanup @ 0x180009830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020FC4 @ 0x180020FC4 (sub_180020FC4.c)
 */

__int64 concrt_static_cleanup()
{
  __int64 result; // rax

  if ( qword_18004FE78 )
    return sub_180020FC4();
  return result;
}
