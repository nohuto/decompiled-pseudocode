/*
 * XREFs of MiInitializePartitions @ 0x1409F24C0
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     MiCreatePfnDatabase @ 0x1409F21E8 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( !a1 )
  {
    qword_140465E40 = 0LL;
    qword_140465E48 = 0LL;
    qword_140465E68 = (PRTL_BITMAP)&dword_140465E70;
    dword_140465E70 = 1;
    qword_140465E78 = (__int64)dword_140465E50;
    dword_140465E50[0] |= 1u;
    qword_140465E60 = (__int64)&qword_140465E58;
    qword_140465E58 = (__int64)&qword_140465E58;
    qword_140465E80 = (__int64)&MiSystemPartition;
    qword_140465E88 = (__int64)&qword_140465E80;
  }
  return result;
}
