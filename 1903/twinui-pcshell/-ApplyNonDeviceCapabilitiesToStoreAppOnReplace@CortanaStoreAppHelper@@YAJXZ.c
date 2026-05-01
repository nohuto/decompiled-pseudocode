/*
 * XREFs of ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8
 * Callers:
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x18008088C (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$Undocking_CapabilitiesToCache@AEAW4CapabilityFlags@CortanaCapabilities@@@CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAAXAEAW4CapabilityFlags@CortanaCapabilities@@@Z @ 0x1801C1DE4 (--$Undocking_CapabilitiesToCache@AEAW4CapabilityFlags@CortanaCapabilities@@@CortanaUndocking_App.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C4438 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4438.c)
 *     ??1CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4DD8 (--1CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEA.c)
 *     ?ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@CortanaCapabilities@@PEAPEAUHSTRING__@@@Z @ 0x1801C667C (-ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@Cortana.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z @ 0x1801C82B0 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801C82F4 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?StartActivity@CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801C8684 (-StartActivity@CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaProactiveTe.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C936C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

__int64 __fastcall CortanaStoreAppHelper::ApplyNonDeviceCapabilitiesToStoreAppOnReplace(CortanaStoreAppHelper *this)
{
  bool *v1; // r8
  unsigned int v2; // edi
  GUID *v3; // rsi
  int Data1; // ecx
  int HasCortanaCapabilities; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v12; // r8
  unsigned int v13; // r9d
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-DCh] BYREF
  HSTRING string; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v18[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace");
  v18[0] = &CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace *)v18);
  v2 = 0;
  v3 = (GUID *)&unk_1804EF620;
  v16 = 0;
  do
  {
    Data1 = v3->Data1;
    LOBYTE(v15) = 0;
    HasCortanaCapabilities = CortanaCapabilities::HasCortanaCapabilities(
                               Data1,
                               (enum CortanaCapabilities::CapabilityFlags *)&v15,
                               v1);
    v6 = HasCortanaCapabilities;
    if ( HasCortanaCapabilities < 0 )
    {
      v8 = 725LL;
      goto LABEL_16;
    }
    if ( (_BYTE)v15 )
    {
      v2 |= v3->Data1;
      v16 = v2;
    }
    v3 = (GUID *)((char *)v3 + 4);
  }
  while ( v3 != &GUID_6b8773dc_2e64_467a_9771_2e07caeae514 );
  CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::Undocking_CapabilitiesToCache<enum CortanaCapabilities::CapabilityFlags &>(
    (__int64)v18,
    (int *)&v16);
  HasCortanaCapabilities = CortanaStoreAppHelper::SetCortanaRegKey(
                             L"StoreCortanaCapabilityFlags",
                             (const unsigned __int16 *)v2,
                             0,
                             v7);
  v6 = HasCortanaCapabilities;
  if ( HasCortanaCapabilities >= 0 )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = CortanaStoreAppHelper::ConvertCapabilitiesFlagToCapabilitiesString(v2, &string);
    v6 = v9;
    if ( v9 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v9 = CortanaStoreAppHelper::SetCortanaRegKey(
             (CortanaStoreAppHelper *)L"StoreCortanaCapabilities",
             StringRawBuffer,
             v12,
             v13);
      v6 = v9;
      if ( v9 >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
        v6 = 0;
        goto LABEL_14;
      }
      v10 = 739LL;
    }
    else
    {
      v10 = 738LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_14:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_17;
  }
  v8 = 735LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)HasCortanaCapabilities);
LABEL_17:
  CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace::~CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace((CortanaProactiveTelemetry::CortanaUndocking_ApplyNonDeviceCapabilitiesToStoreAppOnReplace *)v18);
  return v6;
}
