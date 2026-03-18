/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18009D298
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18009D5B8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18006FD1C (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x18006FF78 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180078758 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x18009D55C (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18009D92C (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x1801564D0 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_1801564D0.c)
 *     McTemplateU0pdsddt @ 0x1801565B0 (McTemplateU0pdsddt.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        HANDLE *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v6; // di
  struct CEffectCompilationTask **v7; // r13
  struct CCompiledEffectTemplate *v9; // rsi
  _QWORD *v10; // r12
  PTP_WORK *v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edx
  signed int v15; // edi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  struct CEffectCompilationTask *v26; // rax
  PVOID *v28; // rcx
  CEffectCompilationTask *v29; // rax
  CEffectCompilationTask *v30; // rax
  unsigned int v31; // ecx
  PTP_WORK ThreadpoolWork; // rax
  int v33; // eax
  signed int LastError; // eax
  const char *v35; // r13
  __int64 v36; // rcx
  int v37; // r12d
  char v38; // si
  char v39; // di
  char v40; // al
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // ecx
  struct _RTL_CRITICAL_SECTION *v44[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v45; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  PVOID v47; // [rsp+B0h] [rbp+48h] BYREF
  struct CCompiledEffectTemplate *v48; // [rsp+B8h] [rbp+50h]
  PVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  struct CEffectCompilationTask **v50; // [rsp+C8h] [rbp+60h]

  v50 = a4;
  v48 = a2;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v6 = 1;
  LOBYTE(v47) = 1;
  v7 = a4;
  *((_QWORD *)&v45 + 1) = a3;
  v9 = a2;
  v10 = this + 14;
  LODWORD(v45) = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 136))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v10,
    v44,
    (unsigned int *)&v45);
  if ( v44[0] == this[15] )
  {
    v29 = (CEffectCompilationTask *)WPF::ProcessHeapImpl::AllocClear(0x68uLL);
    if ( !v29 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v30 = CEffectCompilationTask::CEffectCompilationTask(v29, (struct CEffectCompilationService *)this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v30);
    v11 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0x8Cu);
      return (unsigned int)v15;
    }
    if ( CCommonRegistryData::m_fEnableEffectCaching )
    {
      v47 = pv;
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        (__int64)(this + 14),
        (__int64)v44,
        &v45,
        &v47);
    }
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_,
                       v11,
                       0LL);
    v11[7] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      v15 = 0;
    }
    else
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v15, 0x93u);
      goto LABEL_19;
    }
    v6 = 0;
    LOBYTE(v47) = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v44[0]->SpinCount);
    v11 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(
      (CEffectCompilationService *)this,
      (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    pv = 0LL;
    v35 = "null";
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    if ( (*(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(*(_QWORD *)a3 + 120LL))(
           a3,
           &pv) >= 0 )
      v35 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v36 = *((_QWORD *)v9 + 6);
      if ( v36 )
        v37 = *(_DWORD *)(v36 + 68);
      else
        v37 = 0;
      v38 = v6;
      v39 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 48LL))(a3);
      v40 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 112LL))(a3);
      McTemplateU0pdsddt(v42, v41, (_DWORD)v11, v37, (__int64)v35, v40, v39, v38);
      v9 = v48;
      v10 = this + 14;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    v7 = v50;
  }
  v13 = *((unsigned int *)v11 + 10);
  pv = v9;
  v14 = v13 + 1;
  v15 = (int)v13 + 1 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( (int)v13 + 1 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v15, 0xB5u);
  }
  else if ( v14 <= *((_DWORD *)v11 + 9) )
  {
    v17 = v13;
    *((_QWORD *)v11[2] + v13) = pv;
    *((_DWORD *)v11 + 10) = v14;
  }
  else
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v11 + 2), 8, 1, &pv);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC0u);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v15, 0x80u);
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v15, 0xB0u);
  }
  else
  {
    v44[0] = (struct _RTL_CRITICAL_SECTION *)(this + 4);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
    v18 = (__int64 *)(this + 10);
    v19 = 0;
    v20 = *((unsigned int *)this + 26);
    v21 = this[10];
    if ( (_DWORD)v20 )
    {
      v28 = (PVOID *)this[10];
      while ( v11 != *v28 )
      {
        ++v19;
        ++v28;
        if ( v19 >= (unsigned int)v20 )
          goto LABEL_10;
      }
      goto LABEL_16;
    }
LABEL_10:
    v22 = v20 + 1;
    pv = v11;
    v15 = (int)v20 + 1 < (unsigned int)v20 ? 0x80070216 : 0;
    if ( (int)v20 + 1 < (unsigned int)v20 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v15, 0xB5u);
    }
    else if ( v22 > *((_DWORD *)this + 25) )
    {
      v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 10), 8, 1, &pv);
      v15 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v33, 0xC0u);
    }
    else
    {
      v21[v20] = pv;
      *((_DWORD *)this + 26) = v22;
    }
    if ( v15 >= 0 )
    {
      if ( *((_BYTE *)v11 + 92) )
      {
        v23 = *v18;
        v24 = *((unsigned int *)this + 19);
        v25 = *(_QWORD *)(*v18 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
        *(_QWORD *)(v23 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v18 + 8 * v24);
        *(_QWORD *)(v23 + 8 * v24) = v25;
        ++*((_DWORD *)this + 19);
        SetEvent(this[3]);
      }
LABEL_16:
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v44);
      if ( !(_BYTE)v47 )
        SubmitThreadpoolWork(v11[7]);
      v26 = (struct CEffectCompilationTask *)v11;
      v11 = 0LL;
      *v7 = v26;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v15, 0xB8u);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v44);
  }
LABEL_19:
  if ( v15 < 0 )
  {
    if ( !v11 )
      return (unsigned int)v15;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v10,
      &v45);
  }
  if ( v11 )
    (*((void (__fastcall **)(PTP_WORK *))*v11 + 1))(v11);
  return (unsigned int)v15;
}
