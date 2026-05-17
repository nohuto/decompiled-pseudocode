/*
 * XREFs of TpWaitForWait @ 0x18002F0B0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x1800313F0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TppWorkWait @ 0x180031C98 (TppWorkWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, unsigned int a2)
{
  int v3; // ebx
  char v5; // bp
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // ebx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0;
  v5 = 0;
  result = TppWaitpValidateWait(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v7 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      TppCancelWait(a1, v7 + 112, 2LL, &v9);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v3 = v9;
    }
    result = TppWorkWait(a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v3 )
    {
      v8 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v8);
      if ( (_DWORD)result == v8 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
