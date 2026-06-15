/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D1BF0
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800D64F8 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B7B0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveStreamFormatFromMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        __int32 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v9; // rdi
  int StreamEffect; // eax
  int v11; // esi
  struct IAudioProcessingObject *v12; // rcx
  __int64 v13; // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v15; // eax
  struct IAudioMediaType *v16; // rdx
  struct IAudioSystemEffects2 **v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v20; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioProcessingObject *v21; // [rsp+50h] [rbp-30h] BYREF
  struct IUnknown *v22; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]

  v24 = -2LL;
  v9 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(a1, a3) )
  {
    v23 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                     a1,
                     &v23,
                     0,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v21,
                     0LL);
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(
                     a1,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v21,
                     v18);
  }
  v11 = StreamEffect;
  if ( StreamEffect >= 0 )
  {
    v12 = v21;
    if ( !v21 )
    {
      if ( !a4 )
      {
LABEL_34:
        v16 = v9;
        v9 = 0LL;
        v22 = 0LL;
        *a5 = v16;
        goto LABEL_35;
      }
      ATL::AtlComPtrAssign(&v22, a4);
      v9 = (struct IAudioMediaType *)v22;
LABEL_33:
      v12 = v21;
      goto LABEL_34;
    }
    v19 = 0;
    v13 = 0LL;
    *(_QWORD *)&v23.Data1 = 0LL;
    if ( a4 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v23, a4);
      v12 = v21;
      v13 = *(_QWORD *)&v23.Data1;
    }
    v20 = 0LL;
    lpVtbl = v12->lpVtbl;
    if ( *((_DWORD *)a1 + 39) )
      v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
              v12,
              a4,
              v13,
              &v20);
    else
      v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
              v12,
              a4,
              v13,
              &v20);
    if ( v15 >= 0
      && ((int (__fastcall *)(struct IUnknown *, int *))v20->lpVtbl[1].QueryInterface)(v20, &v19) >= 0
      && !v19 )
    {
      if ( v20 )
      {
        ATL::AtlComPtrAssign(&v22, v20);
        v9 = (struct IAudioMediaType *)v22;
      }
      v11 = ValidateAPOInputFormat(v9);
      if ( v11 < 0 )
      {
        if ( v20 )
          ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v12 = v21;
LABEL_35:
        if ( v11 >= 0 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( v20 )
        ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_33;
    }
    v11 = -2004287480;
    if ( v20 )
      ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_36:
  AudSrvTraceLoggingErrorHelper("DeriveStreamFormatFromMixFormat", 1420, v11);
  v12 = v21;
LABEL_37:
  if ( v12 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v12->lpVtbl->Release)(v12);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v11;
}
