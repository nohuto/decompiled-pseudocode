/*
 * XREFs of ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x1804202C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18041F6E8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18041FFEC (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x180420508 (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::OnDeviceUpdated(
        LPCRITICAL_SECTION lpCriticalSection,
        struct Windows::Devices::Enumeration::IDeviceWatcher *a2,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a3)
{
  int IsDeviceEnabled; // eax
  TwinUI::Lighting::AssistantLightManager *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v11; // [rsp+50h] [rbp+18h] BYREF
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  IsDeviceEnabled = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
                      a3,
                      &string);
  v7 = IsDeviceEnabled;
  if ( IsDeviceEnabled >= 0 )
  {
    IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(v6, a3, &v11);
    v7 = IsDeviceEnabled;
    if ( IsDeviceEnabled >= 0 )
    {
      if ( v11 )
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::AddDevice(
                            lpCriticalSection,
                            (unsigned __int64)string);
        v7 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v8 = 270LL;
          goto LABEL_5;
        }
      }
      else
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::RemoveDevice(lpCriticalSection, string);
        v7 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v8 = 274LL;
          goto LABEL_5;
        }
      }
      v7 = 0;
      goto LABEL_12;
    }
    v8 = 267LL;
  }
  else
  {
    v8 = 265LL;
  }
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
    (const char *)(unsigned int)IsDeviceEnabled);
LABEL_12:
  WindowsDeleteString(string);
  return v7;
}
