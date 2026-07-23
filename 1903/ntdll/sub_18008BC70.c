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

void sub_18008BC70()
{
  unsigned __int64 Ptr; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Ptr = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
  v2 = (_RTL_SRWLOCK *)qword_180166088;
  v3 = *(_RTL_SRWLOCK **)(qword_180166088 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_180166088 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( LODWORD(v3[12].Ptr) == 2 && (!Ptr || v3[13].Ptr < (PVOID)Ptr) )
      {
        Ptr = (unsigned __int64)v3[13].Ptr;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_180166088;
      v3 = (_RTL_SRWLOCK *)v3->Ptr;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_180166088 + 16) );
    if ( v1 )
    {
      sub_18008BD24(Ptr);
      v2 = (_RTL_SRWLOCK *)qword_180166088;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
