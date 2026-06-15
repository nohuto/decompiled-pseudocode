/*
 * XREFs of _lambda_4b3be4062b453557032a0102af949bc6_::operator() @ 0x1800ED458
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Do_call @ 0x1800F1050 (std--_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_4b3be4062b453557032a0102af949bc6_::operator()()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int64 *v2; // [rsp+28h] [rbp-20h] BYREF
  __int128 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphStore *, __int64 **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(
    g_DeviceGraphStore,
    &v2);
  v0 = (__int64 *)v3;
  v1 = v2;
  if ( v2 != (__int64 *)v3 )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 384LL))(*v1);
      ++v1;
    }
    while ( v1 != v0 );
    v0 = (__int64 *)v3;
    v1 = v2;
  }
  if ( v1 )
  {
    if ( v1 != v0 )
    {
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1++);
      while ( v1 != v0 );
      v1 = v2;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)&v3 + 1) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
