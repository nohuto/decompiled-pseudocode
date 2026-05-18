/*
 * XREFs of sub_1801347B9 @ 0x1801347B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 *     sub_180123210 @ 0x180123210 (sub_180123210.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801347B9(__int64 a1, __int64 a2)
{
  sub_180123210(*(_QWORD *)(a2 + 80), *(_QWORD ***)(a2 + 88));
  sub_180120988(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
