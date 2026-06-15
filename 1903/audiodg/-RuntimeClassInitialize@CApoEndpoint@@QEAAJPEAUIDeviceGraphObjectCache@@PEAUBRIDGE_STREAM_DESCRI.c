/*
 * XREFs of ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140029764
 * Callers:
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x140029148 (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FBC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D44 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14002951C (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 */

__int64 __fastcall CApoEndpoint::RuntimeClassInitialize(
        CApoEndpoint *this,
        struct IUnknown *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        unsigned int a6)
{
  const struct tWAVEFORMATEX *v10; // rax
  int inited; // ebx
  __int64 v12; // rcx
  unsigned __int32 v13; // edi
  _QWORD v15[2]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-89h]
  int v17; // [rsp+44h] [rbp-85h]
  struct IAudioMediaType *v18; // [rsp+48h] [rbp-81h]
  int v19; // [rsp+50h] [rbp-79h]
  int v20; // [rsp+54h] [rbp-75h]
  struct APOInitSystemEffects2 v21; // [rsp+60h] [rbp-69h] BYREF

  v15[0] = 0LL;
  v15[1] = 0LL;
  v17 = 0;
  v20 = 0;
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a5->lpVtbl->GetAudioFormat)(a5);
  inited = CloneWaveFormat(v10, (struct tWAVEFORMATEX **)this + 4);
  if ( *((struct IUnknown **)this + 5) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 5, a2);
  if ( inited >= 0 )
  {
    v12 = *((_QWORD *)this + 5);
    v16 = a6;
    v19 = 1094927443;
    v18 = a5;
    inited = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v12 + 40LL))(v12, v15, (char *)this + 48);
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                 a4,
                 &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                 (char *)this + 56);
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                   a4,
                   &GUID_f851809c_c177_49a0_b1b2_b66f017943ab,
                   (char *)this + 64);
        if ( inited >= 0 )
        {
          do
            v13 = _InterlockedIncrement((volatile signed __int32 *)&g_AuxiliaryInputId);
          while ( !v13 );
          memset_0(&v21, 0, sizeof(v21));
          inited = FillAuxiliaryInputInitStruct(a3, a4, &v21);
          if ( inited >= 0 )
          {
            inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct APOInitSystemEffects2 *, _QWORD *))(**((_QWORD **)this + 7) + 24LL))(
                       *((_QWORD *)this + 7),
                       v13,
                       88LL,
                       &v21,
                       v15);
            if ( inited >= 0 )
              *((_DWORD *)this + 18) = v13;
          }
          if ( v21.pAPOEndpointProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v21.pAPOEndpointProperties->lpVtbl->Release)(v21.pAPOEndpointProperties);
            v21.pAPOEndpointProperties = 0LL;
          }
          if ( v21.pAPOSystemEffectsProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v21.pAPOSystemEffectsProperties->lpVtbl->Release)(v21.pAPOSystemEffectsProperties);
            v21.pAPOSystemEffectsProperties = 0LL;
          }
          if ( v21.pDeviceCollection )
            ((void (__fastcall *)(IMMDeviceCollection *))v21.pDeviceCollection->lpVtbl->Release)(v21.pDeviceCollection);
        }
      }
    }
  }
  return (unsigned int)inited;
}
