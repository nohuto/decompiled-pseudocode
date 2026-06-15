/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008D30
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000A740 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
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
  const GUID *v12; // r9
  int v13; // ebx
  __int64 v14; // rcx
  BOOL v15; // eax
  __int64 v17; // rax
  HRESULT v18; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v21; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v23; // [rsp+60h] [rbp-A0h] BYREF
  APOInitSystemEffects2 v24; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int v26; // [rsp+E0h] [rbp-20h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+E8h] [rbp-18h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+F0h] [rbp-10h]
  __int64 pReserved; // [rsp+F8h] [rbp-8h]
  void *pDeviceCollection; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  HRESULT *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]

  v18 = 0;
  ppv = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  memset_0(&v24, 0, sizeof(v24));
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
  v13 = v18;
  if ( v18 < 0 )
    goto LABEL_38;
  v18 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v21);
  v13 = v18;
  if ( v18 < 0 )
    goto LABEL_38;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v19);
  v18 = v13;
  if ( v13 < 0 )
  {
    if ( a7 == 1 )
      goto LABEL_15;
    v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &v20);
    if ( v18 < 0 )
    {
      v13 = 0;
      v18 = 0;
      goto LABEL_16;
    }
  }
  v23 = *a4;
  v18 = FillAPOInitSystemEffectsStructure(v21, a3, &v23, a5, a6, &v24);
  v13 = v18;
  if ( v18 < 0 )
    goto LABEL_38;
  if ( v19 )
  {
    v18 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            88LL,
            &v24);
    v13 = v18;
    if ( v18 < 0 )
      goto LABEL_38;
  }
  else if ( v20 )
  {
    memset_0((char *)&pData.Ptr + 4, 0, 0x34uLL);
    v26 = *(_DWORD *)&v24.APOInit.clsid.Data4[4];
    pAPOEndpointProperties = v24.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v24.pAPOSystemEffectsProperties;
    pReserved = (__int64)v24.pReserved;
    pDeviceCollection = v24.pDeviceCollection;
    v17 = *((_QWORD *)this + 1);
    pData = *(EVENT_DATA_DESCRIPTOR *)&v24.APOInit.cbSize;
    LODWORD(pData.Ptr) = 56;
    v18 = (*(__int64 (__fastcall **)(char *, __int64, EVENT_DATA_DESCRIPTOR *))(v17 + 48))(
            (char *)this + 8,
            56LL,
            &pData);
    v13 = v18;
    if ( v18 < 0 )
    {
LABEL_38:
      if ( (unsigned int)hProvider > 2 )
      {
        pReserved = 36LL;
        pAPOSystemEffectsProperties = (IPropertyStore *)"CAPOWrapperSrv::InitializeAPORemote";
        pDeviceCollection = &v23;
        v32 = &v18;
        v23.Data1 = 147;
        v31 = 4LL;
        v33 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140072181, 0LL, v12, 5u, &pData);
        v13 = v18;
      }
      goto LABEL_16;
    }
  }
  if ( a7 && *((struct IUnknown **)this + 12) != v19 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v19);
    v13 = v18;
  }
  v12 = (const GUID *)*((_QWORD *)this + 11);
  v14 = 0LL;
  *(_QWORD *)&v23.Data1 = 0LL;
  v15 = 0;
  if ( v12 )
  {
    (**(void (__fastcall ***)(const GUID *, GUID *, struct _GUID *))&v12->Data1)(
      v12,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      &v23);
    v14 = *(_QWORD *)&v23.Data1;
    v13 = v18;
    if ( *(_QWORD *)&v23.Data1 )
      v15 = 1;
  }
  *(_DWORD *)a8 = v15;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v13 = v18;
  }
LABEL_15:
  if ( v13 < 0 )
    goto LABEL_38;
LABEL_16:
  if ( v24.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOEndpointProperties->lpVtbl->Release)(v24.pAPOEndpointProperties);
    v13 = v18;
    v24.pAPOEndpointProperties = 0LL;
  }
  if ( v24.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOSystemEffectsProperties->lpVtbl->Release)(v24.pAPOSystemEffectsProperties);
    v13 = v18;
    v24.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v24.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v24.pDeviceCollection->lpVtbl->Release)(v24.pDeviceCollection);
    v13 = v18;
    v24.pDeviceCollection = 0LL;
  }
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    ((void (__fastcall *)(struct IMMDevice *))v21->lpVtbl->Release)(v21);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v13;
}
