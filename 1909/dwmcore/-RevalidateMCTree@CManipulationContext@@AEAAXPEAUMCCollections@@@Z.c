/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023C8E0
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18023C1FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180175E5C (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D6990 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180236C98 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180236CC8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x18023AB18 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x18023AEB4 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x18023AF0C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023BC60 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x18023D1FC (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // eax
  unsigned __int8 v3; // r12
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // r8
  int Key; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // r15d
  __int64 v18; // rbx
  struct CInteraction *v19; // rbx
  bool *v20; // rdx
  struct CInteraction *v21; // rax
  struct CInteraction *ClosestInteractionAncestor; // rsi
  __int64 v23; // rax
  struct CInteraction *i; // rdi
  const struct CVisual *v25; // rcx
  __int64 v26; // rax
  struct CInteraction *j; // rdi
  struct MCCollections *v28; // rbx
  __int64 v29; // r13
  CComposition *v30; // rdi
  __int64 v31; // rax
  struct CVisual *v32; // rcx
  bool *v33; // rdx
  __int64 v34; // rax
  const struct CVisual *v35; // rcx
  struct CInteraction *v36; // r15
  struct CInteraction *v37; // rdi
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct CInteraction *v42; // r8
  unsigned int v43; // r15d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // r8
  __int64 k; // rcx
  struct CVisualTree *v51; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v52; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-C0h]
  unsigned int v54; // [rsp+44h] [rbp-BCh]
  unsigned int v55; // [rsp+48h] [rbp-B8h] BYREF
  CManipulationContext *v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  struct MCCollections *v59; // [rsp+68h] [rbp-98h]
  HMONITOR v60; // [rsp+70h] [rbp-90h] BYREF
  struct CInteraction *v61; // [rsp+78h] [rbp-88h] BYREF
  struct CInteraction *v62; // [rsp+80h] [rbp-80h] BYREF
  struct CInteraction *v63; // [rsp+88h] [rbp-78h] BYREF
  struct CInteraction *v64; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct CVisualTree **v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  struct CInteraction **v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  CManipulationContext **v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct CInteraction **v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+FCh] [rbp-4h]
  struct CInteraction **v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+10Ch] [rbp+Ch]

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  v59 = a2;
  v6 = 0;
  if ( v2 > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v7 + *((_QWORD *)this + 9));
      if ( v8 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 208);
          *(_QWORD *)(v8 + 200) = v9;
          v8 = v9;
        }
        while ( v9 );
      }
      v2 = *((_DWORD *)this + 20);
      ++v6;
      v7 += 8LL;
    }
    while ( v6 < v2 );
  }
  v54 = 0;
  v10 = 0;
  if ( v2 > 0 )
  {
    v11 = 0LL;
    v58 = 0LL;
    v57 = 0LL;
    v12 = (_QWORD *)((char *)this + 64);
    v13 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v52) = *(_DWORD *)(v11 + *v12);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v13,
              (int *)&v52);
      if ( Key == -1 )
        v17 = 2;
      else
        v17 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL * Key);
      v18 = *((_QWORD *)this + 9);
      v53 = v17;
      v19 = *(struct CInteraction **)(v15 + v18);
      v64 = v19;
      v51 = v19;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v51);
      v21 = (struct CInteraction *)*((_QWORD *)v19 + 24);
      ClosestInteractionAncestor = v19;
      if ( v21 )
      {
        do
        {
          ClosestInteractionAncestor = v21;
          v21 = (struct CInteraction *)*((_QWORD *)v21 + 24);
        }
        while ( v21 );
        v51 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v51);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v10,
          &v52,
          &v51);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 8LL))(ClosestInteractionAncestor);
      }
      v23 = *((_QWORD *)ClosestInteractionAncestor + 13);
      if ( !v23 || !*(_QWORD *)(v23 + 16) )
      {
        v51 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v51);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v10,
          &v52,
          &v51);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(v25, v20) )
      {
        if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
        {
          v51 = this;
          v66 = &v51;
          v68 = &v52;
          v67 = 8LL;
          v52 = i;
          v69 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DEB67, 0LL, 0LL, 4u, &pData);
        }
        *((_BYTE *)i + 184) |= 0x40u;
        v25 = 0LL;
        v26 = *((_QWORD *)i + 13);
        if ( v26 )
          v25 = *(const struct CVisual **)(v26 + 16);
      }
      for ( j = v19; j; j = (struct CInteraction *)*((_QWORD *)j + 25) )
      {
        if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
        {
          v51 = this;
          v66 = &v51;
          v68 = &v52;
          v67 = 8LL;
          v52 = j;
          v69 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DEBB9, 0LL, 0LL, 4u, &pData);
        }
        *((_BYTE *)j + 184) |= 0x80u;
      }
      if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v51 = this;
        v66 = &v51;
        v68 = &v52;
        v70 = &v56;
        v67 = 8LL;
        v52 = ClosestInteractionAncestor;
        v69 = 8LL;
        v56 = v19;
        v71 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DEA84, 0LL, 0LL, 5u, &pData);
      }
      if ( ClosestInteractionAncestor != v19 )
        CManipulationContext::CleanStaleFork((__int64)this, v17, v19);
      if ( ClosestInteractionAncestor )
        break;
LABEL_67:
      v3 = 0;
      if ( v19 )
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v19 + 8LL))(v19);
      v12 = (_QWORD *)((char *)this + 64);
      v11 = v57 + 4;
      v2 = *((_DWORD *)this + 20);
      v54 = ++v10;
      v57 += 4LL;
      v58 += 8LL;
      v13 = (char *)v59 + 40;
      if ( (int)v10 >= v2 )
        goto LABEL_70;
    }
    v28 = v59;
    v29 = v17;
    while ( 1 )
    {
      v51 = 0LL;
      CManipulationContext::FindMonitorAndWorkspace(v28, ClosestInteractionAncestor, &v60, &v55);
      v30 = (CComposition *)*((_QWORD *)this + 6);
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v51);
      CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(v30, v60, v55, &v51);
      if ( v51 )
      {
        v31 = *((_QWORD *)ClosestInteractionAncestor + 13);
        v32 = 0LL;
        if ( v31 )
          v32 = *(struct CVisual **)(v31 + 16);
        CManipulationContext::OnVisualPropertyChange(v32, v51);
      }
      v3 |= *((_DWORD *)ClosestInteractionAncestor + 47) == 2;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor);
      v34 = *((_QWORD *)ClosestInteractionAncestor + 13);
      v35 = 0LL;
      v36 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 25);
      v37 = ClosestInteractionAncestor;
      if ( v34 )
        v35 = *(const struct CVisual **)(v34 + 16);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v35, v33);
      if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v74 = 0;
        v77 = 0;
        v66 = &v56;
        v68 = &v61;
        v70 = &v62;
        v72 = &v63;
        LODWORD(v52) = v3;
        v75 = &v52;
        v56 = this;
        v67 = (unsigned int)(v38 + 6);
        v61 = ClosestInteractionAncestor;
        v69 = v67;
        v62 = v36;
        v71 = v67;
        v63 = v37;
        v73 = v38 + 6;
        v76 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DEAE6, 0LL, 0LL, 7u, &pData);
      }
      if ( v36 == ClosestInteractionAncestor )
      {
        v43 = v53;
      }
      else
      {
        v39 = *((_QWORD *)v37 + 27);
        if ( v39 )
          *(_QWORD *)(v39 + 224) = *((_QWORD *)v37 + 28);
        v40 = *((_QWORD *)v37 + 28);
        if ( v40 )
          *(_QWORD *)(v40 + 216) = *((_QWORD *)v37 + 27);
        v41 = *((_QWORD *)v37 + 26);
        if ( v41 && *(struct CInteraction **)(v41 + 232) == v37 )
          *(_QWORD *)(v41 + 232) = *((_QWORD *)v37 + 27);
        *((_QWORD *)v37 + 28) = 0LL;
        v42 = v36;
        v43 = v53;
        *((_QWORD *)v37 + 27) = 0LL;
        *((_QWORD *)v37 + 26) = 0LL;
        CManipulationContext::CleanStaleFork((__int64)this, v43, v42);
        if ( !ClosestInteractionAncestor )
          goto LABEL_65;
        *((_QWORD *)v37 + 27) = *((_QWORD *)ClosestInteractionAncestor + 29);
        v44 = *((_QWORD *)ClosestInteractionAncestor + 29);
        if ( v44 )
          *(_QWORD *)(v44 + 224) = v37;
        *((_QWORD *)ClosestInteractionAncestor + 29) = v37;
        *((_QWORD *)v37 + 26) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && *((char *)ClosestInteractionAncestor + 184) >= 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v45) = 1;
          LOBYTE(v46) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v45,
            v46,
            v43);
        }
        v47 = v29 - 1;
        if ( v43 - 1 >= 6 )
          v47 = 0LL;
        ++*((_DWORD *)ClosestInteractionAncestor + v47 + 60);
      }
LABEL_65:
      *((_BYTE *)v37 + 184) &= 0x3Fu;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v51);
      if ( !ClosestInteractionAncestor )
      {
        v19 = v64;
        v10 = v54;
        goto LABEL_67;
      }
    }
  }
LABEL_70:
  v48 = 0;
  if ( v2 > 0 )
  {
    v49 = 0LL;
    do
    {
      for ( k = *(_QWORD *)(v49 + *((_QWORD *)this + 9)); k; k = *(_QWORD *)(k + 208) )
        *(_QWORD *)(k + 200) = 0LL;
      ++v48;
      v49 += 8LL;
    }
    while ( v48 < *((_DWORD *)this + 20) );
  }
}
