/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013B834
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180027920 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18013B124 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     McTemplateU0jjt @ 0x18013BAEC (McTemplateU0jjt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        BOOL a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  __int64 v11; // rcx
  GUID *v12; // rax
  int v13; // ebx
  BOOL v14; // r15d
  __int64 v15; // rdx
  struct APOInitSystemEffects2 *v16; // r8
  __int64 v17; // rdx
  GUID *v18; // r9
  struct IAudioSystemEffects2 *v19; // rax
  struct IAudioSystemEffects2 *v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v23; // [rsp+50h] [rbp-B0h] BYREF
  struct APOInitSystemEffects2 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h] BYREF
  int v26; // [rsp+D0h] [rbp-30h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-28h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-20h]
  void *pReserved; // [rsp+E8h] [rbp-18h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp-10h]

  v22[1] = -2LL;
  v22[0] = 0LL;
  v21 = 0LL;
  memset_0(&v24, 0, sizeof(v24));
  v11 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v11 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v11 )
    v12 = a4;
  *a4 = *v12;
  if ( a7 )
    *a7 = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioSystemEffects2 **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v21);
  if ( v13 < 0 )
  {
    if ( a7 )
      goto LABEL_26;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           v22) < 0 )
      goto LABEL_10;
  }
  v23 = *a4;
  v14 = a5;
  v13 = FillAPOInitSystemEffectsStructure(a1, a3, &v23, a5, a6, &v24);
  if ( v13 >= 0 )
  {
    if ( v21 )
    {
      v16 = &v24;
      v17 = 88LL;
    }
    else
    {
      if ( !v22[0] )
        goto LABEL_17;
      memset_0((char *)&v25 + 4, 0, 0x34uLL);
      v25 = *(_OWORD *)&v24.APOInit.cbSize;
      v26 = *(_DWORD *)&v24.APOInit.clsid.Data4[4];
      v17 = 56LL;
      LODWORD(v25) = 56;
      pAPOEndpointProperties = v24.pAPOEndpointProperties;
      pAPOSystemEffectsProperties = v24.pAPOSystemEffectsProperties;
      pReserved = v24.pReserved;
      pDeviceCollection = v24.pDeviceCollection;
      v16 = (struct APOInitSystemEffects2 *)&v25;
    }
    v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
            a2,
            v17,
            v16);
LABEL_17:
    if ( v13 >= 0 )
    {
      if ( (byte_1801B9781 & 2) != 0 )
      {
        if ( !v21 )
          v14 = 0;
        v18 = &GUID_00000000_0000_0000_0000_000000000000;
        if ( v21 )
          v18 = a4;
        McTemplateU0jjt(v21, v15, a3, v18, v14);
      }
      if ( a7 )
      {
        v19 = v21;
        v21 = 0LL;
        *a7 = v19;
      }
LABEL_10:
      v13 = 0;
    }
  }
LABEL_26:
  if ( v24.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOEndpointProperties->lpVtbl->Release)(v24.pAPOEndpointProperties);
    v24.pAPOEndpointProperties = 0LL;
  }
  if ( v24.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOSystemEffectsProperties->lpVtbl->Release)(v24.pAPOSystemEffectsProperties);
    v24.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v24.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v24.pDeviceCollection->lpVtbl->Release)(v24.pDeviceCollection);
    v24.pDeviceCollection = 0LL;
  }
  if ( v21 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v21->lpVtbl->Release)(v21);
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
  return (unsigned int)v13;
}
