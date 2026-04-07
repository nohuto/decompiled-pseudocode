/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B4BDC
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180090E00 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800186A4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003D57C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@QEAA@XZ @ 0x18008EBC0 (--1-$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCGlobalLightSet@@XZ @ 0x18008EE80 (--B-$ComPtrRef@V-$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCG.c)
 *     ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800B4014 (-GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Com.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800B41F4 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800B4964 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800B4E44 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 */

__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  _QWORD *Element; // rdi
  __int64 v5; // rbx
  CBaseObject **v6; // rax
  int v7; // eax
  CBaseObject *v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdx
  int ProjectedShadowReceiverVisual; // eax
  unsigned __int64 v12; // r9
  CProjectedShadowScene::CProjectedShadowSceneInstance *v13; // rax
  int SharedLightByType; // eax
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  CProjectedShadowScene::CProjectedShadowSceneInstance *v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  CBaseObject **v25; // [rsp+28h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CBaseObject *v28; // [rsp+70h] [rbp+30h] BYREF
  __int64 v29; // [rsp+78h] [rbp+38h] BYREF

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL),
              a2);
  v5 = Element[7];
  if ( !v5 )
  {
    v28 = 0LL;
    v25 = &v28;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<CGlobalLightSet>>::operator CGlobalLightSet * *(&v25);
    v7 = CGlobalLightSet::Create(a2, v6);
    if ( v7 >= 0 )
    {
      v8 = v28;
      Element[7] = v28;
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A3F,
        (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<CGlobalLightSet>::~ComPtr<CGlobalLightSet>(&v28);
    v5 = Element[7];
    if ( !v5 )
    {
      v9 = -2147023728;
      v10 = 35LL;
LABEL_14:
      v12 = v9;
      goto LABEL_15;
    }
  }
  ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
  v9 = ProjectedShadowReceiverVisual;
  if ( ProjectedShadowReceiverVisual < 0 )
  {
    v12 = (unsigned int)ProjectedShadowReceiverVisual;
    v10 = 37LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)v12);
    goto LABEL_35;
  }
  v13 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                  WPF::g_pProcessHeap,
                                                                  112LL);
  if ( v13 )
    v13 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v13);
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    v10 = 40LL;
    goto LABEL_14;
  }
  v29 = 0LL;
  SharedLightByType = CGlobalLightSet::GetSharedLightByType(v5, 3, &v29);
  v15 = v29;
  v9 = SharedLightByType;
  if ( SharedLightByType >= 0 )
  {
    v18 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 3), v29, 0LL);
    v9 = v18;
    if ( v18 < 0 )
    {
      v16 = (unsigned int)v18;
      v17 = 44LL;
      goto LABEL_24;
    }
    v19 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                    WPF::g_pProcessHeap,
                                                                    112LL);
    if ( v19 )
      v19 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v19);
    *((_QWORD *)this + 4) = v19;
    if ( !v19 )
    {
      v9 = -2147024882;
      v17 = 47LL;
      v16 = 2147942414LL;
      goto LABEL_24;
    }
    v24 = 0LL;
    v20 = CGlobalLightSet::GetSharedLightByType(v5, 4, &v24);
    v21 = v24;
    v9 = v20;
    if ( v20 >= 0 )
    {
      v20 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v24, 1LL);
      v9 = v20;
      if ( v20 >= 0 )
      {
        v9 = 0;
LABEL_31:
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        goto LABEL_33;
      }
      v22 = 51LL;
    }
    else
    {
      v22 = 50LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_31;
  }
  v16 = (unsigned int)SharedLightByType;
  v17 = 43LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v16);
LABEL_33:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_35:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v9;
}
