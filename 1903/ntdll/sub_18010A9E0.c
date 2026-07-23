/*
 * XREFs of sub_18010A9E0 @ 0x18010A9E0
 * Callers:
 *     sub_18010AA54 @ 0x18010AA54 (sub_18010AA54.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18010A9E0(__int64 a1, _RTL_SRWLOCK **a2, char a3)
{
  _RTL_SRWLOCK *v3; // rbx
  int v6; // edi

  v3 = *a2;
  if ( *a2 != (_RTL_SRWLOCK *)a2 )
  {
    v6 = a3 & 1;
    do
    {
      if ( v6 )
      {
        if ( (a3 & 2) != 0 )
          v3[3].Ptr = (PVOID)1;
        RtlReleaseSRWLockExclusive(v3 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v3 + 3);
      }
      v3 = (_RTL_SRWLOCK *)v3->Ptr;
    }
    while ( v3 != (_RTL_SRWLOCK *)a2 );
  }
}
