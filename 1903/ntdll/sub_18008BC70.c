/*
 * XREFs of sub_18008BC70 @ 0x18008BC70
 * Callers:
 *     sub_1800065D0 @ 0x1800065D0 (sub_1800065D0.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 */

signed __int64 __fastcall sub_18008BC70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rbx

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180166088 + 8), a2, a3, a4);
  v9 = qword_180166088;
  v10 = *(__int64 **)(qword_180166088 + 16);
  if ( v10 != (__int64 *)(qword_180166088 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v10 + 3, v6, v7, v8);
      if ( *((_DWORD *)v10 + 24) == 2 && (!v4 || v10[13] < v4) )
      {
        v4 = v10[13];
        v5 = 1;
      }
      RtlReleaseSRWLockShared(v10 + 3);
      v9 = qword_180166088;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(qword_180166088 + 16) );
    if ( v5 )
    {
      sub_18008BD24(v4);
      v9 = qword_180166088;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
}
