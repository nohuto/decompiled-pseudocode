/*
 * XREFs of MiInitializePartitions @ 0x1409BA82C
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409BA550 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_14043A700 = 0LL;
    qword_14043A708 = 0LL;
    qword_14043A728 = (PRTL_BITMAP)&dword_14043A730;
    dword_14043A730 = 1;
    qword_14043A738 = (__int64)dword_14043A710;
    dword_14043A710[0] |= 1u;
    qword_14043A720 = (__int64)&qword_14043A718;
    qword_14043A718 = (__int64)&qword_14043A718;
    qword_14043A740 = (__int64)&MiSystemPartition;
    qword_14043A748 = (__int64)&qword_14043A740;
  }
  return result;
}
