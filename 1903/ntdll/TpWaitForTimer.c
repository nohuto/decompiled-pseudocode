/*
 * XREFs of TpWaitForTimer @ 0x180031D10
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, int a2)
{
  __int64 result; // rax
  char v5; // bp
  char v6; // si
  __int64 v7; // r8

  result = sub_1800324FC(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      LOBYTE(v7) = 1;
      v5 = sub_18003257C(a1, *(_QWORD *)(a1 + 144) + 112LL, v7);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
    }
    result = (__int64)sub_180031C98((_QWORD *)a1, a2);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
