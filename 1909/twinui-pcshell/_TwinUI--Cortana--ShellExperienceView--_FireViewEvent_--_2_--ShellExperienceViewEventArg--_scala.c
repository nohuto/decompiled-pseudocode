/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_ @ 0x180079010
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  __int64 v4; // rcx
  volatile int *v5; // rdx

  v4 = *((_QWORD *)a1 + 5);
  if ( v4 )
  {
    *((_QWORD *)a1 + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  WindowsDeleteString(*((HSTRING *)a1 + 4));
  *((_QWORD *)a1 + 4) = 0LL;
  if ( *((__int64 *)a1 + 3) < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
      2LL * *((_QWORD *)a1 + 3),
      v5);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
