/*
 * XREFs of ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800E9390
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x1800DAD04 (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientConnection::SetBootstrapProxy(
        MPCManagerClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 152);
  v4 = *((_QWORD *)this + 19);
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_80d47daf_ff3e_615f_b8bf_98e04e2f97da,
         v2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclientconnection.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x1800E941ALL);
  }
  MPCManagerClient::OnServerConnectionChanged(*((MPCManagerClient **)this + 20));
  return 0LL;
}
