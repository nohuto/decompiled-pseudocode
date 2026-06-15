/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D8B9C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManager_CAudioSessionManager_unsigned_short_const___&__::_1_::dtor$2 @ 0x18006DA91 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManager_CAudioSessionManag_ea_18006DA91.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CAudioSessionManager>::~ComPtr<CAudioSessionManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(result);
  }
  return result;
}
