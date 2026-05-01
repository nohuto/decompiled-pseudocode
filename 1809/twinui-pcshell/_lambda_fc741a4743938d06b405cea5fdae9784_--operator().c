/*
 * XREFs of _lambda_fc741a4743938d06b405cea5fdae9784_::operator() @ 0x180104DE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x180105480 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___--Run.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x180105380 (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fc741a4743938d06b405cea5fdae9784_::operator()(HANDLE *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rax
  signed int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WaitForSingleObject(a1[1], 0x1B7740u) == 258 )
    CAppManagerTelemetry::RotationManagerSuppressionTimeout();
  v8 = (__int64)*a1;
  v2 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v3 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v2;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v4);
    v4[2] = 0LL;
    v5 = v2;
    if ( v4 + 2 != &v8 )
    {
      v4[2] = v2;
      v2 = 0LL;
      v5 = 0LL;
    }
    *v4 = off_1803CFBD0;
    v3 = (__int64)v4;
  }
  v8 = v3;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v3 == 0 ? 0x8007000E : 0;
  if ( v3 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)*a1 + 18) + 72LL))(
           *((_QWORD *)*a1 + 18),
           v3,
           0LL);
  if ( v6 < 0 )
    *((_BYTE *)*a1 + 128) = 0;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
