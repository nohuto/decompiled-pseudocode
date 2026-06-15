/*
 * XREFs of ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14002951C
 * Callers:
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140029764 (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140008810 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FillAuxiliaryInputInitStruct(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct APOInitSystemEffects2 *a3)
{
  int Instance; // ebx
  struct IMMDevice *v8; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v9[3]; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+50h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF

  v9[1] = (LPVOID)-2LL;
  v9[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v9);
  v8 = 0LL;
  if ( Instance >= 0 )
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v9[0] + 40LL))(
                 v9[0],
                 *((_QWORD *)a1 + 5),
                 &v8);
  pv = 0LL;
  if ( Instance >= 0 )
  {
    Instance = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, LPVOID *))a2->lpVtbl->GetRegistrationProperties)(
                 a2,
                 &pv);
    if ( Instance >= 0 )
    {
      v10 = *(struct _GUID *)((char *)a1 + 12);
      Instance = FillAPOInitSystemEffectsStructure(
                   v8,
                   (struct _GUID *)pv,
                   &v10,
                   0,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a1 + 2),
                   a3);
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  if ( v9[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return (unsigned int)Instance;
}
