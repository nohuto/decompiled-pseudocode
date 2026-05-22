/*
 * XREFs of ??_EHomeGestureReadyChangedEventArgs@@UEAAPEAXI@Z @ 0x180110320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18010FD84 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClie.c)
 */

HomeGestureReadyChangedEventArgs *__fastcall HomeGestureReadyChangedEventArgs::`vector deleting destructor'(
        HomeGestureReadyChangedEventArgs *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
