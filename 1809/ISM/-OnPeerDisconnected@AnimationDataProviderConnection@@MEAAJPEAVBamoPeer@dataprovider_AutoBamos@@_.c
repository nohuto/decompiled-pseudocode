/*
 * XREFs of ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x18009CDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AnimationDataProviderConnection::OnPeerDisconnected(
        AnimationDataProviderConnection *this,
        struct dataprovider_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      (*(void (__fastcall **)(__int64, struct dataprovider_AutoBamos::BamoPeer *))(*(_QWORD *)v3 + 8LL))(v3, a2);
    }
    v4 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      *(_QWORD *)(v2 + 16) = 0LL;
      (*(void (__fastcall **)(__int64, struct dataprovider_AutoBamos::BamoPeer *))(*(_QWORD *)v4 + 8LL))(v4, a2);
    }
  }
  return 0LL;
}
