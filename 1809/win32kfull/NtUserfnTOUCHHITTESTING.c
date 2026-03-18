/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1C0221260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _OWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF

  if ( a4 + 3 < a4 || (unsigned __int64)(a4 + 3) > MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v6 = a4[1];
  v7 = a4[2];
  v9[0] = *a4;
  v9[1] = v6;
  v9[2] = v7;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v9,
           a5);
}
