/*
 * XREFs of ??_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z @ 0x18001F760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180015854 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificati.c)
 */

HSTRING *__fastcall ContentManagement::AppInstallInfoRecordImpl::`vector deleting destructor'(HSTRING *this, char a2)
{
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
