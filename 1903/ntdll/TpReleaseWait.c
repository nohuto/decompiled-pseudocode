/*
 * XREFs of TpReleaseWait @ 0x1800302D0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 * Callees:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = sub_1800313F0(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180031774(a1, 1LL);
    if ( (_DWORD)result )
    {
      v3 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      sub_180031458(a1, v3 + 112, 2LL, &v6);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v4 = 1 - v6;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v6 - 1);
      if ( (_DWORD)result == v4 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
