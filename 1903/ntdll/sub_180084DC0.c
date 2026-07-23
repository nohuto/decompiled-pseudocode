/*
 * XREFs of sub_180084DC0 @ 0x180084DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180084DC0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // ecx
  signed int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  sub_180031458(a1, v2 + 112, a2 != 0 ? 2 : 0, &v7);
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v7;
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7) == -v6 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
