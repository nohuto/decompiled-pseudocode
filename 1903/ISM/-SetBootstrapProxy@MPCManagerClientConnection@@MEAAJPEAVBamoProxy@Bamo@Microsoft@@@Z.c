/*
 * XREFs of ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180122820
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180112EE8 (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 */

__int64 __fastcall MPCManagerClientConnection::SetBootstrapProxy(
        MPCManagerClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *); // rbp
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  v3 = (_QWORD *)((char *)this + 152);
  v6 = *((_QWORD *)this + 19);
  *v3 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *))(v2 + 16);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = v7(a2, &GUID_a23095e8_0aa1_acfb_d2de_c42e5b7910f2, v3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      44LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclientconnection.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  MPCManagerClient::OnServerConnectionChanged(*((MPCManagerClient **)this + 20));
  return 0LL;
}
