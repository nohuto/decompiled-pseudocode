/*
 * XREFs of TpCancelAsyncIoOperation @ 0x180031120
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 0LL) )
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
        TppBarrierAdjust((char *)Io + 56, 0xFFFFFFFFLL);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
