/*
 * XREFs of ?OnInputProviderChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@I@Z @ 0x180115BC0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnInputProviderChanged(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this + 7);
  memcpy_0((void *)(v4 + 56), a3, 0x620uLL);
  v6 = *(_QWORD *)(v4 + 1632);
  result = 0LL;
  *(_DWORD *)(v4 + 1624) = a4;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, v4 + 56, a4);
  return result;
}
