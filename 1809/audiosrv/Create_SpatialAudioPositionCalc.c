/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x180041A50
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041630 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18012C15C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  char *v5; // rbx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rcx
  LPUNKNOWN v9; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  int v11; // esi
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  const char *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  int *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v26; // [rsp+B8h] [rbp-50h] BYREF
  const char *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]

  v15 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v15 = 0LL;
    v5 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      ppunkMarshal = 0LL;
      *((_QWORD *)v5 + 1) = &Microsoft::WRL::FtmBase::`vftable';
      *((_QWORD *)v5 + 4) = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v8 = *((_QWORD *)v5 + 4);
        if ( v8 )
        {
          *((_QWORD *)v5 + 4) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &GUID_00000003_0000_0000_c000_000000000046,
          v5 + 32);
      }
      v9 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
      }
      v10 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
      *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v5 + 11) = 1;
      if ( v10 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
      *(_QWORD *)v5 = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
      *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 48), 0, 0);
      v11 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v5)(
              v5,
              &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
              &v15);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      LODWORD(v13) = v11;
      if ( v11 >= 0 )
      {
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(
                v15,
                &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
                a1);
        goto LABEL_13;
      }
    }
    else
    {
      v11 = -2147024882;
      LODWORD(v13) = -2147024882;
    }
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v28 = 32LL;
      v27 = "Create_SpatialAudioPositionCalc";
      v29 = &v18;
      v31 = &v13;
      v18 = 156;
      v30 = 4LL;
      v32 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v6, v7, 5u, &v26);
    }
  }
  else
  {
    v11 = -2147024809;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v21 = 32LL;
      v20 = "Create_SpatialAudioPositionCalc";
      v22 = &v16;
      v24 = &v17;
      v16 = 151;
      v23 = 4LL;
      v17 = -2147024809;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, a3, a4, 5u, &pData);
    }
  }
LABEL_13:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v11;
}
