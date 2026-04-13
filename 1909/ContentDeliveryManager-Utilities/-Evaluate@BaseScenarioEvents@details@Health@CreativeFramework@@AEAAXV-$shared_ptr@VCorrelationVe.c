/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800277FC
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18002736C (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800274FC (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180027590 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180027710 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800337E0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180035AF4 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180035C90 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180035E48 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char *a2)
{
  _DWORD *v4; // rdi
  const WCHAR *v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int16 v8; // si
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r9d
  void **v16; // rax
  void **v17; // rax
  char *v18; // rdi
  char *v19; // rax
  __int16 v20; // r8
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  int v23; // r9d
  char v24; // cl
  char v25; // dl
  void **v26; // rax
  void **v27; // rax
  void **v28; // rax
  volatile signed __int32 *v29; // rbx
  LPDWORD pcbData; // [rsp+38h] [rbp-E0h]
  __int16 v31; // [rsp+98h] [rbp-80h] BYREF
  __int16 v32; // [rsp+9Ah] [rbp-7Eh] BYREF
  __int16 v33; // [rsp+9Ch] [rbp-7Ch] BYREF
  DWORD v34; // [rsp+A0h] [rbp-78h] BYREF
  void **v35; // [rsp+A8h] [rbp-70h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B0h] [rbp-68h] BYREF
  struct _FILETIME v37; // [rsp+B8h] [rbp-60h] BYREF
  char *v38; // [rsp+C0h] [rbp-58h] BYREF
  void **v39; // [rsp+C8h] [rbp-50h] BYREF
  void **v40; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-40h] BYREF
  char *v42; // [rsp+E0h] [rbp-38h] BYREF
  void **v43; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-28h] BYREF
  char *v45; // [rsp+F8h] [rbp-20h] BYREF
  void **v46; // [rsp+100h] [rbp-18h] BYREF
  void **v47; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v48[2]; // [rsp+110h] [rbp-8h] BYREF
  void *v49[2]; // [rsp+120h] [rbp+8h] BYREF
  __int64 v50; // [rsp+130h] [rbp+18h]
  unsigned __int64 v51; // [rsp+138h] [rbp+20h]
  void *v52[2]; // [rsp+140h] [rbp+28h] BYREF
  __int64 v53; // [rsp+150h] [rbp+38h]
  unsigned __int64 v54; // [rsp+158h] [rbp+40h]
  wchar_t Buffer[512]; // [rsp+168h] [rbp+50h] BYREF
  wchar_t Src[512]; // [rsp+568h] [rbp+450h] BYREF

  v48[1] = -2LL;
  v38 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v4 = (_DWORD *)((char *)this + 144);
  *(_WORD *)((char *)this + 253) = 256;
  v34 = 36;
  v5 = (const WCHAR *)((char *)this + 216);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v5, L"HealthEvaluation", 8u, 0LL, (char *)this + 144, &v34)
    || v34 <= 4
    || *(_BYTE *)v4 != 4 )
  {
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    memset_0((char *)this + 152, 0, 0x20uLL);
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v35 = (void **)*((_QWORD *)this + 19);
  v7 = (*(__int64 (__fastcall **)(CreativeFramework::Health::details::BaseScenarioEvents *))(*(_QWORD *)this + 8LL))(this);
  if ( (v7 & 2) != 0 )
    v8 = 2;
  else
    v8 = (v7 & 1) != 0;
  GetSystemTimeAsFileTime(&v37);
  v9 = v37.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v37) << 32);
  v10 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_WORD *)this + 81) != v8 || (v11 = *v10) == 0 )
  {
    *((_WORD *)this + 81) = v8;
    *((_BYTE *)this + 176) = 0;
    *v10 = v9;
    *((_BYTE *)this + 253) = 1;
    v11 = v9;
  }
  v12 = *((_BYTE *)this + 176);
  if ( v12 != 0xFF )
  {
    *((_BYTE *)this + 176) = ++v12;
    *((_BYTE *)this + 253) = 1;
  }
  if ( v8 != 2
    && ((unsigned int)(v11 - 2028888064)
      + ((unsigned __int64)((unsigned int)v11 + (HIDWORD(v11) << 32) + 144000000000LL) >> 32 << 32) > v9
     || v12 <= 3u) )
  {
    v8 = *((_WORD *)this + 80);
  }
  StringCchPrintfW(
    Buffer,
    512LL,
    L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u; %u }",
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 5),
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 21),
    *((_DWORD *)this + 22),
    *((_DWORD *)this + 23),
    *((_BYTE *)this + 96) != 0,
    *((_BYTE *)this + 97) != 0,
    *((_BYTE *)this + 98) != 0);
  v54 = 7LL;
  v53 = 0LL;
  LOWORD(v52[0]) = 0;
  if ( Buffer[0] )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Buffer[v13] );
  }
  std::wstring::assign(v52, Buffer);
  LODWORD(pcbData) = *((_DWORD *)this + 34);
  StringCchPrintfW(
    Src,
    512LL,
    L"{ %llu; %llu; %llu; %u }",
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    *((_QWORD *)this + 16),
    pcbData);
  v51 = 7LL;
  v50 = 0LL;
  LOWORD(v49[0]) = 0;
  if ( Src[0] )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
  }
  std::wstring::assign(v49, Src);
  v16 = v49;
  if ( v51 >= 8 )
    v16 = (void **)v49[0];
  v39 = v16;
  v17 = v52;
  if ( v54 >= 8 )
    v17 = (void **)v52[0];
  v40 = v17;
  v41 = v7;
  v31 = v8;
  v18 = (char *)this + 184;
  if ( *((_QWORD *)this + 26) < 8uLL )
    v19 = (char *)this + 184;
  else
    v19 = *(char **)v18;
  v42 = v19;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&v42,
    (unsigned int)&v31,
    (unsigned int)&v41,
    v15,
    (__int64)&v40,
    (__int64)&v39,
    *(_QWORD *)a2 + 8LL);
  v20 = *((_WORD *)this + 80);
  if ( *((_QWORD *)this + 19) <= *v10 )
  {
    v22 = 1LL;
  }
  else
  {
    v21 = *((_BYTE *)this + 177);
    v22 = 10LL;
    if ( v21 < 0xAu )
      v22 = v21;
  }
  v23 = (int)v35;
  if ( v20 != v8
    || !v35
    || (unsigned int)((_DWORD)v35 + 711573504 * v22)
     + (((unsigned int)v35 + 864000000000LL * v22 + ((unsigned __int64)v35 >> 32 << 32)) >> 32 << 32) <= v6 )
  {
    *((_WORD *)this + 80) = v8;
    *((_QWORD *)this + 19) = v6;
    if ( v20 == v8 )
    {
      v24 = *((_BYTE *)this + 177);
      v25 = v24 + 1;
      if ( v24 == -1 )
        v25 = -1;
    }
    else
    {
      v25 = 1;
    }
    *((_BYTE *)this + 177) = v25;
    *((_BYTE *)this + 253) = 1;
    v26 = v49;
    if ( *((_BYTE *)this + 248) )
    {
      if ( v51 >= 8 )
        v26 = (void **)v49[0];
      v35 = v26;
      v27 = v52;
      if ( v54 >= 8 )
        v27 = (void **)v52[0];
      v43 = v27;
      v44 = v7;
      v32 = v8;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v18 = *(char **)v18;
      v45 = v18;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v45,
        (unsigned int)&v32,
        (unsigned int)&v44,
        v23,
        (__int64)&v43,
        (__int64)&v35,
        *(_QWORD *)a2 + 8LL);
    }
    else
    {
      if ( v51 >= 8 )
        v26 = (void **)v49[0];
      v46 = v26;
      v28 = v52;
      if ( v54 >= 8 )
        v28 = (void **)v52[0];
      v47 = v28;
      v48[0] = v7;
      v33 = v8;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v18 = *(char **)v18;
      v38 = v18;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v38,
        (unsigned int)&v33,
        (unsigned int)v48,
        v23,
        (__int64)&v47,
        (__int64)&v46,
        *(_QWORD *)a2 + 8LL);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( v51 >= 8 )
    operator delete(v49[0]);
  v51 = 7LL;
  v50 = 0LL;
  LOWORD(v49[0]) = 0;
  if ( v54 >= 8 )
    operator delete(v52[0]);
  v54 = 7LL;
  v53 = 0LL;
  LOWORD(v52[0]) = 0;
  v29 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
  if ( v29 && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
    if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
  }
}
