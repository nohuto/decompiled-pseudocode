/*
 * XREFs of ??_EPresentationReadyChangedEventArgs@@UEAAPEAXI@Z @ 0x18022D500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPenWorkspaceAppInstallBroker@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A1960 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPenWorkspa.c)
 */

PresentationReadyChangedEventArgs *__fastcall PresentationReadyChangedEventArgs::`vector deleting destructor'(
        PresentationReadyChangedEventArgs *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
