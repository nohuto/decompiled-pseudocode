/*
 * XREFs of ?OnPeerConnected@DataProviderRegistrarConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x18007C060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderRegistrarConnection::OnPeerConnected(
        DataProviderRegistrarConnection *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  __int64 v4; // rax
  struct Microsoft::Bamo::BamoPrincipal *v5; // rcx

  v4 = *((_QWORD *)this + 19);
  *a3 = 1;
  v5 = *(struct Microsoft::Bamo::BamoPrincipal **)(v4 + 40);
  *a4 = v5;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct dataprovider_AutoBamos::BamoPeer *))v5)(
    v5,
    a2);
  return 0LL;
}
