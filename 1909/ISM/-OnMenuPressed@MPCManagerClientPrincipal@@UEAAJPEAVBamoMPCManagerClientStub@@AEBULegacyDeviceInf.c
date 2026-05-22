/*
 * XREFs of ?OnMenuPressed@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@I@Z @ 0x180115D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMenuPressed(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _BYTE v8[1568]; // [rsp+20h] [rbp-638h] BYREF

  memcpy_0(v8, a3, sizeof(v8));
  v6 = *(_QWORD *)(*((_QWORD *)this + 7) + 1632LL);
  result = 0LL;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v8, a4);
  return result;
}
