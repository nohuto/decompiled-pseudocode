/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@@Z @ 0x180115F70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMouseSnappedToGaze(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE v6[1568]; // [rsp+20h] [rbp-638h] BYREF

  memcpy_0(v6, a3, sizeof(v6));
  v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 1632LL);
  result = 0LL;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 48LL))(v4, v6);
  return result;
}
