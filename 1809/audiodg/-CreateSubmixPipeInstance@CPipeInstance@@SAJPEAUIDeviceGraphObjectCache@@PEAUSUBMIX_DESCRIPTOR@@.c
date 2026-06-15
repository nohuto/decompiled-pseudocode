/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BF50
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000A130 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x14000A600 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000CFB0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D280 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000D330 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001ADB8 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _CxxThrowException_0 @ 0x14001D997 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v5; // r14d
  BOOL v6; // r12d
  int FxPropertyStore; // eax
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  struct IAudioMediaType *v16; // rsi
  __int64 v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // rax
  CPipeInstance *v20; // rax
  CPipeInstance *v21; // r12
  _WORD *v22; // r14
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r15
  _WORD *v25; // rax
  _WORD *v26; // r9
  int v27; // ecx
  unsigned __int64 v28; // rax
  _WORD *v29; // rdx
  int v30; // r10d
  __int64 v31; // r8
  unsigned __int64 v32; // r15
  int v33; // ecx
  struct IDeviceGraphObjectCache *v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  int v45; // r9d
  _QWORD *v46; // r8
  int v47; // ebx
  int v49; // eax
  GUID *v50; // r15
  int v51; // ebx
  struct IPropertyStore *v52; // rdx
  int v53; // ebx
  __int64 v54; // rbx
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  int v59; // edi
  struct IPropertyStore *v60; // [rsp+50h] [rbp-158h]
  __int128 v61; // [rsp+58h] [rbp-150h] BYREF
  __int64 v62; // [rsp+68h] [rbp-140h]
  __int128 v63; // [rsp+70h] [rbp-138h]
  int v64; // [rsp+80h] [rbp-128h]
  __int64 v65; // [rsp+88h] [rbp-120h] BYREF
  __int64 v66; // [rsp+90h] [rbp-118h] BYREF
  struct IAudioMediaType *v67; // [rsp+98h] [rbp-110h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-108h] BYREF
  int pExceptionObject; // [rsp+A8h] [rbp-100h] BYREF
  int v70; // [rsp+ACh] [rbp-FCh] BYREF
  int v71; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v72; // [rsp+B4h] [rbp-F4h]
  int v73; // [rsp+B8h] [rbp-F0h] BYREF
  int v74; // [rsp+BCh] [rbp-ECh] BYREF
  int v75; // [rsp+C0h] [rbp-E8h] BYREF
  int v76; // [rsp+C4h] [rbp-E4h] BYREF
  int v77; // [rsp+C8h] [rbp-E0h]
  int v78; // [rsp+CCh] [rbp-DCh]
  int v79; // [rsp+D0h] [rbp-D8h] BYREF
  struct IPropertyStore *v80; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-C8h]
  _WORD *v82; // [rsp+E8h] [rbp-C0h]
  __int64 v83; // [rsp+F0h] [rbp-B8h]
  __int64 v84; // [rsp+F8h] [rbp-B0h]
  _QWORD *v85; // [rsp+100h] [rbp-A8h]
  __int64 v86; // [rsp+108h] [rbp-A0h] BYREF
  void *v87; // [rsp+110h] [rbp-98h]
  unsigned __int64 v88; // [rsp+118h] [rbp-90h]
  _WORD *v89; // [rsp+120h] [rbp-88h]
  unsigned __int64 v90; // [rsp+128h] [rbp-80h]
  unsigned __int64 v91; // [rsp+130h] [rbp-78h]
  __int64 v92; // [rsp+138h] [rbp-70h]
  long *v93; // [rsp+140h] [rbp-68h] BYREF
  ATL::CAtlException *v94; // [rsp+148h] [rbp-60h] BYREF
  GUID v95; // [rsp+150h] [rbp-58h] BYREF
  GUID v96; // [rsp+160h] [rbp-48h] BYREF
  CPipeInstance *v98; // [rsp+1B8h] [rbp+10h] BYREF
  struct CPipeInstance **v99; // [rsp+1C0h] [rbp+18h]
  BOOL v100; // [rsp+1C8h] [rbp+20h]

  v99 = a3;
  v92 = -2LL;
  v5 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 10;
  v6 = *(_DWORD *)a2 != 0;
  v100 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v80 = 0LL;
    FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v80);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v68 = 0LL;
    v8 = CProcessNode::CreateDummyProcessNode(v6, *((_QWORD *)a2 + 3), &v68);
    if ( v8 < 0 )
    {
      v70 = v8;
      throw (long *)&v70;
    }
    v9 = *((_QWORD *)&v61 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v61);
    v10 = (_QWORD *)*((_QWORD *)&v63 + 1);
    v11 = **((_QWORD **)&v63 + 1);
    *(_QWORD *)(*((_QWORD *)&v63 + 1) + 16LL) = v68;
    *((_QWORD *)&v63 + 1) = v11;
    v10[1] = v9;
    *v10 = 0LL;
    ++v62;
    if ( *((_QWORD *)&v61 + 1) )
      **((_QWORD **)&v61 + 1) = v10;
    else
      *(_QWORD *)&v61 = v10;
    *((_QWORD *)&v61 + 1) = v10;
    v68 = 0LL;
    v12 = 0;
    v72 = 0;
    while ( v12 < *((_DWORD *)a2 + 22) )
    {
      v98 = 0LL;
      v49 = *((_DWORD *)a2 + 16);
      if ( _bittest(&v49, v12) )
      {
        v50 = (GUID *)((char *)a2 + 68);
        v51 = 2;
        v60 = v80;
        if ( v80 )
          ((void (__fastcall *)(struct IPropertyStore *))v80->lpVtbl->AddRef)(v80);
        v5 |= 1u;
        v52 = v60;
      }
      else
      {
        v50 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v51 = 0;
        v81 = 0LL;
        v5 |= 2u;
        v52 = 0LL;
      }
      v95 = *v50;
      v53 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * v12 + 92, v52, v6, 0LL, v51, &v95, &v98);
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        if ( v81 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        if ( v60 )
          ((void (__fastcall *)(struct IPropertyStore *))v60->lpVtbl->Release)(v60);
      }
      if ( v53 < 0 )
      {
        v71 = v53;
        throw (long *)&v71;
      }
      v54 = *((_QWORD *)&v61 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v61);
      v55 = (_QWORD *)*((_QWORD *)&v63 + 1);
      v56 = **((_QWORD **)&v63 + 1);
      *(_QWORD *)(*((_QWORD *)&v63 + 1) + 16LL) = v98;
      *((_QWORD *)&v63 + 1) = v56;
      v55[1] = v54;
      *v55 = 0LL;
      ++v62;
      if ( *((_QWORD *)&v61 + 1) )
        **((_QWORD **)&v61 + 1) = v55;
      else
        *(_QWORD *)&v61 = v55;
      *((_QWORD *)&v61 + 1) = v55;
      v98 = 0LL;
      v72 = ++v12;
    }
    v67 = 0LL;
    v13 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &v67, 0.0, 0);
    if ( v13 < 0 )
    {
      v73 = v13;
      throw (long *)&v73;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v66 = 0LL;
        v16 = v67;
        v57 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->GetAudioFormat)(v67);
        v58 = CProcessNode::CreateDummyProcessNode(v6, v57, &v66);
        if ( v58 < 0 )
        {
          v75 = v58;
          throw (long *)&v75;
        }
        v86 = v66;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v61, &v86);
        v66 = 0LL;
      }
      else
      {
        v16 = v67;
      }
    }
    else
    {
      v65 = 0LL;
      v96 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v14 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              0LL,
              v6,
              1LL,
              0,
              &v96,
              &v65);
      if ( v14 < 0 )
      {
        v74 = v14;
        throw (long *)&v74;
      }
      v15 = v65;
      v16 = v67;
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v65 + 24LL))(v65, v67);
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v15 + 32LL))(v15, v16);
      v17 = *((_QWORD *)&v61 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v61);
      v18 = (_QWORD *)*((_QWORD *)&v63 + 1);
      v19 = **((_QWORD **)&v63 + 1);
      *(_QWORD *)(*((_QWORD *)&v63 + 1) + 16LL) = v15;
      *((_QWORD *)&v63 + 1) = v19;
      v18[1] = v17;
      *v18 = 0LL;
      ++v62;
      if ( *((_QWORD *)&v61 + 1) )
        **((_QWORD **)&v61 + 1) = v18;
      else
        *(_QWORD *)&v61 = v18;
      *((_QWORD *)&v61 + 1) = v18;
      v65 = 0LL;
    }
    v20 = (CPipeInstance *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
    v98 = v20;
    if ( v20 )
      v21 = CPipeInstance::CPipeInstance(v20, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
    else
      v21 = 0LL;
    if ( !v21 )
    {
      v76 = -2147024882;
      throw (long *)&v76;
    }
    v22 = (_WORD *)*((_QWORD *)a2 + 4);
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    *((_QWORD *)v21 + 23) = 0LL;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v59 = -2147024362;
      goto LABEL_118;
    }
    *((_QWORD *)v21 + 23) = 0LL;
    if ( !is_mul_ok(v24, 2uLL) )
    {
      v33 = -2147024362;
      LODWORD(v98) = -2147024362;
      goto LABEL_39;
    }
    v25 = CoTaskMemAlloc(2 * v24);
    v26 = v25;
    *((_QWORD *)v21 + 23) = v25;
    if ( !v25 )
    {
      v59 = -2147024882;
      goto LABEL_118;
    }
    v27 = 0;
    LODWORD(v98) = 0;
    v88 = v23;
    v87 = v22;
    if ( v24 > 0x7FFFFFFF )
      v27 = -2147024809;
    if ( v27 < 0 )
    {
      if ( v23 != -1LL )
LABEL_112:
        *v25 = 0;
    }
    else
    {
      v77 = 0;
      if ( v23 < 0x7FFFFFFF )
      {
        if ( !v22 )
        {
          v22 = &unk_14006CF10;
          v87 = &unk_14006CF10;
          v23 = 0LL;
          v88 = 0LL;
        }
        if ( v24 )
        {
          v84 = 0LL;
          v91 = v23;
          v89 = v22;
          v28 = v24;
          v90 = v24;
          v29 = v26;
          v82 = v26;
          v30 = 0;
          v31 = 0LL;
          v83 = 0LL;
          while ( v28 )
          {
            if ( !v23 || !*v22 )
              goto LABEL_36;
            *v29++ = *v22;
            v82 = v29;
            v89 = ++v22;
            v90 = --v28;
            v91 = --v23;
            v83 = ++v31;
          }
          v82 = --v29;
          v83 = --v31;
          v30 = -2147024774;
LABEL_36:
          *v29 = 0;
          v84 = v31;
          v32 = v24 - v31;
          if ( v30 >= 0 && v32 > 1 && 2 * v32 > 2 )
            memset_0(&v26[v84 + 1], 0, 2 * v32 - 2);
        }
        goto LABEL_38;
      }
      v77 = -2147024809;
      if ( v23 != -1LL )
        goto LABEL_112;
    }
LABEL_38:
    v33 = (int)v98;
LABEL_39:
    if ( v33 >= 0 )
    {
      *((_DWORD *)v21 + 30) = *(_DWORD *)a2 == 2;
      *((_DWORD *)v21 + 3) = v100;
      *((_DWORD *)v21 + 32) = *((_DWORD *)a2 + 16) != 0;
      if ( *((_QWORD *)v21 + 18) )
        ATL::AtlComPtrAssign((struct IUnknown **)v21 + 18, 0LL);
      v34 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v21 + 29);
      if ( v34 != a1 )
      {
        if ( a1 )
        {
          (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)a1 + 8LL))(a1);
          v34 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v21 + 29);
        }
        if ( v34 )
          (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v34 + 16LL))(v34);
        *((_QWORD *)v21 + 29) = a1;
      }
      *(_QWORD *)v21 = 0LL;
      *((_DWORD *)v21 + 2) = 1;
      v35 = *((_QWORD *)&v61 + 1);
      while ( 1 )
      {
        v36 = 0x1999999999999999LL;
        if ( !v35 )
          break;
        v37 = v35;
        v35 = *(_QWORD *)(v35 + 8);
        v38 = *((_QWORD *)v21 + 2);
        if ( !*((_QWORD *)v21 + 6) )
        {
          v42 = *((unsigned int *)v21 + 14);
          if ( *((_DWORD *)v21 + 14) )
          {
            if ( v42 != 10 )
              v36 = 0xFFFFFFFFFFFFFFFFuLL / v42;
            if ( v36 < 0x18 )
LABEL_114:
              ATL::AtlThrowImpl(-2147024882);
            v43 = 24 * v42;
          }
          else
          {
            v43 = 0LL;
          }
          if ( (unsigned __int64)~v43 < 8 )
            goto LABEL_114;
          v44 = malloc(v43 + 8);
          if ( !v44 )
            goto LABEL_114;
          *v44 = *((_QWORD *)v21 + 5);
          *((_QWORD *)v21 + 5) = v44;
          v85 = v44 + 1;
          v45 = *((_DWORD *)v21 + 14) - 1;
          v46 = &v44[3 * (unsigned int)v45 + 1];
          v85 = v46;
          while ( 1 )
          {
            v78 = v45;
            if ( v45 < 0 )
              break;
            *v46 = *((_QWORD *)v21 + 6);
            *((_QWORD *)v21 + 6) = v46;
            v46 -= 3;
            v85 = v46;
            --v45;
          }
        }
        v39 = (__int64 *)*((_QWORD *)v21 + 6);
        v40 = *v39;
        v39[2] = *(_QWORD *)(v37 + 16);
        *((_QWORD *)v21 + 6) = v40;
        v39[1] = 0LL;
        *v39 = v38;
        ++*((_QWORD *)v21 + 4);
        v41 = *((_QWORD *)v21 + 2);
        if ( v41 )
          *(_QWORD *)(v41 + 8) = v39;
        else
          *((_QWORD *)v21 + 3) = v39;
        *((_QWORD *)v21 + 2) = v39;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v61);
      *((_DWORD *)v21 + 35) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                              / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                      * (double)(int)*((_QWORD *)a2 + 7)
                                                      / 10000000.0
                                                      + 0.5)
                                         * 1.1);
      *((_DWORD *)v21 + 33) = 0;
      *((_DWORD *)v21 + 51) = 0;
      *((_OWORD *)v21 + 13) = *(_OWORD *)((char *)a2 + 68);
      *((_BYTE *)v21 + 309) = *((_BYTE *)a2 + 85);
      *v99 = v21;
      if ( v16 )
        ((void (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->Release)(v16);
      v68 = 0LL;
      if ( v80 )
        ((void (__fastcall *)(struct IPropertyStore *))v80->lpVtbl->Release)(v80);
      goto LABEL_126;
    }
    v59 = (int)v98;
LABEL_118:
    v79 = v59;
    throw (long *)&v79;
  }
  catch ( long *v93 )
  {
    v47 = *(_DWORD *)v93;
    goto LABEL_70;
  }
  catch ( ATL::CAtlException *v94 )
  {
    v47 = *(_DWORD *)v94;
    goto LABEL_70;
  }
LABEL_126:
  v47 = (int)v98;
LABEL_70:
  if ( v47 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        (unsigned int)v47);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateSubmixPipeInstance", 0x1CEu, v47);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v61);
  return (unsigned int)v47;
}
