/*
 * XREFs of unknown_libname_4 @ 0x18001B9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B5F48 @ 0x1800B5F48 (sub_1800B5F48.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_4(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    sub_1800B5F48(*(_QWORD *)(a1 + 16));
    return j__o_free(v1);
  }
  return result;
}
