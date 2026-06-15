/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000607C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8B0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003878 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140003990 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140004624 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x1400048C4 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x1400056A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F14 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074C0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009B20 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D44 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140009D98 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000B614 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x14000EE44 (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140017D57 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002A3EC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x1400349EC (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        __int64 a3,
        CPipeInstance **a4)
{
  int v5; // r13d
  unsigned __int16 *v6; // r15
  int v7; // ebx
  int FxPropertyStore; // eax
  unsigned __int8 v9; // cl
  const struct tWAVEFORMATEX *v10; // rdx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  bool v15; // zf
  int v16; // r15d
  int v17; // r15d
  __int64 v18; // rdx
  int v19; // r15d
  int APOProcessNode; // eax
  int v21; // eax
  int DeviceProcessNode; // eax
  unsigned __int16 *v23; // rax
  CPipeInstance *v24; // rdi
  unsigned __int64 v25; // r13
  int EndpointGuidFromEndpointId; // eax
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int128 v29; // rax
  char *v30; // rax
  int v31; // ebx
  unsigned int v32; // eax
  CPipeInstance *v33; // rcx
  _QWORD *v34; // rcx
  int v36; // eax
  int v37; // eax
  _BYTE v38[32]; // [rsp+0h] [rbp-168h] BYREF
  unsigned int v39[2]; // [rsp+40h] [rbp-128h] BYREF
  int v40; // [rsp+48h] [rbp-120h]
  int v41; // [rsp+4Ch] [rbp-11Ch]
  int v42; // [rsp+50h] [rbp-118h]
  GUID v43; // [rsp+60h] [rbp-108h] BYREF
  void (__fastcall ***v44)(_QWORD, __int64); // [rsp+70h] [rbp-F8h] BYREF
  struct CDeviceProcessNode *v45; // [rsp+78h] [rbp-F0h] BYREF
  int pExceptionObject; // [rsp+80h] [rbp-E8h] BYREF
  int v47; // [rsp+84h] [rbp-E4h] BYREF
  int v48; // [rsp+88h] [rbp-E0h] BYREF
  int v49; // [rsp+8Ch] [rbp-DCh] BYREF
  int v50; // [rsp+90h] [rbp-D8h] BYREF
  int v51; // [rsp+94h] [rbp-D4h] BYREF
  int v52; // [rsp+98h] [rbp-D0h] BYREF
  int v53; // [rsp+9Ch] [rbp-CCh] BYREF
  int v54; // [rsp+A0h] [rbp-C8h] BYREF
  int v55; // [rsp+A4h] [rbp-C4h] BYREF
  int v56; // [rsp+A8h] [rbp-C0h] BYREF
  CPipeInstance *v57; // [rsp+B0h] [rbp-B8h]
  struct IPropertyStore *v58; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-A8h] BYREF
  unsigned __int64 v60[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-78h]
  __int128 v63; // [rsp+F8h] [rbp-70h]
  int v64; // [rsp+108h] [rbp-60h]
  __int64 v65; // [rsp+110h] [rbp-58h]
  long *v66; // [rsp+118h] [rbp-50h] BYREF
  ATL::CAtlException *v67; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int16 *v70; // [rsp+180h] [rbp+18h] BYREF
  CPipeInstance **v71; // [rsp+188h] [rbp+20h]

  v71 = a4;
  v65 = -2LL;
  v5 = 0;
  v40 = 0;
  v45 = 0LL;
  v57 = 0LL;
  v6 = 0LL;
  *(_QWORD *)v39 = 0LL;
  v44 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 10;
  v41 = 0;
  v7 = 0;
  v42 = 0;
  v58 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids);
  }
  try
  {
    FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v58);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v10 = *(const struct tWAVEFORMATEX **)(a3 + 24);
    if ( v10 )
    {
      v11 = CProcessNode::CreateDummyProcessNode(*(_DWORD *)(a3 + 72), v10, &v44);
      if ( v11 < 0 )
      {
        v47 = v11;
        throw (long *)&v47;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v44);
      v44 = 0LL;
    }
    if ( !*(_DWORD *)(a3 + 72) )
    {
      v41 = 1;
      if ( AudioDgTelemetryProvider::IsEnabled(v9, (unsigned __int64)v10) )
        v7 = 1;
      v42 = v7;
    }
    v12 = 0;
    v13 = v59;
    v14 = v60[0];
    while ( 1 )
    {
      LODWORD(v70) = v12;
      if ( v12 >= *(_DWORD *)(a3 + 96) )
        break;
      v15 = (*(_DWORD *)(a3 + 80) & (1 << v12)) == 0;
      v40 = *(_DWORD *)(a3 + 80) & (1 << v12);
      v16 = *(_DWORD *)(a3 + 92);
      if ( v15 )
        goto LABEL_17;
      if ( *(_DWORD *)(a3 + 88) == v12 )
      {
        if ( v41 )
        {
          v43 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v36 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  0LL,
                  *(unsigned int *)(a3 + 72),
                  1LL,
                  0,
                  &v43,
                  v39);
          if ( v36 < 0 )
          {
            v48 = v36;
            throw (long *)&v48;
          }
          *(_QWORD *)&v43.Data1 = *(_QWORD *)v39;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v43);
          *(_QWORD *)v39 = 0LL;
          v41 = 0;
          v12 = (unsigned int)v70;
        }
        if ( v42 )
        {
          v43 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v37 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  0LL,
                  *(unsigned int *)(a3 + 72),
                  1LL,
                  0,
                  &v43,
                  v39);
          if ( v37 < 0 )
          {
            v49 = v37;
            throw (long *)&v49;
          }
          *(_QWORD *)&v43.Data1 = *(_QWORD *)v39;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v43);
          *(_QWORD *)v39 = 0LL;
          v42 = 0;
          v12 = (unsigned int)v70;
        }
      }
      if ( v16 == v12 )
LABEL_17:
        *(_QWORD *)&v43.Data1 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      else
        *(_QWORD *)&v43.Data1 = a3 + 120;
      if ( v40 )
        v17 = 3 - (v12 != v16);
      else
        v17 = 0;
      if ( v40 )
      {
        ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v59, (__int64)v58);
        v5 |= 1u;
        v13 = v59;
        v18 = v59;
      }
      else
      {
        v14 = 0LL;
        v60[0] = 0LL;
        v5 |= 2u;
        v18 = 0LL;
      }
      v40 = v5;
      v43 = *(GUID *)*(_QWORD *)&v43.Data1;
      v19 = CAPOProcessNode::CreateAPOProcessNode(
              a3 + 16LL * (unsigned int)v70 + 200,
              v18,
              *(unsigned int *)(a3 + 72),
              0LL,
              v17,
              &v43,
              v39);
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        v40 = v5;
        if ( v14 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v19 < 0 )
      {
        v50 = v19;
        throw (long *)&v50;
      }
      *(_QWORD *)&v43.Data1 = *(_QWORD *)v39;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v43);
      v6 = 0LL;
      *(_QWORD *)v39 = 0LL;
      v12 = (_DWORD)v70 + 1;
    }
    if ( v41 )
    {
      *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                         0LL,
                         *(unsigned int *)(a3 + 72),
                         1LL,
                         0,
                         v60,
                         v39);
      if ( APOProcessNode < 0 )
      {
        v51 = APOProcessNode;
        throw (long *)&v51;
      }
      v70 = *(unsigned __int16 **)v39;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v70);
      v6 = 0LL;
      *(_QWORD *)v39 = 0LL;
    }
    if ( v42 )
    {
      *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v21 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_693badea_1eb1_4013_b799_285f624a55bd,
              0LL,
              *(unsigned int *)(a3 + 72),
              1LL,
              0,
              v60,
              v39);
      if ( v21 < 0 )
      {
        v52 = v21;
        throw (long *)&v52;
      }
      v70 = *(unsigned __int16 **)v39;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v70);
      v6 = 0LL;
      *(_QWORD *)v39 = 0LL;
    }
    DeviceProcessNode = CDeviceProcessNode::CreateDeviceProcessNode(
                          (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3,
                          (struct IAudioMediaType ***)&v45);
    if ( DeviceProcessNode < 0 )
    {
      v53 = DeviceProcessNode;
      throw (long *)&v53;
    }
    v70 = (unsigned __int16 *)v45;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v70);
    v45 = 0LL;
    v23 = (unsigned __int16 *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v70 = v23;
    if ( v23 )
      v24 = CPipeInstance::CPipeInstance((CPipeInstance *)v23, READ_DATA_PIPE);
    else
      v24 = 0LL;
    v57 = v24;
    if ( !v24 )
    {
      v54 = -2147024882;
      throw (long *)&v54;
    }
    *(_OWORD *)((char *)v24 + 296) = *(_OWORD *)(a3 + 152);
    *((_DWORD *)v24 + 3) = *(_DWORD *)(a3 + 72);
    *((_DWORD *)v24 + 33) = *(_DWORD *)(a3 + 80) != 0;
    *((_DWORD *)v24 + 31) = *(_DWORD *)(a3 + 100) == 1;
    *((_DWORD *)v24 + 32) = *(_DWORD *)(a3 + 100);
    if ( *((struct IUnknown **)v24 + 19) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v24 + 19, a1);
    if ( *((struct IUnknown **)v24 + 30) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)v24 + 30, a2);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((char *)v24 + 16, &v61);
    v25 = -1LL;
    *((_DWORD *)v24 + 53) = *(_DWORD *)(a3 + 88) != -1;
    *((_DWORD *)v24 + 78) = *(_DWORD *)(a3 + 148);
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v24 + 160);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v55 = EndpointGuidFromEndpointId;
      throw (long *)&v55;
    }
    v27 = *(unsigned __int16 **)(a3 + 56);
    v70 = v27;
    do
      ++v25;
    while ( v27[v25] );
    *((_QWORD *)v24 + 24) = 0LL;
    v28 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      v31 = -2147024362;
    }
    else
    {
      v29 = v28 * (unsigned __int128)2uLL;
      if ( is_mul_ok(v28, 2uLL) )
      {
        v30 = (char *)CoTaskMemAlloc(2 * v28);
        *((_QWORD *)v24 + 24) = v30;
        if ( !v30 )
        {
          v31 = -2147024882;
          goto LABEL_90;
        }
        v31 = 0;
        StringCchCopyNExW(v30, v25 + 1, v70, v25);
      }
      else
      {
        v31 = -2147024362;
      }
      if ( v31 >= 0 )
      {
        v32 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                          / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                  * (double)(int)*(_QWORD *)(a3 + 32)
                  / 10000000.0
                  + 0.5);
        *((_DWORD *)v24 + 36) = v32;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, v32);
        }
        goto LABEL_110;
      }
    }
LABEL_90:
    v56 = v31;
    throw (long *)&v56;
  }
  catch ( long *v66 )
  {
    *((_QWORD *)&v29 + 1) = v38;
    LODWORD(v70) = *(_DWORD *)v66;
    v31 = (int)v70;
    v6 = *(unsigned __int16 **)v39;
    v24 = v57;
  }
  catch ( ATL::CAtlException *v67 )
  {
    *((_QWORD *)&v29 + 1) = v38;
    LODWORD(v70) = *(_DWORD *)v67;
    v31 = (int)v70;
    v6 = *(unsigned __int16 **)v39;
    v24 = v57;
  }
LABEL_110:
  if ( v31 < 0 )
  {
    if ( v44 )
      (**v44)(v44, 1LL);
    if ( v6 )
      (**(void (__fastcall ***)(unsigned __int16 *, __int64))v6)(v6, 1LL);
    if ( v45 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v45)(v45, 1LL);
    if ( !v24 )
    {
      CleanupProcessNodeList(&v61);
      goto LABEL_57;
    }
    v33 = v24;
LABEL_100:
    CPipeInstance::`scalar deleting destructor'(v33, DWORD2(v29));
    goto LABEL_57;
  }
  v33 = *v71;
  *v71 = v24;
  if ( v33 )
    goto LABEL_100;
LABEL_57:
  v34 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
      (unsigned int)v31);
    v34 = WPP_GLOBAL_Control;
  }
  if ( v31 < 0 )
  {
    if ( v34 != &WPP_GLOBAL_Control && (*((_DWORD *)v34 + 7) & 0x20000) != 0 && *((_BYTE *)v34 + 25) >= 2u )
      WPP_SF_D(v34[2], 13LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, (unsigned int)v31);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x140u, v31);
  }
  if ( v58 )
    ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v58->lpVtbl->Release)(v58, v58->lpVtbl);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v61);
  return (unsigned int)v31;
}
