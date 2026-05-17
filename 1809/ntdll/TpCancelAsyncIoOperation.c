/*
 * XREFs of TpCancelAsyncIoOperation @ 0x180031120
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpCancelAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // ecx
  bool v4; // zf
  signed __int32 v5; // eax

  result = TppIopValidateIo(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    _m_prefetchw((const void *)(a1 + 280));
    v3 = *(_DWORD *)(a1 + 280);
    while ( v3 > 0 )
    {
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), v3 - 1, v3);
      v4 = v3 == v5;
      v3 = v5;
      if ( v4 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL);
        break;
      }
    }
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
