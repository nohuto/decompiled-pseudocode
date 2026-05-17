/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800786E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_18007874C(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = sub_180031774(a1 + 72, 1LL);
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
