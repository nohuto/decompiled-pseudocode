/*
 * XREFs of ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18041FFEC
 * Callers:
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x1804202C0 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x18006DD30 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a2,
        bool *a3)
{
  int v4; // eax
  int Boolean; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h] BYREF
  RoVariant *v13; // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+38h] [rbp-48h]
  RoVariant *v15; // [rsp+40h] [rbp-40h] BYREF
  struct IInspectable *v16[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v16[1] = (struct IInspectable *)-2LL;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v12);
  Boolean = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)Boolean;
  }
  v13 = 0LL;
  v14 = 0;
  v8 = v12;
  v15 = (RoVariant *)&v13;
  v16[0] = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.InterfaceEnabled",
    0x20u,
    0x1Fu);
  Boolean = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, v18, v16);
  v18 = 0LL;
  RoVariant::Attach(v15, v16[0]);
  if ( Boolean < 0 )
  {
    v9 = 250LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)Boolean);
    RoVariant::~RoVariant((RoVariant *)&v13);
    goto LABEL_3;
  }
  v15 = v13;
  LODWORD(v16[0]) = v14;
  Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v15, v11);
  if ( Boolean < 0 )
  {
    v9 = 253LL;
    goto LABEL_8;
  }
  *a3 = v11[0] != 0;
  RoVariant::~RoVariant((RoVariant *)&v13);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
