/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800E06B4 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800E1218 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800E12E8 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x1800E1340 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800E1440 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800E1454 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E1F80 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA@XZ @ 0x1801DF658 (--1-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrushRend.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        struct CBrushRenderingGraph **this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rbx
  struct CRenderingTechniqueFragment *v6; // r15
  _QWORD *v7; // rsi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rbx
  struct _TP_WORK *v10; // rcx
  struct CRenderingTechniqueFragment *v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  __int64 v17; // r13
  const struct Windows::UI::Composition::ICompiledEffect *v18; // rbx
  int v19; // edi
  LPVOID v20; // rax
  unsigned int v21; // edx
  bool v22; // cl
  struct CRenderingTechniqueFragment *v23; // rsi
  CRenderingTechniqueFragment *v24; // rcx
  unsigned int v25; // r12d
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 *v31; // rcx
  _QWORD *v32; // rdx
  const char *v33; // r9
  __int64 v34; // rax
  struct CSpriteVisualContent *v35; // rdi
  bool v36; // r8
  CRenderingTechniqueFragment *v37; // rcx
  int v38; // ebx
  unsigned int v39; // edx
  __int64 v40; // r8
  _QWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // edx
  int v47; // r9d
  __int64 v49; // [rsp+28h] [rbp-E0h]
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+30h] [rbp-D8h]
  char v52; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-CCh]
  __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  struct CRenderingTechniqueFragment *v55; // [rsp+48h] [rbp-C0h] BYREF
  CRenderingTechniqueFragment **v56; // [rsp+50h] [rbp-B8h] BYREF
  struct CRenderingTechniqueFragment *v57; // [rsp+58h] [rbp-B0h] BYREF
  int v58; // [rsp+60h] [rbp-A8h]
  unsigned int v59; // [rsp+68h] [rbp-A0h]
  int v60; // [rsp+6Ch] [rbp-9Ch]
  int v61; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-94h]
  const struct Windows::UI::Composition::ICompiledEffect *v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  struct CRenderingTechniqueFragment *v66; // [rsp+90h] [rbp-78h]
  __int128 v67; // [rsp+98h] [rbp-70h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-38h]
  _QWORD *v74; // [rsp+D8h] [rbp-30h]
  int v75; // [rsp+E0h] [rbp-28h]
  CRenderingTechniqueFragment *v76; // [rsp+E8h] [rbp-20h] BYREF
  int v77; // [rsp+F0h] [rbp-18h]
  CRenderingTechniqueFragment *v78; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v7 = *(_QWORD **)(*((_QWORD *)v4 + 9) + 48LL);
  v74 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 9);
  v63 = CompiledEffectNoRef;
  v10 = *(struct _TP_WORK **)(v9 + 56);
  if ( v10 )
  {
    WaitForThreadpoolWorkCallbacks(v10, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v11 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 12);
  v73 = *(_QWORD *)(v9 + 72);
  v12 = *v7;
  v66 = v11;
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(v12 + 48))(v7);
  v68 = 0LL;
  v62 = v13;
  v14 = v13;
  v15 = v13 - 1;
  v53 = v13 - 1;
  v67 = 0LL;
  std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___(
    &v67,
    v13 - 1);
  v16 = 0;
  if ( !v14 )
  {
LABEL_68:
    v55 = 0LL;
    v38 = 0;
    *a4 = v6;
    goto LABEL_69;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v18 = v63;
    v19 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v63 + 40LL))(
            v63,
            v16);
    v60 = v19;
    v20 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( v20 )
    {
      v22 = a3 && v16 == v15;
      LOBYTE(v51) = v22;
      LODWORD(v49) = v19;
      v23 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                    v20,
                                                    v11,
                                                    v73,
                                                    v16,
                                                    v49,
                                                    v51);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = v6;
    v55 = v23;
    v6 = v23;
    if ( v24 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v24, v21);
    if ( !v23 )
    {
      v38 = -2147024882;
      v50 = 207;
      v47 = -2147024882;
      goto LABEL_67;
    }
    v25 = 0;
    v59 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v18 + 32LL))(
            v18,
            v16);
    if ( v59 )
      break;
LABEL_51:
    if ( v16 != v53 )
    {
      v42 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v23);
      v38 = v42;
      if ( v42 < 0 )
      {
        v50 = 290;
LABEL_65:
        v47 = v42;
LABEL_67:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, v47, v50);
        goto LABEL_69;
      }
      if ( (v19 & 8) != 0 )
      {
        v45 = v67;
        v78 = v23;
        v77 = -1;
        v6 = 0LL;
        *(_DWORD *)(v67 + v17) = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v17 + v45 + 8, &v78);
        if ( v78 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v78, v46);
      }
      else
      {
        v42 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v55, &v61);
        v38 = v42;
        if ( v42 < 0 )
        {
          v50 = 295;
          goto LABEL_65;
        }
        v43 = v67;
        v76 = 0LL;
        v75 = v61;
        *(_DWORD *)(v67 + v17) = v61;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v17 + v43 + 8, &v76);
        if ( v76 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v76, v44);
        v6 = v55;
      }
    }
    ++v16;
    v17 += 16LL;
    if ( v16 >= v62 )
      goto LABEL_68;
    v15 = v53;
    v11 = v66;
  }
  while ( 1 )
  {
    v26 = (*(unsigned int (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v18 + 48LL))(
            v18,
            v16,
            v25,
            &v52);
    if ( v52 )
    {
      if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_634173755_57814423_FeatureDescriptorDetails)
        && v26 >= (__int64)(*((_QWORD *)&v67 + 1) - v67) >> 4 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xDF,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraphbuilder.cpp",
          (const char *)retaddr);
        JUMPOUT(0x1800E120ELL);
      }
      v27 = (_QWORD *)((char *)v23 + 32);
      v28 = v67 + 16 * v26;
      if ( *(_DWORD *)v28 == -1 )
      {
        v29 = *(_QWORD *)(v28 + 8);
        *(_QWORD *)(v28 + 8) = 0LL;
        v30 = (_QWORD *)*((_QWORD *)v23 + 5);
        v70 = v29;
        if ( *((_QWORD **)v23 + 6) == v30 )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            v27,
            v30,
            &v69);
        }
        else
        {
          *v30 = v69;
          v30[1] = v29;
          *((_QWORD *)v23 + 5) += 16LL;
          v70 = 0LL;
        }
        v31 = &v70;
      }
      else
      {
        LODWORD(v64) = *(_DWORD *)v28;
        v32 = (_QWORD *)*((_QWORD *)v23 + 5);
        v65 = 0LL;
        BYTE4(v64) = 1;
        if ( *((_QWORD **)v23 + 6) == v32 )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            v27,
            v32,
            &v64);
        }
        else
        {
          *v32 = v64;
          v32[1] = 0LL;
          *((_QWORD *)v23 + 5) += 16LL;
          v65 = 0LL;
        }
        v31 = &v65;
      }
      goto LABEL_44;
    }
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_634173755_57814423_FeatureDescriptorDetails)
      && (unsigned int)v26 >= *((_DWORD *)a2 + 32) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1F5,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
        v33);
      __debugbreak();
    }
    v34 = *((_QWORD *)a2 + 13);
    v35 = *(struct CSpriteVisualContent **)(v34 + 8 * v26);
    if ( !v35
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v35 + 48LL))(*(_QWORD *)(v34 + 8 * v26), 50LL) )
    {
      v56 = (CRenderingTechniqueFragment **)v35;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v74 + 80LL))(v74, (unsigned int)v26) )
      {
        v57 = v66;
        v58 = v26;
      }
      else
      {
        v57 = 0LL;
        v58 = 0;
      }
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        (CBrushRenderingGraphBuilder *)this,
        v23,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v56);
      goto LABEL_49;
    }
    *((_BYTE *)this + 8) = 1;
    v36 = a3
       || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v63 + 56LL))(
            v63,
            v16,
            v25,
            0LL,
            0LL);
    v54 = 0LL;
    v57 = 0LL;
    v56 = (CRenderingTechniqueFragment **)&v54;
    LOBYTE(v58) = 1;
    v38 = CBrushRenderingGraphBuilder::AddBrush((CBrushRenderingGraphBuilder *)this, v35, v36, &v57);
    if ( (_BYTE)v58 )
    {
      v39 = (unsigned int)v57;
      v37 = *v56;
      *v56 = v57;
      if ( v37 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v37, v39);
    }
    if ( v38 < 0 )
      break;
    v40 = v54;
    v54 = 0LL;
    v41 = (_QWORD *)*((_QWORD *)v23 + 5);
    v72 = v40;
    if ( *((_QWORD **)v23 + 6) == v41 )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v23 + 32,
        v41,
        &v71);
    }
    else
    {
      *v41 = v71;
      v41[1] = v40;
      *((_QWORD *)v23 + 5) += 16LL;
      v72 = 0LL;
    }
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v72);
    v31 = &v54;
LABEL_44:
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v31);
LABEL_49:
    v18 = v63;
    if ( ++v25 >= v59 )
    {
      LOBYTE(v19) = v60;
      goto LABEL_51;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v37, 0LL, 0, v38, 0x104u);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v54);
LABEL_69:
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::~vector<CBrushRenderingGraphBuilder::SubgraphOutput>(&v67);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v55);
  return (unsigned int)v38;
}
