/*
 * XREFs of _lambda_4b3be4062b453557032a0102af949bc6_::operator() @ 0x1800E2288
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Do_call @ 0x1800E6080 (std--_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_--_Do_call.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_4b3be4062b453557032a0102af949bc6_::operator()()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // [rsp+28h] [rbp-20h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphStore *, _QWORD **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(
    g_DeviceGraphStore,
    &v3);
  v0 = (_QWORD *)v4;
  v1 = v3;
  if ( v3 != (_QWORD *)v4 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 384LL))(*v1);
      ++v1;
    }
    while ( v1 != v0 );
    v0 = (_QWORD *)v4;
    v1 = v3;
  }
  if ( v1 )
  {
    if ( v1 != v0 )
    {
      do
      {
        v2 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        }
        ++v1;
      }
      while ( v1 != v0 );
      v1 = v3;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)&v4 + 1) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
