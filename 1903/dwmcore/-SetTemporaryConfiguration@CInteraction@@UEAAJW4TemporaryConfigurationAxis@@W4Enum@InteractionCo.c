/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801D7E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        int a5)
{
  CComposition *v5; // rbx
  signed int ManipulationManager; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  signed int v13; // eax
  __int64 v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  int v16; // r9d
  unsigned __int8 cData; // [rsp+20h] [rbp-A1h]
  struct CManipulationManager *v19; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-75h] BYREF
  int v22; // [rsp+50h] [rbp-71h] BYREF
  int v23; // [rsp+54h] [rbp-6Dh] BYREF
  __int64 v24; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-41h]
  int v27; // [rsp+88h] [rbp-39h]
  int v28; // [rsp+8Ch] [rbp-35h]
  int *v29; // [rsp+90h] [rbp-31h]
  int v30; // [rsp+98h] [rbp-29h]
  int v31; // [rsp+9Ch] [rbp-25h]
  int *v32; // [rsp+A0h] [rbp-21h]
  int v33; // [rsp+A8h] [rbp-19h]
  int v34; // [rsp+ACh] [rbp-15h]
  int *v35; // [rsp+B0h] [rbp-11h]
  int v36; // [rsp+B8h] [rbp-9h]
  int v37; // [rsp+BCh] [rbp-5h]
  int *v38; // [rsp+C0h] [rbp-1h]
  int v39; // [rsp+C8h] [rbp+7h]
  int v40; // [rsp+CCh] [rbp+Bh]

  v5 = *(CComposition **)(a1 + 24);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  ManipulationManager = CComposition::GetManipulationManager(v5, &v19);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ManipulationManager, 0x2B3u, 0LL);
  }
  else
  {
    cData = a4;
    v13 = (*(__int64 (__fastcall **)(struct CManipulationManager *, __int64, _QWORD, _QWORD, unsigned __int8, int))(*(_QWORD *)v19 + 88LL))(
            v19,
            a1,
            a2,
            a3,
            cData,
            a5);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2BAu, 0LL);
    }
    else
    {
      if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
      {
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v26 = &v24;
        v29 = (int *)&v20;
        v32 = (int *)&v21;
        v22 = a4;
        v35 = &v22;
        v38 = &v23;
        v24 = a1;
        v27 = 8;
        v20 = a2;
        v30 = v16;
        v21 = a3;
        v33 = v16;
        v36 = v16;
        v23 = a5;
        v39 = v16;
        TlgWrite(v15, &unk_1802DC3FC, 0LL, 0LL, 7u, &pData);
      }
      if ( dword_180340480 )
        SetEvent(hEvent);
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  return v12;
}
