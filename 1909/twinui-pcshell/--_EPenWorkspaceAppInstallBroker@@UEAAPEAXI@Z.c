/*
 * XREFs of ??_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z @ 0x1800A1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPenWorkspaceAppInstallBroker@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A1960 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPenWorkspa.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 */

PenWorkspaceAppInstallBroker *__fastcall PenWorkspaceAppInstallBroker::`vector deleting destructor'(
        PenWorkspaceAppInstallBroker *this,
        char a2)
{
  volatile int *v4; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((_QWORD *)this + 10);
  winrt::hstring::~hstring((PenWorkspaceAppInstallBroker *)((char *)this + 72));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>(
    (__int64)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
