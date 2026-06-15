/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x18012FD60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801321C4 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
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
  HRESULT v20; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v23; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp-A0h] BYREF
  APOInitSystemEffects2 v26; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int v28; // [rsp+E0h] [rbp-20h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+E8h] [rbp-18h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+F0h] [rbp-10h]
  __int64 pReserved; // [rsp+F8h] [rbp-8h]
  void *pDeviceCollection; // [rsp+100h] [rbp+0h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  HRESULT *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]

  v20 = 0;
  ppv = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  memset_0(&v26, 0, sizeof(v26));
  if ( !a2 )
    return (unsigned int)-2147024809;
  if ( !*((_QWORD *)this + 11) )
    return (unsigned int)-2147024882;
  *(_DWORD *)a8 = 0;
  v20 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v12 = v20;
  if ( v20 < 0 )
    goto LABEL_26;
  v20 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v23);
  v12 = v20;
  if ( v20 < 0 )
    goto LABEL_26;
  v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v21);
  v12 = v20;
  v15 = 1;
  if ( v20 >= 0 )
    goto LABEL_11;
  if ( a7 == 1 )
    goto LABEL_25;
  v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
          &v22);
  if ( v20 >= 0 )
  {
LABEL_11:
    v25 = *a4;
    v20 = FillAPOInitSystemEffectsStructure(v23, a3, &v25, a5, a6, &v26);
    v12 = v20;
    if ( v20 < 0 )
      goto LABEL_26;
    if ( v21 )
    {
      p_pData = &v26;
      v17 = 88LL;
    }
    else
    {
      if ( !v22 )
      {
LABEL_17:
        if ( a7 && *((struct IUnknown **)this + 12) != v21 )
        {
          ATL::AtlComPtrAssign((struct IUnknown **)this + 12, v21);
          v12 = v20;
        }
        v14 = (const GUID *)*((_QWORD *)this + 11);
        v18 = 0LL;
        *(_QWORD *)&v25.Data1 = 0LL;
        if ( !v14
          || ((**(void (__fastcall ***)(const GUID *, GUID *, struct _GUID *))&v14->Data1)(
                v14,
                &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                &v25),
              v18 = *(_QWORD *)&v25.Data1,
              v12 = v20,
              !*(_QWORD *)&v25.Data1) )
        {
          v15 = 0;
        }
        *(_DWORD *)a8 = v15;
        if ( v18 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          v12 = v20;
        }
LABEL_25:
        if ( v12 >= 0 )
          goto LABEL_28;
LABEL_26:
        if ( (unsigned int)dword_1801B14C0 > 2 )
        {
          v34 = 0;
          v37 = 0;
          pAPOSystemEffectsProperties = (IPropertyStore *)"CAPOWrapperSrv::InitializeAPORemote";
          pDeviceCollection = &v25;
          v35 = &v20;
          pReserved = 36LL;
          v25.Data1 = 147;
          v33 = 4;
          v36 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1801B14C0, &unk_180177A9E, v13, v14, 5u, &pData);
          v12 = v20;
        }
        goto LABEL_28;
      }
      memset_0((char *)&pData.Ptr + 4, 0, 0x34uLL);
      p_pData = &pData;
      v17 = 56LL;
      v28 = *(_DWORD *)&v26.APOInit.clsid.Data4[4];
      pAPOEndpointProperties = v26.pAPOEndpointProperties;
      pAPOSystemEffectsProperties = v26.pAPOSystemEffectsProperties;
      pReserved = (__int64)v26.pReserved;
      pData = *(EVENT_DATA_DESCRIPTOR *)&v26.APOInit.cbSize;
      pDeviceCollection = v26.pDeviceCollection;
      LODWORD(pData.Ptr) = 56;
    }
    v20 = (*(__int64 (__fastcall **)(char *, __int64, void *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            v17,
            p_pData);
    v12 = v20;
    if ( v20 < 0 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v12 = 0;
  v20 = 0;
LABEL_28:
  if ( v26.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOEndpointProperties->lpVtbl->Release)(v26.pAPOEndpointProperties);
    v26.pAPOEndpointProperties = 0LL;
    v12 = v20;
  }
  if ( v26.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v26.pAPOSystemEffectsProperties->lpVtbl->Release)(v26.pAPOSystemEffectsProperties);
    v26.pAPOSystemEffectsProperties = 0LL;
    v12 = v20;
  }
  if ( v26.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v26.pDeviceCollection->lpVtbl->Release)(v26.pDeviceCollection);
    v26.pDeviceCollection = 0LL;
    v12 = v20;
  }
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->Release)(v23);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v12;
}
