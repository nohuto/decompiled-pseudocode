/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180038334
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180034568 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180034F10 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180038004 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18003871C (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800387EC (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x180038844 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18007B0B4 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CE880 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        struct CBrushRenderingGraph **this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  CRenderingTechniqueFragment *v6; // rbx
  _QWORD *v7; // r15
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v10; // rsi
  struct _TP_WORK *v11; // rcx
  struct CRenderingTechniqueFragment *v12; // r12
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // r14d
  _QWORD *v17; // rdx
  unsigned int v18; // r15d
  __int64 v19; // r13
  unsigned int v20; // edi
  void *v21; // rax
  unsigned int v22; // edx
  bool v23; // cl
  CRenderingTechniqueFragment *v24; // r14
  CRenderingTechniqueFragment *v25; // rcx
  unsigned int v26; // r12d
  unsigned int v27; // eax
  __int64 v28; // rsi
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  CRenderingTechniqueFragment *v32; // r8
  CRenderingTechniqueFragment *v33; // rcx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // esi
  __int64 v37; // rax
  struct CRenderingTechniqueFragment *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 v42; // rax
  struct CSpriteVisualContent *v43; // rdi
  CRenderingTechniqueFragment *v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rax
  char v48; // al
  bool v49; // r8
  CRenderingTechniqueFragment *v50; // rcx
  unsigned int v51; // edx
  CRenderingTechniqueFragment *v52; // r8
  unsigned int v53[2]; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+30h] [rbp-D8h]
  char v55; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v56; // [rsp+3Ch] [rbp-CCh]
  CRenderingTechniqueFragment *v57; // [rsp+40h] [rbp-C8h] BYREF
  CRenderingTechniqueFragment *v58; // [rsp+48h] [rbp-C0h] BYREF
  CRenderingTechniqueFragment **v59; // [rsp+50h] [rbp-B8h] BYREF
  struct CRenderingTechniqueFragment *v60; // [rsp+58h] [rbp-B0h] BYREF
  int v61; // [rsp+60h] [rbp-A8h]
  unsigned int v62; // [rsp+68h] [rbp-A0h]
  unsigned int v63; // [rsp+6Ch] [rbp-9Ch]
  int v64; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v65; // [rsp+74h] [rbp-94h]
  const struct Windows::UI::Composition::ICompiledEffect *v66; // [rsp+78h] [rbp-90h]
  _QWORD v67[3]; // [rsp+80h] [rbp-88h] BYREF
  struct CRenderingTechniqueFragment *v68; // [rsp+98h] [rbp-70h]
  __int64 v69; // [rsp+A0h] [rbp-68h] BYREF
  CRenderingTechniqueFragment *v70; // [rsp+A8h] [rbp-60h]
  __int64 v71; // [rsp+B0h] [rbp-58h] BYREF
  CRenderingTechniqueFragment *v72; // [rsp+B8h] [rbp-50h]
  __int64 v73; // [rsp+C0h] [rbp-48h] BYREF
  CRenderingTechniqueFragment *v74; // [rsp+C8h] [rbp-40h]
  __int64 v75; // [rsp+D0h] [rbp-38h]
  _QWORD *v76; // [rsp+D8h] [rbp-30h]
  int v77; // [rsp+E0h] [rbp-28h]
  CRenderingTechniqueFragment *v78; // [rsp+E8h] [rbp-20h] BYREF
  int v79; // [rsp+F0h] [rbp-18h]
  CRenderingTechniqueFragment *v80; // [rsp+F8h] [rbp-10h] BYREF

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 11);
  v6 = 0LL;
  v7 = *(_QWORD **)(*((_QWORD *)v4 + 9) + 48LL);
  v76 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 9);
  v10 = CompiledEffectNoRef;
  v66 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 56);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v12 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 13);
  v75 = *(_QWORD *)(v9 + 72);
  v13 = *v7;
  v68 = v12;
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(v13 + 32))(v7);
  memset(v67, 0, sizeof(v67));
  v65 = v14;
  v15 = v14;
  v16 = v14 - 1;
  v56 = v14 - 1;
  std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___(
    v67,
    v14 - 1);
  v18 = 0;
  if ( !v15 )
  {
LABEL_28:
    v38 = v6;
    v6 = 0LL;
    v36 = 0;
    *a4 = v38;
    goto LABEL_29;
  }
  v19 = 0LL;
  while ( 1 )
  {
    v63 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
            v10,
            v18);
    v20 = v63;
    v21 = DefaultHeap::Alloc(0x80uLL);
    if ( v21 )
    {
      v23 = a3 && v18 == v16;
      LOBYTE(v54) = v23;
      v53[0] = v20;
      v24 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                             v21,
                                             v12,
                                             v75,
                                             v18,
                                             *(_QWORD *)v53,
                                             v54);
    }
    else
    {
      v24 = 0LL;
    }
    v25 = v6;
    v6 = v24;
    v58 = v24;
    if ( v25 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v25, v22);
    if ( !v24 )
    {
      v36 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, -2147024882, 0xD8u, 0LL);
      goto LABEL_29;
    }
    v26 = 0;
    v62 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 32LL))(
            v10,
            v18);
    if ( v62 )
      break;
LABEL_21:
    if ( v18 != v56 )
    {
      v34 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v24);
      v36 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x11Fu, 0LL);
        goto LABEL_29;
      }
      if ( (v20 & 8) != 0 )
      {
        v37 = v67[0];
        v80 = v24;
        v79 = -1;
        v6 = 0LL;
        *(_DWORD *)(v67[0] + v19) = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v19 + v37 + 8, &v80);
        if ( v80 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v80, (unsigned int)v17);
      }
      else
      {
        v45 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v58, &v64);
        v36 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x124u, 0LL);
          v6 = v58;
          goto LABEL_29;
        }
        v47 = v67[0];
        v78 = 0LL;
        v77 = v64;
        *(_DWORD *)(v67[0] + v19) = v64;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(v19 + v47 + 8, &v78);
        if ( v78 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v78, (unsigned int)v17);
        v6 = v58;
      }
    }
    ++v18;
    v19 += 16LL;
    if ( v18 >= v65 )
      goto LABEL_28;
    v10 = v66;
    v16 = v56;
    v12 = v68;
  }
  while ( 1 )
  {
    v27 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v10 + 48LL))(
            v10,
            v18,
            v26,
            &v55);
    v28 = v27;
    if ( !v55 )
      break;
    v29 = (_QWORD *)((char *)v24 + 32);
    v30 = v67[0] + 16LL * v27;
    v31 = *(_DWORD *)v30;
    if ( *(_DWORD *)v30 == -1 )
    {
      v32 = *(CRenderingTechniqueFragment **)(v30 + 8);
      *(_QWORD *)(v30 + 8) = 0LL;
      v17 = (_QWORD *)*((_QWORD *)v24 + 5);
      v72 = v32;
      if ( *((_QWORD **)v24 + 6) == v17 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v29,
          v17,
          &v71);
        v33 = v72;
        goto LABEL_17;
      }
      *v17 = v71;
      v17[1] = v32;
      v72 = 0LL;
    }
    else
    {
      v17 = (_QWORD *)*((_QWORD *)v24 + 5);
      v70 = 0LL;
      LODWORD(v69) = v31;
      BYTE4(v69) = 1;
      if ( *((_QWORD **)v24 + 6) == v17 )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v29,
          v17,
          &v69);
        v33 = v70;
LABEL_17:
        if ( v33 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v33, (unsigned int)v17);
        goto LABEL_19;
      }
      *v17 = v69;
      v17[1] = 0LL;
    }
    *((_QWORD *)v24 + 5) += 16LL;
LABEL_19:
    v10 = v66;
    if ( ++v26 >= v62 )
    {
      LOBYTE(v20) = v63;
      goto LABEL_21;
    }
  }
  v42 = *((_QWORD *)a2 + 14);
  v43 = *(struct CSpriteVisualContent **)(v42 + 8 * v28);
  if ( !v43 || !*((_BYTE *)v43 + 72) )
  {
    v59 = *(CRenderingTechniqueFragment ***)(v42 + 8 * v28);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v76 + 48LL))(v76, (unsigned int)v28) )
    {
      v60 = v68;
      v61 = v28;
    }
    else
    {
      v60 = 0LL;
      v61 = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      (CBrushRenderingGraphBuilder *)this,
      v24,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v59);
    goto LABEL_19;
  }
  if ( a3
    || (v48 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v66 + 56LL))(
                v66,
                v18,
                v26,
                0LL,
                0LL),
        v49 = 0,
        v48) )
  {
    v49 = 1;
  }
  v57 = 0LL;
  v60 = 0LL;
  v59 = &v57;
  LOBYTE(v61) = 1;
  v36 = CBrushRenderingGraphBuilder::AddBrush((CBrushRenderingGraphBuilder *)this, v43, v49, &v60);
  if ( (_BYTE)v61 )
  {
    v51 = (unsigned int)v60;
    v50 = *v59;
    *v59 = v60;
    if ( v50 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v50, v51);
  }
  if ( v36 >= 0 )
  {
    v52 = v57;
    v57 = 0LL;
    v17 = (_QWORD *)*((_QWORD *)v24 + 5);
    v74 = v52;
    if ( *((_QWORD **)v24 + 6) == v17 )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v24 + 32,
        v17,
        &v73);
      if ( v74 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v74, (unsigned int)v17);
    }
    else
    {
      *v17 = v73;
      v17[1] = v52;
      *((_QWORD *)v24 + 5) += 16LL;
      v74 = 0LL;
    }
    v33 = v57;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v50, 0LL, 0, v36, 0x103u, 0LL);
  if ( v57 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v57, (unsigned int)v17);
LABEL_29:
  v39 = v67[0];
  if ( v67[0] )
  {
    v40 = v67[1];
    if ( v67[0] != v67[1] )
    {
      do
      {
        v44 = *(CRenderingTechniqueFragment **)(v39 + 8);
        if ( v44 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v44, (unsigned int)v17);
        v39 += 16LL;
      }
      while ( v39 != v40 );
      v39 = v67[0];
    }
    std::_Deallocate<16,0>(v39, (v67[2] - v39) & 0xFFFFFFFFFFFFFFF0uLL);
    memset(v67, 0, sizeof(v67));
  }
  if ( v6 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v6, (unsigned int)v17);
  return (unsigned int)v36;
}
