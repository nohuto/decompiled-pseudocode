/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008080
 * Callers:
 *     <none>
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140008810 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D44 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002 *a8)
{
  const GUID *v11; // r9
  int v12; // ebx
  void *v13; // rdi
  int v14; // r14d
  struct _GUID *v15; // rcx
  __int64 v17; // rax
  HRESULT v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _GUID *v19; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v21; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  struct IMMDevice *v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp-90h] BYREF
  APOInitSystemEffects2 v26; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+F0h] [rbp-10h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+F8h] [rbp-8h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+100h] [rbp+0h]
  __int64 pReserved; // [rsp+108h] [rbp+8h]
  void *pDeviceCollection; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  HRESULT *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]

  v19 = a3;
  ppv = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  memset_0(&v26, 0, sizeof(v26));
  if ( !a2 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 11) )
    return 2147942414LL;
  *(_DWORD *)a8 = 0;
  v18 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v12 = v18;
  if ( v18 < 0 )
    goto LABEL_42;
  v13 = v20;
  if ( v20 != ppv )
  {
    if ( ppv )
      (**(void (__fastcall ***)(LPVOID, GUID *, void **))ppv)(ppv, &GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8, &v20);
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( !v20 )
  {
    v12 = -2147467262;
    v18 = -2147467262;
    goto LABEL_42;
  }
  v14 = 1;
  (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v20 + 88LL))(v20, 1LL);
  v18 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v24);
  v12 = v18;
  if ( v18 < 0 )
    goto LABEL_42;
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v21);
  v18 = v12;
  if ( v12 < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_21;
    v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &v23);
    if ( v18 < 0 )
    {
      v12 = 0;
      v18 = 0;
      goto LABEL_22;
    }
  }
  v25 = *a4;
  v18 = FillAPOInitSystemEffectsStructure(v24, v19, &v25, a5, a6, &v26);
  v12 = v18;
  if ( v18 < 0 )
    goto LABEL_42;
  if ( v21 )
  {
    v18 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            88LL,
            &v26);
    v12 = v18;
    if ( v18 < 0 )
      goto LABEL_42;
    goto LABEL_15;
  }
  if ( v23 )
  {
    memset_0((char *)&pData.Ptr + 4, 0, 0x34uLL);
    v28 = *(_DWORD *)&v26.APOInit.clsid.Data4[4];
    pAPOEndpointProperties = v26.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v26.pAPOSystemEffectsProperties;
    pReserved = (__int64)v26.pReserved;
    pDeviceCollection = v26.pDeviceCollection;
    v17 = *((_QWORD *)this + 1);
    pData = *(EVENT_DATA_DESCRIPTOR *)&v26.APOInit.cbSize;
    LODWORD(pData.Ptr) = 56;
    v18 = (*(__int64 (__fastcall **)(char *, __int64, EVENT_DATA_DESCRIPTOR *))(v17 + 48))(
            (char *)this + 8,
            56LL,
            &pData);
    v12 = v18;
    if ( v18 < 0 )
    {
LABEL_42:
      if ( (unsigned int)hProvider > 2 )
      {
        pReserved = 36LL;
        pAPOSystemEffectsProperties = (IPropertyStore *)"CAPOWrapperSrv::InitializeAPORemote";
        pDeviceCollection = &v19;
        v34 = &v18;
        LODWORD(v19) = 153;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14006FD11, 0LL, v11, 5u, &pData);
        v12 = v18;
      }
      goto LABEL_22;
    }
  }
LABEL_15:
  if ( a7 && *((struct IUnknown **)this + 12) != v21 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v21);
    v12 = v18;
  }
  v11 = (const GUID *)*((_QWORD *)this + 11);
  v15 = 0LL;
  v19 = 0LL;
  if ( !v11
    || ((**(void (__fastcall ***)(const GUID *, GUID *, struct _GUID **))&v11->Data1)(
          v11,
          &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
          &v19),
        v15 = v19,
        v12 = v18,
        !v19) )
  {
    v14 = 0;
  }
  *(_DWORD *)a8 = v14;
  if ( v15 )
  {
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v15->Data1 + 16LL))(v15);
    v12 = v18;
  }
LABEL_21:
  if ( v12 < 0 )
    goto LABEL_42;
LABEL_22:
  if ( v26.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOEndpointProperties->lpVtbl->Release)(v26.pAPOEndpointProperties);
    v12 = v18;
    v26.pAPOEndpointProperties = 0LL;
  }
  if ( v26.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOSystemEffectsProperties->lpVtbl->Release)(v26.pAPOSystemEffectsProperties);
    v12 = v18;
    v26.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v26.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v26.pDeviceCollection->lpVtbl->Release)(v26.pDeviceCollection);
    v12 = v18;
    v26.pDeviceCollection = 0LL;
  }
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
  if ( v20 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v12;
}
