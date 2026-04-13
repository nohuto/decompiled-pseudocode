/*
 * XREFs of ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x1800262C4
 * Callers:
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002B710 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002B870 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002BA60 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002BD40 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003714 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
        const WCHAR *this,
        LPCWSTR lpValue,
        unsigned __int16 *a3,
        bool *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  *(_BYTE *)a3 = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 0xFFFFu, 0LL, 0LL, &v11);
  v8 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v8 = ValueW;
  if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147024894 )
  {
    *(_BYTE *)a3 = (v8 & 0x80000000) == 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xFD,
      (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
      (const char *)v8,
      (__int64)"RegKey: %ws %ws",
      (const char *)this,
      lpValue);
    return v8;
  }
}
