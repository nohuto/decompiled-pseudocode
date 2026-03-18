/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18019CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801EAB20 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  int ManipulationManager; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int updated; // eax
  __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  int v15; // r9d
  int v17; // [rsp+30h] [rbp-81h] BYREF
  int v18; // [rsp+34h] [rbp-7Dh] BYREF
  int v19; // [rsp+38h] [rbp-79h] BYREF
  int v20; // [rsp+3Ch] [rbp-75h] BYREF
  struct CManipulationManager *v21; // [rsp+40h] [rbp-71h] BYREF
  __int64 v22; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+78h] [rbp-39h]
  int v26; // [rsp+7Ch] [rbp-35h]
  int *v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+8Ch] [rbp-25h]
  int *v30; // [rsp+90h] [rbp-21h]
  int v31; // [rsp+98h] [rbp-19h]
  int v32; // [rsp+9Ch] [rbp-15h]
  int *v33; // [rsp+A0h] [rbp-11h]
  int v34; // [rsp+A8h] [rbp-9h]
  int v35; // [rsp+ACh] [rbp-5h]
  int *v36; // [rsp+B0h] [rbp-1h]
  int v37; // [rsp+B8h] [rbp+7h]
  int v38; // [rsp+BCh] [rbp+Bh]

  v21 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v21);
  v11 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ManipulationManager, 0x2B5u);
  }
  else
  {
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v10, a1, a2, a3, a4, a5);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x2BCu);
    }
    else
    {
      if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
      {
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v24 = &v22;
        v27 = &v17;
        v30 = &v18;
        v19 = a4;
        v33 = &v19;
        v36 = &v20;
        v22 = a1;
        v25 = 8;
        v17 = a2;
        v28 = v15;
        v18 = a3;
        v31 = v15;
        v34 = v15;
        v20 = a5;
        v37 = v15;
        TlgWrite(v14, &unk_1802B4D00, 0LL, 0LL, 7u, &pData);
      }
      if ( dword_1803089E0 )
        SetEvent(qword_180308398);
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
  return v11;
}
