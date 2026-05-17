/*
 * XREFs of TpReleaseIoCompletion @ 0x1800627C0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseIoCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TppIopValidateIo(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
