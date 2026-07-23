/*
 * XREFs of sub_18004871C @ 0x18004871C
 * Callers:
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 */

char *__fastcall sub_18004871C(_RTL_SRWLOCK *a1, unsigned int a2, int a3, unsigned int a4)
{
  char v4; // bl
  char *v5; // rdi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  v4 = a4;
  v7 = 0;
  v8 = 0LL;
  SRWLock = 0LL;
  v10 = 0LL;
  v5 = sub_180038840(a1, a2, a3, a4, (__int64)&v8, &v7);
  if ( v7 && (v4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
