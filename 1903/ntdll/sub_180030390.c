/*
 * XREFs of sub_180030390 @ 0x180030390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030390(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  __int64 v6; // r8
  signed int v7; // edi
  char v8; // cl

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  LOBYTE(v6) = 1;
  v7 = 0;
  if ( (unsigned __int8)sub_18003257C(a3, *(_QWORD *)(a3 + 144) + 112LL, v6) )
    v7 = -1;
  v8 = *(_BYTE *)(a3 + 464);
  if ( (v8 & 4) == 0 )
  {
    sub_180066BBC(a3 + 56, 1LL);
    v8 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v8 & 1) != 0 )
    v7 += sub_180031544(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v8 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v7 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
    v7 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7) == -v7 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return sub_180030488(Instance);
}
