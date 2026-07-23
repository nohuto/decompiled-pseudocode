/*
 * XREFs of MiFillGapAddresses @ 0x140186C6C
 * Callers:
 *     MiFillPfnGaps @ 0x1409D2FD0 (MiFillPfnGaps.c)
 * Callees:
 *     MiFillGapPtes @ 0x140186D0C (MiFillGapPtes.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiFillGapAddresses(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  __int64 v6; // r10
  char v8; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0xFFFFFA8000000000uLL;
  v5 = (unsigned __int64 *)&v9;
  v6 = 4LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v4;
    *v5 = a2;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return MiFillGapPtes(v4, a2, (unsigned int)&v8, a3, 3);
}
