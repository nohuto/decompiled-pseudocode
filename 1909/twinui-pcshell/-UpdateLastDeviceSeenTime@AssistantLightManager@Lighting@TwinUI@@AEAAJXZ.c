/*
 * XREFs of ?UpdateLastDeviceSeenTime@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180420938
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18041F6E8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::UpdateLastDeviceSeenTime(
        TwinUI::Lighting::AssistantLightManager *this)
{
  LSTATUS v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+8h] BYREF
  struct _FILETIME pvData; // [rsp+58h] [rbp+10h] BYREF

  SystemTimeAsFileTime = (struct _FILETIME)this;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  pvData = SystemTimeAsFileTime;
  v1 = SHRegSetValue(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"LightingDeviceLastSeenTime",
         64,
         0xBu,
         &pvData,
         8u);
  v2 = v1;
  if ( v1 > 0 )
    v2 = (unsigned __int16)v1 | 0x80070000;
  if ( (v2 & 0x80000000) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
    (const char *)v2);
  return v2;
}
