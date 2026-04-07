/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180029454
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18002B5AC (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800297B8 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  void *v14; // r10
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  struct IDXGIAdapter *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  struct CDWMDXGIAdapter *v22[2]; // [rsp+50h] [rbp-10h] BYREF
  void *ppFactory; // [rsp+98h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v18 = 0LL;
  v2 = 0;
  v19 = 0LL;
  v22[0] = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v17 = 254;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    v17 = 260;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v25);
  v4 = v3;
  if ( v3 < 0 )
  {
    v17 = 263;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v17 = 266;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v17 = 272;
LABEL_50:
    v16 = v3;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDC88, 1u, v16, v17);
LABEL_34:
    if ( ppFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
    v13 = v19;
    v12 = v18;
    v11 = v25;
    v10 = v24;
    goto LABEL_37;
  }
  v5 = (unsigned int)ppFactory;
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v21) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v21)(
           v21,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v20);
    v4 = v3;
    if ( v3 < 0 )
    {
      v17 = 280;
      goto LABEL_50;
    }
    v3 = CDWMDXGIAdapter::Create(v20, v2, v22);
    v4 = v3;
    if ( v3 < 0 )
    {
      v17 = 284;
      goto LABEL_50;
    }
    v7 = *((unsigned int *)this + 20);
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v5 = v7 + 1;
    v4 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v5 > *((_DWORD *)this + 19) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, v22);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(struct CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8 * v7) = v22[0];
      *((_DWORD *)this + 20) = v5;
    }
    if ( v4 < 0 )
    {
      v17 = 286;
LABEL_52:
      v16 = v4;
      goto LABEL_53;
    }
    if ( v20 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v20->lpVtbl->Release)(v20);
      v20 = 0LL;
    }
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v21 = 0LL;
    }
    v22[0] = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v17 = 299;
    goto LABEL_52;
  }
  v10 = v24;
  *((_QWORD *)this + 3) = v24;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v10 = v24;
  }
  v11 = v25;
  *((_QWORD *)this + 4) = v25;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v10 = v24;
    v11 = v25;
  }
  v12 = v18;
  *((_QWORD *)this + 5) = v18;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, v6, v11);
    v10 = v24;
    v11 = v25;
    v12 = v18;
  }
  v13 = v19;
  *((_QWORD *)this + 6) = v19;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v10 = v24;
    v11 = v25;
    v12 = v18;
    v13 = v19;
  }
  v14 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v14 )
  {
    (*(void (__fastcall **)(void *, __int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, v13, v11, v12);
    goto LABEL_34;
  }
LABEL_37:
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v13, v11, v12);
    v11 = v25;
    v12 = v18;
    v13 = v19;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v13);
    v12 = v18;
    v13 = v19;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v13);
    v13 = v19;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v20 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v20->lpVtbl->Release)(v20);
  return (unsigned int)v4;
}
