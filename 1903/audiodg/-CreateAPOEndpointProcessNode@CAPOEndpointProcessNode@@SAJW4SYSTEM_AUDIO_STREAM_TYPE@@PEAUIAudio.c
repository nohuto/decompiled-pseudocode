/*
 * XREFs of ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003619C
 * Callers:
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140034B30 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140005790 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007180 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z @ 0x140035D9C (--0-$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z.c)
 *     ??0?$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140035DCC (--0-$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1-_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(
        int a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        const struct tWAVEFORMATEX *a3,
        _QWORD *a4)
{
  struct IAudioMediaType *v6; // rdi
  __int64 v7; // rbx
  int v8; // r15d
  int v9; // r12d
  char v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rbx
  char v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioMediaType *v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  v25 = -2LL;
  v24 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  ATL::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
    &v22,
    a2);
  if ( v22 )
  {
    v8 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v21, 0.0, 0);
    v6 = v21;
    if ( v8 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v22 + 40LL))(
             v22,
             v21,
             &v23);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v18, v23);
          v13 = 2;
          v11 = v18;
          v14 = v18;
          v12 = v18;
        }
        else
        {
          v12 = 0LL;
          v18 = 0LL;
          v13 = 4;
          v14 = 0LL;
          v11 = 0LL;
        }
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v19, v14);
        v10 = v13 | 8;
      }
      else
      {
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v19, (__int64)v6);
        v10 = 1;
        v11 = v18;
        v12 = v18;
      }
      ATL::CComPtr<IAudioMediaType>::operator=(&v20, &v19);
      if ( (v10 & 8) != 0 )
      {
        v10 &= ~8u;
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      }
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( (v10 & 2) != 0 )
      {
        v10 &= ~2u;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( (v10 & 1) != 0 && v19 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v7 = v20;
      if ( v9 >= 0 )
      {
        if ( !v20 )
        {
          v8 = -2005073917;
          goto LABEL_33;
        }
        v15 = operator new(0x40uLL);
        v16 = v15;
        v19 = v15;
        if ( v15 )
        {
          v15[1] = 0LL;
          v15[2] = 0LL;
          *((_DWORD *)v15 + 6) = a1 != 0;
          v15[4] = 0LL;
          *((_DWORD *)v15 + 10) = 5;
          *v15 = &CAPOEndpointProcessNode::`vftable';
          v15[6] = 0LL;
          *((_DWORD *)v15 + 14) = 0;
        }
        else
        {
          v16 = 0LL;
        }
        v24 = v16;
        if ( !v16 )
        {
          v8 = -2147024882;
          goto LABEL_33;
        }
        *((_DWORD *)v16 + 15) = a1;
        ATL::CComPtr<IAudioMediaType>::operator=(v16 + 6, &v20);
        ATL::CComPtr<IAudioMediaType>::operator=(v16 + 1, &v20);
        ATL::CComPtr<IAudioMediaType>::operator=(v16 + 2, &v20);
        v24 = 0LL;
        *a4 = v16;
      }
      else
      {
        v8 = v9;
      }
      if ( v8 >= 0 )
        goto LABEL_34;
    }
  }
  else
  {
    v8 = -2147467262;
  }
LABEL_33:
  AudDGTraceLoggingErrorHelper("CAPOEndpointProcessNode::CreateAPOEndpointProcessNode", 0x332u, v8);
LABEL_34:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v8;
}
