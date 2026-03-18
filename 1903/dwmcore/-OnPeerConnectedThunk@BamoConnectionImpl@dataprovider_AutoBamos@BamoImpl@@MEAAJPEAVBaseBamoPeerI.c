/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x1800E6CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool *, struct Microsoft::Bamo::BamoPrincipal **))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)a2 + 2),
           a3,
           a4);
}
