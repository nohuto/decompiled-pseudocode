/*
 * XREFs of ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140008088 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     IsWerReportCreatePresent @ 0x1400046CC (IsWerReportCreatePresent.c)
 *     memmove_0 @ 0x140004A73 (memmove_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140006928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x140006964 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140006A4C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140006F1C (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x1400072FC (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140008230 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     _TlgWrite @ 0x1400085D0 (_TlgWrite.c)
 *     ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x14000866C (--1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x140008724 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000877C (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(__int64 a1, int a2, char a3)
{
  const unsigned __int16 *v4; // r15
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v8; // rcx
  const unsigned __int16 *VidPnOwner; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const unsigned __int16 *v13; // r14
  HANDLE CurrentProcess; // rax
  HRESULT v15; // eax
  __int64 v16; // rcx
  char v17; // r12
  char v18; // bl
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  EVENT_DATA_DESCRIPTOR *p_value; // rdi
  const WCHAR *Ptr; // rbx
  HRESULT v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  const unsigned __int16 *v28; // r8
  const GUID *v29; // r8
  const GUID *v30; // r9
  HRESULT v31; // eax
  __int64 v32; // rcx
  bool v33; // si
  bool v34; // [rsp+40h] [rbp-C0h] BYREF
  RPC_WSTR StringUuid; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v37; // [rsp+60h] [rbp-A0h]
  HREPORT hReportHandle; // [rsp+70h] [rbp-90h] BYREF
  bool v39; // [rsp+78h] [rbp-88h]
  char v40[32]; // [rsp+80h] [rbp-80h] BYREF
  char v41[32]; // [rsp+A0h] [rbp-60h] BYREF
  char v42[32]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR value; // [rsp+E0h] [rbp-20h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-10h]
  RPC_WSTR *p_StringUuid; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  UUID *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  bool *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]

  if ( a2 )
  {
    if ( a2 == 1 )
      v4 = L"LongPowerButtonHold";
    else
      v4 = L"Unknown";
  }
  else
  {
    v4 = L"Hotkey";
  }
  hReportHandle = 0LL;
  v39 = IsWerReportCreatePresent() != 0;
  std::wstring::wstring(v40, L"WindowsBlackScreenDiagnosticsV1", v5);
  std::wstring::wstring(v41, L"Black Screen - User Reported", v6);
  std::wstring::wstring(v42, L"The user has invoked the Black Screen Diagnostics Tool to generate this report", v7);
  LODWORD(StringUuid) = 0;
  VidPnOwner = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(v8);
  BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(v11, v10, v12, (int *)&StringUuid);
  switch ( (_DWORD)StringUuid )
  {
    case 1:
      v13 = L"BlackBits";
      break;
    case 2:
      v13 = L"ColorBits";
      break;
    case 3:
      v13 = L"CaptureBitsFailure";
      break;
    case 4:
      v13 = L"FileMappingFailure";
      break;
    case 5:
      v13 = L"CheckBlackFailure";
      break;
    default:
      v13 = L"Unknown";
      break;
  }
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
  {
    CurrentProcess = GetCurrentProcess();
    v15 = WerReportAddDump(hReportHandle, CurrentProcess, 0LL, WerDumpTypeHeapDump, 0LL, 0LL, 0);
    if ( v15 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v16, (unsigned int)v15, 0LL);
  }
  if ( (a3 & 1) != 0 )
  {
    LOWORD(value.Ptr) = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = 1;
    StringUuid = 0LL;
    v18 = 0;
    if ( !UuidToStringW(&Uuid, &StringUuid) )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( StringUuid[v20] );
      if ( v20 > si128.m128i_i64[1] )
      {
        std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
          (__int64)&value,
          v20,
          v19,
          StringUuid);
      }
      else
      {
        v21 = 2 * v20;
        si128.m128i_i64[0] = v20;
        p_value = &value;
        if ( si128.m128i_i64[1] >= 8uLL )
          p_value = (EVENT_DATA_DESCRIPTOR *)value.Ptr;
        memmove_0(p_value, StringUuid, 2 * v20);
        *(_WORD *)((char *)&p_value->Ptr + v21) = 0;
      }
      RpcStringFreeW(&StringUuid);
      Ptr = (const WCHAR *)&value;
      if ( si128.m128i_i64[1] >= 8uLL )
        Ptr = (const WCHAR *)value.Ptr;
      if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
      {
        v24 = WerRegisterCustomMetadata(L"BlackScreenInstanceGuid", Ptr);
        if ( v24 < 0 )
          MicrosoftTelemetryAssertTriggeredArgs(v25, (unsigned int)v24, 0LL);
      }
      v18 = 1;
    }
    if ( si128.m128i_i64[1] >= 8uLL )
      std::_Deallocate<16,0>((char *)value.Ptr, 2 * si128.m128i_i64[1] + 2);
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    0,
    VidPnOwner);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    1u,
    L"Unknown");
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    2u,
    v13);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    3u,
    v4);
  v37 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v36[0]) = 0;
  BlackScreenDiagnostics::GetCurrentProcessVersionInfo(v36, v26, v27);
  v28 = (const unsigned __int16 *)v36;
  if ( v37.m128i_i64[1] >= 8uLL )
    v28 = v36[0];
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    4u,
    v28);
  LODWORD(StringUuid) = 13;
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    WerReportSubmit(hReportHandle, WerConsentNotAsked, 4u, (PWER_SUBMIT_RESULT)&StringUuid);
  if ( hProvider > 5u
    && (qword_140010010 & 0x800000000000LL) != 0
    && (qword_140010018 & 0x800000000000LL) == qword_140010018 )
  {
    StringUuid = (RPC_WSTR)50331648;
    p_StringUuid = &StringUuid;
    v46 = 8LL;
    v47 = &Uuid;
    v48 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14000B8B9, v29, v30, 4u, &value);
  }
  if ( v18 )
  {
    if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    {
      v31 = WerUnregisterCustomMetadata(L"BlackScreenInstanceGuid");
      if ( v31 < 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v32, (unsigned int)v31, 0LL);
    }
  }
  if ( v17 )
  {
    v33 = (a3 & 2) == 0;
    v34 = v33;
    if ( hProvider > 5u
      && (qword_140010010 & 0x800000000000LL) != 0
      && (qword_140010018 & 0x800000000000LL) == qword_140010018 )
    {
      StringUuid = (RPC_WSTR)50331648;
      p_StringUuid = &StringUuid;
      v49 = &v34;
      v46 = 8LL;
      v47 = &Uuid;
      v48 = 16LL;
      v50 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14000B8FE, v29, v30, 5u, &value);
      v33 = v34;
    }
    BlackScreenDiagnostics::TriggerGraphicsCollection(v33);
  }
  if ( v37.m128i_i64[1] >= 8uLL )
    std::_Deallocate<16,0>((char *)v36[0], 2 * v37.m128i_i64[1] + 2);
  v37 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v36[0]) = 0;
  BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting((BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle);
}
