/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180029320
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)sub_180025F70(2, a1, a2, a3, a4) >= 0;
}
