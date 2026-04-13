/*
 * XREFs of _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$17 @ 0x1800CEC75
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800305B8 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

void __fastcall ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor_17(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>((struct std::ios_base *)(a2 + 280));
  }
}
