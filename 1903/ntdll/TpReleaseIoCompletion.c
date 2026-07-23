/*
 * XREFs of TpReleaseIoCompletion @ 0x180062720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_180062970(Io, 1LL, 0LL) )
  {
    LOBYTE(v2) = sub_180031774((__int64)Io, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Io + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
    }
  }
}
