/*
 * XREFs of RtlCreateUserThread @ 0x1800056F0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 */

__int64 __fastcall RtlCreateUserThread(int a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  return sub_180005760(a1, a2, a3 == 1, a4, a5, a6);
}
