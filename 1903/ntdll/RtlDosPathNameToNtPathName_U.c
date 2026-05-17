/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800292F0
 * Callers:
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)sub_180025F70(0, a1, a2, a3, a4) >= 0;
}
