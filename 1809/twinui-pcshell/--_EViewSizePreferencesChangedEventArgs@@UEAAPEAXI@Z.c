/*
 * XREFs of ??_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z @ 0x1801BD180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801194A8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAUIViewWr.c)
 */

ViewSizePreferencesChangedEventArgs *__fastcall ViewSizePreferencesChangedEventArgs::`vector deleting destructor'(
        ViewSizePreferencesChangedEventArgs *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
