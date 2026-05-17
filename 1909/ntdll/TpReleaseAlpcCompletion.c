/*
 * XREFs of TpReleaseAlpcCompletion @ 0x180078B60
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppAlpcpValidateAlpc @ 0x180078BCC (TppAlpcpValidateAlpc.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TppAlpcpValidateAlpc(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 256) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v2;
}
