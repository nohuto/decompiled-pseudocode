/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CA1EC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManager_CAudioSessionManager_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18006BD88 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManager_CAudioSessionManag_ea_18006BD88.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CAudioSessionManager>::~ComPtr<CAudioSessionManager>(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v1);
  }
  return v1;
}
