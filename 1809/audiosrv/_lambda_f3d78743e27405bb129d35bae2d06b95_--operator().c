/*
 * XREFs of _lambda_f3d78743e27405bb129d35bae2d06b95_::operator() @ 0x1800EA0C4
 * Callers:
 *     wil::details::lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___::_lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___ @ 0x1800E9FE0 (wil--details--lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___--_lambda_call__lambda_f3d7.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED558 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f3d78743e27405bb129d35bae2d06b95_::operator()(_QWORD **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // [rsp+28h] [rbp-20h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphStore *, _QWORD **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(
    g_DeviceGraphStore,
    &v5);
  v2 = (_QWORD *)v6;
  v3 = v5;
  if ( v5 != (_QWORD *)v6 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 384LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)v6;
    v3 = v5;
  }
  if ( v3 )
  {
    if ( v3 != v2 )
    {
      do
      {
        v4 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v3;
      }
      while ( v3 != v2 );
      v3 = v5;
    }
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)&v6 + 1) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
