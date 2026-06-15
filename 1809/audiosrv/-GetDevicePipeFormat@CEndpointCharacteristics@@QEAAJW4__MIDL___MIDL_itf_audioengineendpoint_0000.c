/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800348C0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800D2770 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  BYTE *v12; // rbx
  BYTE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  struct tWAVEFORMATEX *v17; // rax
  struct tWAVEFORMATEX *v18; // rdi
  int refreshed; // ebx
  __int64 v21; // rdx
  const GUID *v22; // r8
  const GUID *v23; // r9
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-91h] BYREF
  int v25; // [rsp+50h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+58h] [rbp-71h] BYREF
  __int128 v27; // [rsp+68h] [rbp-61h]
  __int64 v28; // [rsp+78h] [rbp-51h]
  __int128 v29; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-31h] BYREF
  const char *v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  int *v34; // [rsp+C8h] [rbp-1h]
  __int64 v35; // [rsp+D0h] [rbp+7h]
  struct _RTL_CRITICAL_SECTION **v36; // [rsp+D8h] [rbp+Fh]
  __int64 v37; // [rsp+E0h] [rbp+17h]

  v28 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v26 = v8;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v27 = (__int128)*a3;
  v9 = 0;
  while ( 1 )
  {
    v10 = qword_1801B2590[2 * v9] - v27;
    if ( !v10 )
      v10 = qword_1801B2590[2 * v9 + 1] - *((_QWORD *)&v27 + 1);
    if ( !v10 )
      break;
    if ( ++v9 >= 8 )
    {
      refreshed = -2147023728;
      goto LABEL_26;
    }
  }
  v29 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  v11 = 2;
  if ( a2 == eKeywordDetectorConnector )
    v11 = 602;
  v30 = v9 + v11;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &v29,
         &pvar,
         v27) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (v12 = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( refreshed < 0 )
      goto LABEL_26;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &v29,
           &pvar) < 0
      || pvar.vt != 65
      || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
LABEL_36:
      refreshed = -2004287480;
      goto LABEL_26;
    }
    v12 = pvar.bstrblobVal.pData;
  }
  v13 = v12;
  if ( !v12 || (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v12) < 0 )
    goto LABEL_36;
  if ( ((*(_WORD *)v12 - 1) & 0xFFFD) != 0 )
  {
    if ( *(_WORD *)v12 != 0xFFFE )
      goto LABEL_36;
    v14 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v12 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v12 + 3) )
      v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v12 + 4);
    if ( v14 )
    {
      v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v12 + 3);
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v12 + 3) )
        v15 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v12 + 4);
      if ( v15 )
        goto LABEL_36;
    }
  }
  v16 = *((unsigned __int16 *)v12 + 8);
  v17 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v16 + 18);
  v18 = v17;
  if ( v17 )
  {
    memcpy_0(v17, v13, v16 + 18);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
  }
  *a5 = v18;
LABEL_26:
  PropVariantClear((PROPVARIANT *)&pvar);
  LODWORD(v26) = refreshed;
  v25 = 6688;
  if ( refreshed < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    v32 = "CEndpointCharacteristics::GetDevicePipeFormat";
    v33 = 46LL;
    v34 = &v25;
    v35 = v21;
    v36 = &v26;
    v37 = v21;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801751C9, v22, v23, 5u, &pData);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)refreshed;
}
