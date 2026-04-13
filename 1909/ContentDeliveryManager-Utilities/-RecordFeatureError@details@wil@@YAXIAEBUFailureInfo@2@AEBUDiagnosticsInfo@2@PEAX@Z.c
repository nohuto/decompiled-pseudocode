/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180009644
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180009ECC (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800022FC (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v6; // esi
  bool (*v7)(void *, unsigned int *, char *, unsigned __int64); // r10
  char v8; // al
  char v9; // cl
  _BYTE *v10; // rax
  char v11; // al
  char v12; // cl
  const char *v13; // r9
  _BYTE *v14; // rax
  const char *ModuleName; // rax
  char v16; // cl
  _BYTE *v17; // rax
  void (*v18)(unsigned int, const struct FEATURE_ERROR *); // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+34h] [rbp-CCh]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  _BYTE *v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v25; // [rsp+58h] [rbp-A8h]
  _BYTE *v26; // [rsp+60h] [rbp-A0h]
  __int16 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  const char *v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  _BYTE v33[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v34[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v35[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v36[104]; // [rsp+158h] [rbp+58h] BYREF

  v6 = (unsigned int)this;
  memset_0(&v19, 0, 0x68uLL);
  v7 = wil::details::g_pfnGetModuleInformation;
  v19 = *(_DWORD *)(a2 + 4);
  v20 = *(_WORD *)(a2 + 56);
  v21 = *(_QWORD *)(a2 + 48);
  v33[0] = 0;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
           0LL,
           0LL,
           v33,
           64LL);
    v7 = wil::details::g_pfnGetModuleInformation;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  v34[0] = 0;
  v10 = v33;
  v24 = 0;
  if ( !v9 )
    v10 = v22;
  v22 = v10;
  v23 = *(_QWORD *)(a2 + 120);
  if ( v7 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v7)(*(_QWORD *)(a2 + 136), &v24, v34, 64LL);
    v7 = wil::details::g_pfnGetModuleInformation;
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(const char **)(a2 + 16);
  v14 = v34;
  if ( !v12 )
    v14 = v25;
  v25 = v14;
  if ( v13 && *(_WORD *)v13 )
  {
    wil::details::StringCchPrintfA((wil::details *)v36, (char *)0x60, "%ws", v13);
    v7 = wil::details::g_pfnGetModuleInformation;
    v26 = v36;
  }
  v27 = *((_WORD *)a3 + 12);
  v28 = *((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    ModuleName = wil::details::g_pfnGetModuleName();
    v7 = wil::details::g_pfnGetModuleInformation;
    v29 = ModuleName;
  }
  v35[0] = 0;
  v30 = 0;
  if ( v7 )
    v16 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v7)(*(_QWORD *)a3, &v30, v35, 64LL);
  else
    v16 = 0;
  v17 = v35;
  if ( !v16 )
    v17 = v31;
  v31 = v17;
  v32 = *((_QWORD *)a3 + 2);
  v18 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v18 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(_QWORD, int *))v18)(v6, &v19);
}
