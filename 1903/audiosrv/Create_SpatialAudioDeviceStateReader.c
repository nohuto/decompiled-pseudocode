/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x180038F00
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038C1C (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180058C3C (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180058EC8 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003916C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x180062CE4 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateReader(
        unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        const GUID *a4)
{
  char *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  char *v10; // rbx
  char *v11; // rsi
  __int64 v12; // rcx
  LPUNKNOWN v13; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  int v15; // edi
  char *v16; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-C8h] BYREF
  char *v20; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  char *v24; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  const char *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  int *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+B8h] [rbp-50h] BYREF
  const char *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  v20 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = (char *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v7;
    if ( v7 )
    {
      memset_0(v7 + 8, 0, 0x208uLL);
      *((_QWORD *)v10 + 66) = 0LL;
      *((_QWORD *)v10 + 67) = 0LL;
      v11 = v10 + 568;
      *(_QWORD *)v10 = &SpatialAudioStateIO::`vftable';
      ppunkMarshal = 0LL;
      *((_QWORD *)v10 + 68) = 0LL;
      *((_QWORD *)v10 + 69) = 0LL;
      *((_QWORD *)v10 + 70) = 0LL;
      *((_QWORD *)v10 + 72) = &Microsoft::WRL::FtmBase::`vftable';
      *((_QWORD *)v10 + 75) = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v12 = *((_QWORD *)v10 + 75);
        if ( v12 )
        {
          *((_QWORD *)v10 + 75) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &GUID_00000003_0000_0000_c000_000000000046,
          v10 + 600);
      }
      v13 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
      }
      v14 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
      *((_QWORD *)v10 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v10 + 153) = 1;
      if ( v14 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v14 + 8LL))(v14);
      v24 = v10;
      *(_QWORD *)v10 = &SpatialAudioDeviceStateReader::`vftable';
      *(_QWORD *)v11 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
      *((_QWORD *)v10 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v15 = SpatialAudioIO::Initialize((SpatialAudioIO *)v10, a1, a2);
      if ( v15 < 0 || (v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10), v15 < 0) )
      {
        Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v24);
      }
      else
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v10 + 568);
        v20 = v10;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v10 + 568);
        v15 = 0;
      }
      LODWORD(v18) = v15;
      if ( v15 >= 0 )
      {
        v15 = (**((__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v20 + 71))(
                (__int64)(v20 + 568),
                &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
                a3);
        goto LABEL_16;
      }
    }
    else
    {
      v15 = -2147024882;
      LODWORD(v18) = -2147024882;
    }
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v34 = 37LL;
      v33 = "Create_SpatialAudioDeviceStateReader";
      v35 = &v23;
      v37 = &v18;
      LODWORD(v23) = 53;
      v36 = 4LL;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v8, v9, 5u, &v32);
    }
  }
  else
  {
    v15 = -2147024809;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v27 = 37LL;
      v26 = "Create_SpatialAudioDeviceStateReader";
      v28 = &v21;
      v30 = &v22;
      v21 = 48;
      v29 = 4LL;
      v22 = -2147024809;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, 0LL, a4, 5u, &pData);
    }
  }
LABEL_16:
  if ( v20 )
  {
    v16 = v20 + 568;
    v20 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v15;
}
