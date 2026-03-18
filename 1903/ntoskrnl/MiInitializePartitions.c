/*
 * XREFs of MiInitializePartitions @ 0x1409F25B0
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiCreatePfnDatabase @ 0x1409F22D8 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140466140 = 0LL;
    qword_140466148 = 0LL;
    qword_140466168 = (PRTL_BITMAP)&dword_140466170;
    dword_140466170 = 1;
    qword_140466178 = (__int64)dword_140466150;
    dword_140466150[0] |= 1u;
    qword_140466160 = (__int64)&qword_140466158;
    qword_140466158 = (__int64)&qword_140466158;
    qword_140466180 = (__int64)&MiSystemPartition;
    qword_140466188 = (__int64)&qword_140466180;
  }
  return result;
}
