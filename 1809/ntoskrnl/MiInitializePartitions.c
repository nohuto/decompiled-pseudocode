/*
 * XREFs of MiInitializePartitions @ 0x1409BB82C
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_14043B7C0 = 0LL;
    qword_14043B7C8 = 0LL;
    qword_14043B7E8 = (PRTL_BITMAP)&dword_14043B7F0;
    dword_14043B7F0 = 1;
    qword_14043B7F8 = (__int64)dword_14043B7D0;
    dword_14043B7D0[0] |= 1u;
    qword_14043B7E0 = (__int64)&qword_14043B7D8;
    qword_14043B7D8 = (__int64)&qword_14043B7D8;
    qword_14043B800 = (__int64)&MiSystemPartition;
    qword_14043B808 = (__int64)&qword_14043B800;
  }
  return result;
}
