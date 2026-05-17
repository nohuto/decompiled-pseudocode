/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x18010B890
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18004E8C8 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180050790 (RtlpHpQueryVA.c)
 */

signed __int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int16 *v3; // r14
  unsigned __int64 v4; // rdi
  __int16 *v6; // [rsp+30h] [rbp+8h] BYREF

  RtlpHpQueryVA(a2, a2, &v6, 0LL);
  v3 = v6;
  if ( *v6 < 0 )
  {
    *v6 ^= (*v6 ^ (*v6 + 1)) & 0x7FF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v6;
  }
  v4 = (unsigned __int64)(unsigned __int16)*v3 >> 15;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v4 + 120);
  *(_QWORD *)(a1 + 8 * v4 + 120) = v3 + 4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
}
