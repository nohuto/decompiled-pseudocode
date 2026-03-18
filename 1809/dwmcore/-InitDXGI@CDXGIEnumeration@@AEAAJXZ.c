/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800802F8
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800806B0 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  __int64 v4; // rcx
  signed int v5; // ebx
  int SystemMetrics; // eax
  DWORD v7; // ecx
  HANDLE EventW; // rax
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int LastError; // eax
  int v21; // r9d
  signed int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-50h]
  struct CDXGIAdapterLimited *v24; // [rsp+30h] [rbp-40h] BYREF
  struct IDXGIAdapter *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  int v31; // [rsp+A8h] [rbp+38h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v2 = 0;
  v29 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v33 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 293;
    goto LABEL_74;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v26);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 299;
    goto LABEL_74;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v27);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 302;
    goto LABEL_74;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v28);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 305;
    goto LABEL_74;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v29);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 311;
    goto LABEL_74;
  }
  SystemMetrics = GetSystemMetrics(4096);
  v7 = SystemMetrics != 0;
  *((_DWORD *)this + 27) = v7;
  if ( SystemMetrics )
  {
    SetLastError(0);
    RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
    *((_QWORD *)this + 12) = RemoteSessionOcclusionEvent;
    if ( RemoteSessionOcclusionEvent )
      goto LABEL_9;
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v23 = 319;
    goto LABEL_56;
  }
  SetLastError(v7);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 12) = EventW;
  if ( !EventW )
  {
    v22 = GetLastError();
    v5 = v22;
    if ( v22 > 0 )
      v5 = (unsigned __int16)v22 | 0x80070000;
    v23 = 326;
LABEL_56:
    if ( v5 >= 0 )
      v5 = -2003304445;
    v31 = v5;
LABEL_60:
    v21 = v5;
    goto LABEL_75;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v31 = v3;
  v5 = v3;
  if ( v3 < 0 )
  {
    v23 = 328;
LABEL_74:
    v21 = v3;
LABEL_75:
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18029B8C0, 1u, v21, v23);
    goto LABEL_35;
  }
LABEL_9:
  v9 = v31;
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v33) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v33)(
           v33,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v25);
    v31 = v3;
    v5 = v3;
    if ( v3 < 0 )
    {
      v23 = 337;
      goto LABEL_74;
    }
    v3 = CDXGIAdapterLimited::Create(v25, v2, &v24);
    v31 = v3;
    v5 = v3;
    if ( v3 < 0 )
    {
      v23 = 341;
      goto LABEL_74;
    }
    v4 = *((unsigned int *)this + 22);
    v11 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v9 = v4 + 1;
    v5 = v11 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( v11 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)this + 21) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8, 1, &v24);
      v5 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4) = v24;
      *((_DWORD *)this + 22) = v9;
    }
    v31 = v5;
    if ( v5 < 0 )
    {
      v23 = 343;
      goto LABEL_60;
    }
    ReleaseInterface<IBitmapLock>((__int64 *)&v25);
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      v33 = 0LL;
    }
    ReleaseInterface<IBitmapLock>(&v30);
    v24 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v13 = v26;
    *((_QWORD *)this + 3) = v26;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v27;
    *((_QWORD *)this + 4) = v27;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = v28;
    *((_QWORD *)this + 5) = v28;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = v29;
    *((_QWORD *)this + 6) = v29;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_35:
    if ( v5 >= 0 )
      goto LABEL_36;
    goto LABEL_65;
  }
  v5 = -2003304291;
  v31 = -2003304291;
  MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18029B8C0, 1u, -2003304291, 0x164u);
LABEL_65:
  TranslateDXGIorD3DErrorInContext(v5, 5, &v31);
  v5 = v31;
LABEL_36:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v25 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v25->lpVtbl->Release)(v25);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)v5;
}
