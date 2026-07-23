/*
 * XREFs of sub_18010C1C4 @ 0x18010C1C4
 * Callers:
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18010C01C @ 0x18010C01C (sub_18010C01C.c)
 */

void __fastcall sub_18010C1C4(PRTL_SRWLOCK SRWLock, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // esi
  unsigned __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v8 = 0LL;
    v10 = 0LL;
    SRWLocka = SRWLock;
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  while ( a3 )
  {
    v7 = (unsigned __int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    sub_18010C01C((__int64)SRWLock, a2, v7, v4, (__int64)&v8);
  }
  if ( !v6 )
    RtlReleaseSRWLockExclusive(SRWLocka);
}
