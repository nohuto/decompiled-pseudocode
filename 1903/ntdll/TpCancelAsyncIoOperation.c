/*
 * XREFs of TpCancelAsyncIoOperation @ 0x1800626B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)sub_180062970(Io, 0LL, 0LL) )
  {
    _m_prefetchw((char *)Io + 280);
    v2 = *((_DWORD *)Io + 70);
    while ( v2 > 0 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)Io + 70, v2 - 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
      {
        sub_180066BBC((char *)Io + 56, 0xFFFFFFFFLL);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
