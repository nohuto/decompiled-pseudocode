/*
 * XREFs of GetHolographicInputSession @ 0x18009CD58
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009E2E0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E490 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x18009F830 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006F4D4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BAA8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008B840 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x18009B998 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x18009C2EC (--1TraceSessionConfig@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  const char *v2; // r9
  unsigned __int64 v3; // r8
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  __int128 v10; // [rsp+88h] [rbp-80h]
  __int128 Src; // [rsp+98h] [rbp-70h] BYREF
  __m128i v12; // [rsp+A8h] [rbp-60h]
  __int64 v13; // [rsp+B8h] [rbp-50h]
  __int64 v14; // [rsp+C0h] [rbp-48h]
  __int64 v15; // [rsp+C8h] [rbp-40h]
  __int64 v16; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+D8h] [rbp-30h]
  WCHAR Buffer[264]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v7[2] = -2LL;
  v7[0] = a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v8) = 0;
  v10 = 0uLL;
  v12 = si128;
  LOWORD(Src) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  std::wstring::assign((char *)&v8, L"HolographicInput", 0x10uLL);
  v10 = xmmword_1801A6D70;
  v13 = 64LL;
  v14 = 0x810000002LL;
  v15 = 0x10000000002LL;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetTempPathW(0x104u, Buffer) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xE1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v2);
  v3 = -1LL;
  do
    ++v3;
  while ( Buffer[v3] );
  std::wstring::assign((char *)&Src, Buffer, v3);
  std::wstring::append((void **)&Src, L"\\DiagOutputDir\\HolographicInput.etl", 0x23uLL);
  v5 = 0;
  v6[0] = 0;
  LODWORD(v7[0]) = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v16,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    (int *)v7,
    v6,
    &v5);
  LODWORD(v7[0]) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v16,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v5,
    v6,
    (int *)v7);
  LODWORD(v7[0]) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v16,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v5,
    v6,
    (int *)v7);
  LODWORD(v7[0]) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v16,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v5,
    v6,
    (int *)v7);
  *(_OWORD *)a1 = v8;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v8) = 0;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 48) = Src;
  *(__m128i *)(a1 + 64) = v12;
  v12 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  *(_QWORD *)(a1 + 80) = v13;
  *(_QWORD *)(a1 + 88) = v14;
  *(_QWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 104) = v16;
  *(_OWORD *)(a1 + 112) = v17;
  v16 = 0LL;
  v17 = 0LL;
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)&v8);
  return a1;
}
