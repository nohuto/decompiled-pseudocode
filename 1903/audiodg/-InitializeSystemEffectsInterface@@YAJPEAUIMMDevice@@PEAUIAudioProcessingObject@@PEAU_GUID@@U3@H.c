/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000B46C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140008810 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0jjt @ 0x140043B10 (McTemplateU0jjt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  __int64 v10; // rcx
  GUID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  struct APOInitSystemEffects2 *v15; // r8
  __int64 v16; // rdx
  GUID *v18; // r9
  __int64 v19; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-A9h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp-91h] BYREF
  struct APOInitSystemEffects2 v22; // [rsp+60h] [rbp-81h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-21h] BYREF
  int v24; // [rsp+D0h] [rbp-11h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-9h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-1h]
  void *pReserved; // [rsp+E8h] [rbp+7h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp+Fh]

  v20[1] = -2LL;
  v20[0] = 0LL;
  v19 = 0LL;
  memset_0(&v22, 0, sizeof(v22));
  v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v11 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v10 )
    v11 = a4;
  *a4 = *v11;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v19) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         v20) < 0 )
  {
    goto LABEL_12;
  }
  v21 = *a4;
  v14 = FillAPOInitSystemEffectsStructure(a1, a3, &v21, 0, a6, &v22);
  if ( v14 < 0 )
    goto LABEL_13;
  if ( v19 )
  {
    v15 = &v22;
    v16 = 88LL;
  }
  else
  {
    if ( !v20[0] )
      goto LABEL_10;
    memset_0((char *)&v23 + 4, 0, 0x34uLL);
    v23 = *(_OWORD *)&v22.APOInit.cbSize;
    v24 = *(_DWORD *)&v22.APOInit.clsid.Data4[4];
    v16 = 56LL;
    LODWORD(v23) = 56;
    pAPOEndpointProperties = v22.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v22.pAPOSystemEffectsProperties;
    pReserved = v22.pReserved;
    pDeviceCollection = v22.pDeviceCollection;
    v15 = (struct APOInitSystemEffects2 *)&v23;
  }
  v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
          a2,
          v16,
          v15);
LABEL_10:
  if ( v14 < 0 )
    goto LABEL_13;
  if ( (byte_140087281 & 2) != 0 )
  {
    v18 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( v19 )
      v18 = a4;
    McTemplateU0jjt(v13, v12, a3, v18);
  }
LABEL_12:
  v14 = 0;
LABEL_13:
  if ( v22.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v22.pAPOEndpointProperties->lpVtbl->Release)(v22.pAPOEndpointProperties);
    v22.pAPOEndpointProperties = 0LL;
  }
  if ( v22.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v22.pAPOSystemEffectsProperties->lpVtbl->Release)(v22.pAPOSystemEffectsProperties);
    v22.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v22.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v22.pDeviceCollection->lpVtbl->Release)(v22.pDeviceCollection);
    v22.pDeviceCollection = 0LL;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  return (unsigned int)v14;
}
