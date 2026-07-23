/*
 * XREFs of sub_18010B760 @ 0x18010B760
 * Callers:
 *     sub_18004E828 @ 0x18004E828 (sub_18004E828.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 */

void __fastcall sub_18010B760(__int64 a1, __int64 a2)
{
  __int16 *v3; // r14
  unsigned __int64 v4; // rdi
  __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  sub_1800506F0(a2, a2, &v5, 0LL);
  v3 = v5;
  if ( *v5 < 0 )
  {
    *v5 ^= (*v5 ^ (*v5 + 1)) & 0x7FF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v5;
  }
  v4 = (unsigned __int64)(unsigned __int16)*v3 >> 15;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v4 + 120);
  *(_QWORD *)(a1 + 8 * v4 + 120) = v3 + 4;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
}
