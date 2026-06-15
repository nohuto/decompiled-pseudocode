/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D290 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140003980 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140004614 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x1400048B4 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140005690 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009B10 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140009D88 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000B604 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE34 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IUnknown *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v5; // ebx
  BOOL v6; // r13d
  int FxPropertyStore; // eax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  int APOProcessNode; // eax
  __int64 v12; // rbx
  struct IAudioMediaType *v13; // rsi
  unsigned __int16 *v14; // rax
  CPipeInstance *v15; // r14
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  int v19; // ebx
  char *v20; // rax
  int v22; // eax
  GUID *v23; // r14
  int v24; // r12d
  struct IAudioMediaType *v25; // rdx
  int v26; // r14d
  const struct tWAVEFORMATEX *v27; // rax
  int v28; // eax
  struct IAudioMediaType *v29; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v30[2]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v31; // [rsp+60h] [rbp-118h] BYREF
  __int64 v32; // [rsp+68h] [rbp-110h] BYREF
  int pExceptionObject; // [rsp+70h] [rbp-108h] BYREF
  int v34; // [rsp+74h] [rbp-104h] BYREF
  int v35; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v36; // [rsp+7Ch] [rbp-FCh]
  int v37; // [rsp+80h] [rbp-F8h] BYREF
  int v38; // [rsp+84h] [rbp-F4h] BYREF
  int v39; // [rsp+88h] [rbp-F0h] BYREF
  int v40; // [rsp+8Ch] [rbp-ECh] BYREF
  int v41; // [rsp+90h] [rbp-E8h] BYREF
  struct IPropertyStore *v42; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-D8h]
  CPipeInstance *v44; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int16 *v46; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-98h]
  __int128 v51; // [rsp+E8h] [rbp-90h]
  int v52; // [rsp+F8h] [rbp-80h]
  __int64 v53; // [rsp+100h] [rbp-78h]
  long *v54; // [rsp+108h] [rbp-70h] BYREF
  ATL::CAtlException *v55; // [rsp+110h] [rbp-68h] BYREF
  GUID v56; // [rsp+120h] [rbp-58h] BYREF
  unsigned __int64 v57[2]; // [rsp+130h] [rbp-48h] BYREF
  BOOL v59; // [rsp+188h] [rbp+10h]
  unsigned __int16 *v61; // [rsp+198h] [rbp+20h] BYREF

  v53 = -2LL;
  v5 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 10;
  v6 = *(_DWORD *)a2 != 0;
  v59 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v42 = 0LL;
    FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v42);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v32 = 0LL;
    v8 = CProcessNode::CreateDummyProcessNode(v6, *((const struct tWAVEFORMATEX **)a2 + 3), &v32);
    if ( v8 < 0 )
    {
      v34 = v8;
      throw (long *)&v34;
    }
    v45 = v32;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v49, &v45);
    v32 = 0LL;
    v9 = 0;
    v36 = 0;
    while ( v9 < *((_DWORD *)a2 + 22) )
    {
      v61 = 0LL;
      v22 = *((_DWORD *)a2 + 16);
      if ( _bittest(&v22, v9) )
      {
        v23 = (GUID *)((char *)a2 + 68);
        v24 = 2;
        ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v29, (__int64)v42);
        v5 |= 1u;
        v25 = v29;
      }
      else
      {
        v23 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v24 = 0;
        v43 = 0LL;
        v5 |= 2u;
        v25 = 0LL;
      }
      v56 = *v23;
      v26 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * v9 + 92, v25, v6, 0LL, v24, &v56, &v61);
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        if ( v43 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        if ( v29 )
          ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
      }
      if ( v26 < 0 )
      {
        v35 = v26;
        throw (long *)&v35;
      }
      v46 = v61;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v49, &v46);
      v61 = 0LL;
      v36 = ++v9;
    }
    v29 = 0LL;
    v10 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &v29, 0.0, 0);
    if ( v10 < 0 )
    {
      v37 = v10;
      throw (long *)&v37;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v31 = 0LL;
        v13 = v29;
        v27 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->GetAudioFormat)(v29);
        v28 = CProcessNode::CreateDummyProcessNode(v6, v27, &v31);
        if ( v28 < 0 )
        {
          v39 = v28;
          throw (long *)&v39;
        }
        v48 = v31;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v49, &v48);
        v31 = 0LL;
      }
      else
      {
        v13 = v29;
      }
    }
    else
    {
      *(_QWORD *)v30 = 0LL;
      *(GUID *)v57 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                         0LL,
                         v6,
                         1LL,
                         0,
                         v57,
                         v30);
      if ( APOProcessNode < 0 )
      {
        v38 = APOProcessNode;
        throw (long *)&v38;
      }
      v12 = *(_QWORD *)v30;
      v13 = v29;
      (*(void (__fastcall **)(_QWORD, struct IAudioMediaType *))(**(_QWORD **)v30 + 24LL))(*(_QWORD *)v30, v29);
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v12 + 32LL))(v12, v13);
      v47 = v12;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v49, &v47);
      *(_QWORD *)v30 = 0LL;
    }
    v14 = (unsigned __int16 *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v61 = v14;
    if ( v14 )
      v15 = CPipeInstance::CPipeInstance((CPipeInstance *)v14, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
    else
      v15 = 0LL;
    v44 = v15;
    if ( !v15 )
    {
      v40 = -2147024882;
      throw (long *)&v40;
    }
    v16 = (unsigned __int16 *)*((_QWORD *)a2 + 4);
    v61 = v16;
    v17 = -1LL;
    v18 = -1LL;
    do
      ++v18;
    while ( v16[v18] );
    *((_QWORD *)v15 + 24) = 0LL;
    if ( v18 + 1 >= v18 )
      v17 = v18 + 1;
    v19 = v18 + 1 < v18 ? 0x80070216 : 0;
    if ( v18 + 1 >= v18 )
    {
      if ( is_mul_ok(v17, 2uLL) )
      {
        v20 = (char *)CoTaskMemAlloc(2 * v17);
        *((_QWORD *)v15 + 24) = v20;
        if ( !v20 )
        {
          v19 = -2147024882;
          goto LABEL_62;
        }
        v19 = 0;
        StringCchCopyNExW(v20, v17, v61, v18);
      }
      else
      {
        v19 = -2147024362;
      }
    }
    if ( v19 >= 0 )
    {
      *((_DWORD *)v15 + 30) = *(_DWORD *)a2 == 2;
      *((_DWORD *)v15 + 3) = v59;
      *((_DWORD *)v15 + 33) = *((_DWORD *)a2 + 16) != 0;
      if ( *((_QWORD *)v15 + 19) )
        ATL::AtlComPtrAssign((struct IUnknown **)v15 + 19, 0LL);
      if ( *((struct IUnknown **)v15 + 30) != a1 )
        ATL::AtlComPtrAssign((struct IUnknown **)v15 + 30, a1);
      *(_QWORD *)v15 = 0LL;
      *((_DWORD *)v15 + 2) = 1;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((char *)v15 + 16, &v49);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v49);
      *((_DWORD *)v15 + 36) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                              / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                      * (double)(int)*((_QWORD *)a2 + 7)
                                                      / 10000000.0
                                                      + 0.5)
                                         * 1.1);
      *((_DWORD *)v15 + 34) = 0;
      *((_DWORD *)v15 + 53) = 0;
      *(_OWORD *)((char *)v15 + 216) = *(_OWORD *)((char *)a2 + 68);
      *((_BYTE *)v15 + 317) = *((_BYTE *)a2 + 85);
      v44 = 0LL;
      *a3 = v15;
      ATL::CAutoPtr<CPipeInstance>::Free(&v44);
      if ( v13 )
        ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
      v32 = 0LL;
      if ( v42 )
        ((void (__fastcall *)(struct IPropertyStore *))v42->lpVtbl->Release)(v42);
      goto LABEL_70;
    }
LABEL_62:
    v41 = v19;
    throw (long *)&v41;
  }
  catch ( long *v54 )
  {
    v19 = *(_DWORD *)v54;
  }
  catch ( ATL::CAtlException *v55 )
  {
    v19 = *(_DWORD *)v55;
  }
LABEL_70:
  if ( v19 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
        (unsigned int)v19);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateSubmixPipeInstance", 0x1CFu, v19);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v49);
  return (unsigned int)v19;
}
