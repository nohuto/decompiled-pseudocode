/*
 * XREFs of sub_1800FAB10 @ 0x1800FAB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FAB10(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *((_DWORD *)a1 + 36) = a3;
  return (*(__int64 (**)(void))(v3 + 48))();
}
