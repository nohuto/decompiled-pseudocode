/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800A7C18
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800A7FBC (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  __int64 v4; // rcx
  signed int v5; // ebx
  int SystemMetrics; // eax
  HANDLE EventW; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int v21; // eax
  unsigned int v22; // r9d
  signed int LastError; // eax
  unsigned int v24; // [rsp+20h] [rbp-50h]
  struct CDXGIAdapterLimited *v25; // [rsp+30h] [rbp-40h] BYREF
  struct IDXGIAdapter *v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h] BYREF
  int v32; // [rsp+A8h] [rbp+38h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v2 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v34 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v32 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v24 = 291;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v27);
  v32 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v24 = 297;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v28);
  v32 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v24 = 300;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v29);
  v32 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v24 = 303;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v30);
  v32 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v24 = 309;
LABEL_71:
    v22 = v3;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802BFEC8, 1u, v22, v24, 0LL);
    goto LABEL_33;
  }
  SystemMetrics = GetSystemMetrics(4096);
  *((_DWORD *)this + 27) = SystemMetrics != 0;
  if ( !SystemMetrics )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 12) = EventW;
    if ( EventW )
    {
      v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
             ppFactory,
             EventW,
             (char *)this + 104);
      v32 = v3;
      v5 = v3;
      if ( v3 >= 0 )
        goto LABEL_9;
      v24 = 326;
      goto LABEL_71;
    }
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v24 = 324;
LABEL_54:
    if ( v5 >= 0 )
      v5 = -2003304445;
    v32 = v5;
LABEL_57:
    v22 = v5;
    goto LABEL_72;
  }
  SetLastError(0);
  RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
  *((_QWORD *)this + 12) = RemoteSessionOcclusionEvent;
  if ( !RemoteSessionOcclusionEvent )
  {
    v21 = GetLastError();
    v5 = v21;
    if ( v21 > 0 )
      v5 = (unsigned __int16)v21 | 0x80070000;
    v24 = 317;
    goto LABEL_54;
  }
LABEL_9:
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v34) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v34)(
           v34,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v26);
    v32 = v3;
    v5 = v3;
    if ( v3 < 0 )
    {
      v24 = 335;
      goto LABEL_71;
    }
    v3 = CDXGIAdapterLimited::Create(v26, v2, &v25);
    v32 = v3;
    v5 = v3;
    if ( v3 < 0 )
    {
      v24 = 339;
      goto LABEL_71;
    }
    v9 = *((_DWORD *)this + 22);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v10 <= *((_DWORD *)this + 21) )
      {
        v11 = v9;
        v12 = *((_QWORD *)this + 8);
        v5 = 0;
        v32 = 0;
        *(_QWORD *)(v12 + 8 * v11) = v25;
        *((_DWORD *)this + 22) = v10;
        goto LABEL_15;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8, 1, &v25);
      v5 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v13, 0xC3u, 0LL);
    }
    v32 = v5;
    if ( v5 < 0 )
    {
      v24 = 341;
      goto LABEL_57;
    }
LABEL_15:
    ReleaseInterface<IBitmapLock>((__int64 *)&v26);
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v34 = 0LL;
    }
    ReleaseInterface<IBitmapLock>(&v31);
    ++v2;
    v25 = 0LL;
  }
  if ( !v2 )
  {
    v5 = -2003304291;
    v32 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BFEC8, 1u, 0x8898009D, 0x162u, 0LL);
LABEL_62:
    TranslateDXGIorD3DErrorInContext(v5, 5, &v32);
    v5 = v32;
    goto LABEL_34;
  }
  v14 = v27;
  *((_QWORD *)this + 3) = v27;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = v28;
  *((_QWORD *)this + 4) = v28;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v29;
  *((_QWORD *)this + 5) = v29;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = v30;
  *((_QWORD *)this + 6) = v30;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v18 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 8LL))(v18);
LABEL_33:
  if ( v5 < 0 )
    goto LABEL_62;
LABEL_34:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v26 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v26->lpVtbl->Release)(v26);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)v5;
}
