/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x180138CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18000A1A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800564B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18013B124 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
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
  int v12; // ebx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // esi
  void *p_pData; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  HRESULT Instance; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *ppv; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v26; // [rsp+60h] [rbp-A0h] BYREF
  APOInitSystemEffects2 v27; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int v29; // [rsp+E0h] [rbp-20h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+E8h] [rbp-18h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+F0h] [rbp-10h]
  __int64 pReserved; // [rsp+F8h] [rbp-8h]
  void *pDeviceCollection; // [rsp+100h] [rbp+0h]
  int v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+10Ch] [rbp+Ch]
  HRESULT *p_Instance; // [rsp+110h] [rbp+10h]
  int v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+11Ch] [rbp+1Ch]

  ppv = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  memset_0(&v27, 0, sizeof(v27));
  if ( !a2 )
    return (unsigned int)-2147024809;
  if ( !*((_QWORD *)this + 11) )
    return (unsigned int)-2147024882;
  *(_DWORD *)a8 = 0;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               (LPVOID *)&ppv);
  v12 = Instance;
  if ( Instance < 0 )
    goto LABEL_30;
  if ( v21 != ppv )
    ATL::AtlComQIPtrAssign(&v21, ppv, &GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8);
  if ( !v21 )
  {
    v12 = -2147467262;
    Instance = -2147467262;
    goto LABEL_30;
  }
  v15 = 1;
  ((void (__fastcall *)(struct IUnknown *, __int64))v21->lpVtbl[3].Release)(v21, 1LL);
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, const unsigned __int16 *, struct IMMDevice **))ppv->lpVtbl[1].Release)(
               ppv,
               a2,
               &v25);
  v12 = Instance;
  if ( Instance < 0 )
    goto LABEL_30;
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v22);
  Instance = v12;
  if ( v12 >= 0 )
    goto LABEL_15;
  if ( a7 == 1 )
    goto LABEL_29;
  Instance = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
               *((_QWORD *)this + 11),
               &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
               &v24);
  if ( Instance >= 0 )
  {
LABEL_15:
    v26 = *a4;
    Instance = FillAPOInitSystemEffectsStructure(v25, a3, &v26, a5, a6, &v27);
    v12 = Instance;
    if ( Instance < 0 )
      goto LABEL_30;
    if ( v22 )
    {
      p_pData = &v27;
      v17 = 88LL;
    }
    else
    {
      if ( !v24 )
      {
LABEL_21:
        if ( a7 && *((struct IUnknown **)this + 12) != v22 )
        {
          ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v22);
          v12 = Instance;
        }
        v14 = (const GUID *)*((_QWORD *)this + 11);
        v18 = 0LL;
        *(_QWORD *)&v26.Data1 = 0LL;
        if ( !v14
          || ((**(void (__fastcall ***)(const GUID *, GUID *, struct _GUID *))&v14->Data1)(
                v14,
                &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                &v26),
              v18 = *(_QWORD *)&v26.Data1,
              v12 = Instance,
              !*(_QWORD *)&v26.Data1) )
        {
          v15 = 0;
        }
        *(_DWORD *)a8 = v15;
        if ( v18 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          v12 = Instance;
        }
LABEL_29:
        if ( v12 >= 0 )
          goto LABEL_32;
LABEL_30:
        if ( (unsigned int)dword_1801B64B8 > 2 )
        {
          v35 = 0;
          v38 = 0;
          pAPOSystemEffectsProperties = (IPropertyStore *)"CAPOWrapperSrv::InitializeAPORemote";
          pDeviceCollection = &v26;
          p_Instance = &Instance;
          pReserved = 36LL;
          v26.Data1 = 153;
          v34 = 4;
          v37 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDBD, v13, v14, 5u, &pData);
          v12 = Instance;
        }
        goto LABEL_32;
      }
      memset_0((char *)&pData.Ptr + 4, 0, 0x34uLL);
      p_pData = &pData;
      v17 = 56LL;
      v29 = *(_DWORD *)&v27.APOInit.clsid.Data4[4];
      pAPOEndpointProperties = v27.pAPOEndpointProperties;
      pAPOSystemEffectsProperties = v27.pAPOSystemEffectsProperties;
      pReserved = (__int64)v27.pReserved;
      pData = *(EVENT_DATA_DESCRIPTOR *)&v27.APOInit.cbSize;
      pDeviceCollection = v27.pDeviceCollection;
      LODWORD(pData.Ptr) = 56;
    }
    Instance = (*(__int64 (__fastcall **)(char *, __int64, void *))(*((_QWORD *)this + 1) + 48LL))(
                 (char *)this + 8,
                 v17,
                 p_pData);
    v12 = Instance;
    if ( Instance < 0 )
      goto LABEL_30;
    goto LABEL_21;
  }
  v12 = 0;
  Instance = 0;
LABEL_32:
  if ( v27.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v27.pAPOEndpointProperties->lpVtbl->Release)(v27.pAPOEndpointProperties);
    v27.pAPOEndpointProperties = 0LL;
    v12 = Instance;
  }
  if ( v27.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v27.pAPOSystemEffectsProperties->lpVtbl->Release)(v27.pAPOSystemEffectsProperties);
    v27.pAPOSystemEffectsProperties = 0LL;
    v12 = Instance;
  }
  if ( v27.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v27.pDeviceCollection->lpVtbl->Release)(v27.pDeviceCollection);
    v27.pDeviceCollection = 0LL;
    v12 = Instance;
  }
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    ((void (__fastcall *)(struct IMMDevice *))v25->lpVtbl->Release)(v25);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( ppv )
    ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->Release)(ppv);
  return (unsigned int)v12;
}
