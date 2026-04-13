/*
 * XREFs of ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x18009FE94
 * Callers:
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A13F0 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800A17E4 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180003660 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValue,
        const wchar_t *a3,
        _QWORD *a4)
{
  LSTATUS ValueW; // eax
  int v8; // ebx
  void *pvData; // rdi
  unsigned int v10; // eax
  const WCHAR *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  SIZE_T cb; // [rsp+70h] [rbp+18h] BYREF

  *a4 = 0LL;
  LODWORD(cb) = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 2u, 0LL, 0LL, (LPDWORD)&cb);
  v8 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v8 = ValueW;
  if ( v8 < 0 )
  {
    if ( v8 == -2147024894 )
      return 0;
  }
  else
  {
    pvData = CoTaskMemAlloc((unsigned int)cb);
    v10 = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 2u, 0LL, pvData, (LPDWORD)&cb);
    if ( v10 )
    {
      v11 = &Src;
      if ( lpValue )
        v11 = lpValue;
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xB8,
             (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
             (const char *)v10,
             (__int64)"RegKey: %ws %ws",
             (const char *)this,
             v11);
      if ( pvData )
        CoTaskMemFree(pvData);
    }
    else
    {
      *a4 = pvData;
    }
  }
  return (unsigned int)v8;
}
