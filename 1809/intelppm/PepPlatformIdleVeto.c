/*
 * XREFs of PepPlatformIdleVeto @ 0x1C000E410
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000F140 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepPlatformIdleVeto(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  if ( !Src && !qword_1C001A8F0 && !qword_1C001A8F8 )
    return 3221225659LL;
  v3 = 0LL;
  v4 = 0LL;
  HIDWORD(v3) = *(_DWORD *)a2;
  LODWORD(v4) = *(_DWORD *)(a2 + 4);
  BYTE4(v4) = *(_BYTE *)(a2 + 8);
  LODWORD(v3) = 60;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C001A5F0)(&v3);
}
