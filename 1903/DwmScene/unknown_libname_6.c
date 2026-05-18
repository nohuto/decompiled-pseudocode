/*
 * XREFs of unknown_libname_6 @ 0x18008D2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_6(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    sub_18008949C(*(_QWORD *)(a1 + 16));
    return j__o_free(v1);
  }
  return result;
}
