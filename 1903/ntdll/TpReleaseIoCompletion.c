/*
 * XREFs of TpReleaseIoCompletion @ 0x180062720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseIoCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_180062970(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = sub_180031774(a1, 1LL);
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
