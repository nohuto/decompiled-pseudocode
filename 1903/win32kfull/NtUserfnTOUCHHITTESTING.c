/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1C02397D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  _OWORD v13[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a4 + 3 < a4 || (unsigned __int64)(a4 + 3) > MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v10 = a4[1];
  v11 = a4[2];
  v13[0] = *a4;
  v13[1] = v10;
  v13[2] = v11;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v13,
           a5);
}
