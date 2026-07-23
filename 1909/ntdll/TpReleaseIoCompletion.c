/*
 * XREFs of TpReleaseIoCompletion @ 0x1800627C0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppIopValidateIo(Io, 1LL, 0LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Io, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Io + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
    }
  }
}
