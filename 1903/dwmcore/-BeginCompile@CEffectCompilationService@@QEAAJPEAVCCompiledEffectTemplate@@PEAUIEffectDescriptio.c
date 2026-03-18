/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18002F928
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18002F81C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x18002FBF0 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18002FC4C (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@1@@Z @ 0x18002FD1C (--$_Insert@AEAU-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$_List_unch.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x18002FE14 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ??$emplace_front@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18002FF88 (--$emplace_front@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$list@U-$pair@$$CBUEffe.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180030068 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18018C380 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_18018C380.c)
 *     McTemplateU0pdsddt @ 0x18018C4C4 (McTemplateU0pdsddt.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  struct CEffectCompilationTask **v6; // r12
  struct CCompiledEffectTemplate *v8; // rsi
  char *v9; // r13
  PTP_WORK *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  signed int v15; // edi
  __int64 *v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  struct CEffectCompilationTask *v24; // rax
  PVOID *v26; // rcx
  CEffectCompilationTask *v27; // rax
  __int64 v28; // r8
  CEffectCompilationTask *v29; // rax
  unsigned int v30; // ecx
  PTP_WORK ThreadpoolWork; // rax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  signed int LastError; // eax
  __int64 v36; // rax
  const char *v37; // r13
  int (__fastcall *v38)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  __int64 v39; // rcx
  int v40; // r12d
  char v41; // si
  char v42; // di
  char v43; // al
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // ecx
  _QWORD v47[2]; // [rsp+40h] [rbp-28h] BYREF
  int v48; // [rsp+50h] [rbp-18h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v49; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  PVOID v51; // [rsp+B0h] [rbp+48h] BYREF
  struct CCompiledEffectTemplate *v52; // [rsp+B8h] [rbp+50h]
  PVOID pv; // [rsp+C0h] [rbp+58h] BYREF
  struct CEffectCompilationTask **v54; // [rsp+C8h] [rbp+60h]

  v54 = a4;
  v52 = a2;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v6 = a4;
  LOBYTE(v51) = 1;
  v49 = a3;
  v8 = a2;
  v9 = (char *)this + 112;
  v48 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::lower_bound(
    v9,
    v47,
    &v48);
  if ( v47[0] == *((_QWORD *)this + 15) )
  {
    v27 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
    if ( !v27 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v28);
    v29 = CEffectCompilationTask::CEffectCompilationTask(v27, this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v29);
    v10 = (PTP_WORK *)pv;
    if ( !pv )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024882, 0x8Au, 0LL);
      return (unsigned int)v15;
    }
    if ( CCommonRegistryData::m_fEnableEffectCaching )
    {
      v51 = pv;
      std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::emplace_front<EffectDescriptionKey &,CEffectCompilationTask *>(
        (char *)this + 120,
        &v48,
        &v51);
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert<std::pair<EffectDescriptionKey const,CEffectCompilationTask *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>>>>(
        (char *)this + 112,
        v47,
        **((_QWORD **)this + 15) + 16LL,
        **((_QWORD **)this + 15));
    }
    ThreadpoolWork = CreateThreadpoolWork(lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_, v10, 0LL);
    v10[7] = ThreadpoolWork;
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
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v15, 0x91u, 0LL);
      goto LABEL_18;
    }
    LOBYTE(v51) = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, *(_QWORD *)(v47[0] + 32LL));
    v10 = (PTP_WORK *)pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v36 = *(_QWORD *)a3;
    pv = 0LL;
    v37 = "null";
    v38 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v36 + 88);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    if ( v38(a3, &pv) >= 0 )
      v37 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v39 = *((_QWORD *)v8 + 6);
      if ( v39 )
        v40 = *(_DWORD *)(v39 + 68);
      else
        v40 = 0;
      v41 = (char)v51;
      v42 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
      v43 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
      McTemplateU0pdsddt(v45, v44, (_DWORD)v10, v40, (__int64)v37, v43, v42, v41);
      v8 = v52;
      v6 = v54;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&pv);
    v9 = (char *)this + 112;
  }
  v11 = *((unsigned int *)v10 + 10);
  pv = v8;
  v12 = v11 + 1;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0xB8u, 0LL);
    goto LABEL_8;
  }
  if ( v12 > *((_DWORD *)v10 + 9) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 2, 8LL, 1LL, &pv);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
LABEL_8:
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x7Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v15, 0xAEu, 0LL);
      goto LABEL_18;
    }
    goto LABEL_9;
  }
  v15 = 0;
  *((_QWORD *)v10[2] + v11) = pv;
  *((_DWORD *)v10 + 10) = v12;
LABEL_9:
  v47[0] = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = (__int64 *)((char *)this + 80);
  v17 = 0;
  v18 = *((unsigned int *)this + 26);
  v19 = *((_QWORD *)this + 10);
  if ( (_DWORD)v18 )
  {
    v26 = (PVOID *)*((_QWORD *)this + 10);
    while ( v10 != *v26 )
    {
      ++v17;
      ++v26;
      if ( v17 >= (unsigned int)v18 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  v20 = v18 + 1;
  pv = v10;
  if ( (int)v18 + 1 < (unsigned int)v18 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v20 <= *((_DWORD *)this + 25) )
    {
      v15 = 0;
      *(_QWORD *)(v19 + 8 * v18) = pv;
      *((_DWORD *)this + 26) = v20;
      goto LABEL_13;
    }
    v33 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &pv);
    v15 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xC3u, 0LL);
  }
  if ( v15 >= 0 )
  {
LABEL_13:
    if ( *((_BYTE *)v10 + 92) )
    {
      v21 = *v16;
      v22 = *((unsigned int *)this + 19);
      v23 = *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
      *(_QWORD *)(v21 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v16 + 8 * v22);
      *(_QWORD *)(v21 + 8 * v22) = v23;
      ++*((_DWORD *)this + 19);
      SetEvent(*((HANDLE *)this + 3));
    }
LABEL_15:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v47);
    if ( !(_BYTE)v51 )
      SubmitThreadpoolWork(v10[7]);
    v24 = (struct CEffectCompilationTask *)v10;
    v10 = 0LL;
    *v6 = v24;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v15, 0xB6u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v47);
LABEL_18:
  if ( v15 < 0 )
  {
    if ( !v10 )
      return (unsigned int)v15;
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
      v9,
      &v48);
  }
  if ( v10 )
    (*((void (__fastcall **)(PTP_WORK *))*v10 + 1))(v10);
  return (unsigned int)v15;
}
