/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210
 * Callers:
 *     ?Initialize@CGlobalComposition@@AEAAJXZ @ 0x1800E1170 (-Initialize@CGlobalComposition@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z @ 0x1800E01EC (-Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z.c)
 *     ?Initialize@CGlobalInputManager@@IEAAJXZ @ 0x1800E08A8 (-Initialize@CGlobalInputManager@@IEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800E0A20 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E0C2C (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlobalInputManager@@IEAA@PEAVCComposition@@@Z @ 0x1800E0FEC (--0CGlobalInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x1800E15C8 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E1610 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E1764 (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1818 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E19C8 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1B90 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1EA4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800E27F0 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E2A2C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800E2AF8 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E2B90 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??1CWetInkManager@@QEAA@XZ @ 0x180175804 (--1CWetInkManager@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18017640C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18017A424 (--1CSceneResourceManager@@QEAA@XZ.c)
 */

__int64 __fastcall CComposition::Initialize(struct CMonitorTreeAssociation **this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  CGlobalInputManager *v5; // rax
  __int64 v6; // r8
  CMILCOMBase *v7; // rax
  __int64 v8; // rcx
  CGlobalInputManager *v9; // rbx
  signed int v10; // eax
  CGlobalManipulationManager *v11; // rax
  __int64 v12; // r8
  CMILCOMBase *v13; // rax
  __int64 v14; // rcx
  CManipulationManager *v15; // rbx
  signed int v16; // eax
  struct IMessageSession *v17; // r14
  CGdiSpriteBitmap *v18; // rcx
  Microsoft::Bamo::BaseBamoConnection *v19; // rcx
  struct CMonitorTreeAssociation *v20; // rax
  CWetInkManager *v21; // rbx
  CSceneResourceManager *v22; // rbx
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  unsigned int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-30h]
  CSceneResourceManager **v28; // [rsp+30h] [rbp-20h]
  struct CSceneResourceManager *v29; // [rsp+38h] [rbp-18h] BYREF
  char v30; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+38h]
  struct CHolographicManager *v32; // [rsp+90h] [rbp+40h] BYREF
  void *v33; // [rsp+98h] [rbp+48h] BYREF

  v33 = 0LL;
  v32 = 0LL;
  v2 = CMonitorTreeAssociation::Create((struct CComposition *)this, this + 2);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 239;
    goto LABEL_67;
  }
  v2 = CThreadContext::InitializeObjectCaches();
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 244;
    goto LABEL_67;
  }
  v2 = CRenderTargetManager::Create((struct CComposition *)this, this + 8);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 249;
    goto LABEL_67;
  }
  v2 = CGlobalSurfaceManager::Create((struct CComposition *)this, this + 9, &v33, (void **)&v32);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 257;
    goto LABEL_67;
  }
  (*(void (__fastcall **)(struct CMonitorTreeAssociation *, void *, struct CHolographicManager *))(*(_QWORD *)this[69]
                                                                                                 + 80LL))(
    this[69],
    v33,
    v32);
  v2 = CExpressionManager::Create(this + 30);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 264;
    goto LABEL_67;
  }
  v5 = (CGlobalInputManager *)DefaultHeap::AllocClear(0x138uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v6);
  v7 = CGlobalInputManager::CGlobalInputManager(v5, (struct CComposition *)this);
  v9 = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x2Bu, 0LL);
    v4 = -2147024882;
LABEL_44:
    v27 = 269;
LABEL_45:
    v26 = v4;
LABEL_68:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v26, v27, 0LL);
    return (unsigned int)v4;
  }
  CMILCOMBase::InternalAddRef(v7);
  v10 = CGlobalInputManager::Initialize(v9);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v10, 0x2Eu, 0LL);
    CGdiSpriteBitmap::Release(v9);
  }
  else
  {
    this[10] = v9;
  }
  if ( v4 < 0 )
    goto LABEL_44;
  v11 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x1A0uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v12);
  v13 = CGlobalManipulationManager::CGlobalManipulationManager(v11, (struct CComposition *)this);
  v15 = v13;
  if ( !v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x8007000E, 0x25u, 0LL);
    v4 = -2147024882;
LABEL_49:
    v27 = 274;
    goto LABEL_45;
  }
  CMILCOMBase::InternalAddRef(v13);
  v16 = CManipulationManager::Initialize(v15);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v16, 0x28u, 0LL);
    CGdiSpriteBitmap::Release(v15);
  }
  else
  {
    this[11] = v15;
  }
  if ( v4 < 0 )
    goto LABEL_49;
  v32 = 0LL;
  v4 = CHolographicManager::Create((struct CComposition *)this, &v32);
  this[14] = v32;
  if ( v4 < 0 )
  {
    v27 = 280;
    goto LABEL_45;
  }
  v17 = (struct IMessageSession *)(*(__int64 (__fastcall **)(struct CMonitorTreeAssociation *))(*(_QWORD *)this[69]
                                                                                              + 88LL))(this[69]);
  v2 = CMessageConversationHost::Create(v17, this + 153);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 287;
    goto LABEL_67;
  }
  v18 = this[154];
  if ( v18 )
  {
    this[154] = 0LL;
    CGdiSpriteBitmap::Release(v18);
  }
  v2 = DataProviderManager::Create(v17, this + 154);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 291;
    goto LABEL_67;
  }
  v19 = this[158];
  if ( v19 )
  {
    this[158] = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v19);
  }
  v2 = DiagnosticCallbacksManager::Create(v17, this + 158);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 295;
    goto LABEL_67;
  }
  v2 = CEffectCompilationService::Create(v17, this + 12);
  v4 = v2;
  if ( v2 < 0 )
  {
    v27 = 300;
LABEL_67:
    v26 = v2;
    goto LABEL_68;
  }
  v20 = (struct CMonitorTreeAssociation *)operator new(0x30uLL);
  if ( v20 )
  {
    *(_QWORD *)v20 = this;
    *((_QWORD *)v20 + 1) = 0LL;
    *((_QWORD *)v20 + 2) = 0LL;
    *((_QWORD *)v20 + 3) = 0LL;
    *((_QWORD *)v20 + 4) = 0LL;
    *((_QWORD *)v20 + 5) = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = this[13];
  this[13] = v20;
  if ( v21 )
  {
    CWetInkManager::~CWetInkManager(v21);
    operator delete(v21);
  }
  v29 = 0LL;
  v28 = this + 16;
  v30 = 1;
  v4 = CSceneResourceManager::Create((struct CComposition *)this, &v29);
  if ( v30 )
  {
    v22 = *v28;
    *v28 = v29;
    if ( v22 )
    {
      CSceneResourceManager::~CSceneResourceManager(v22);
      operator delete(v22);
    }
  }
  if ( v4 < 0 )
  {
    v27 = 310;
    goto LABEL_45;
  }
  v23 = DefaultHeap::AllocClear(0x60uLL);
  if ( v23 )
  {
    v23[2] = 0;
    *((_QWORD *)v23 + 2) = this;
    *((_QWORD *)v23 + 3) = 0LL;
    *((_QWORD *)v23 + 5) = 0LL;
    v23[8] = 0;
    *((_QWORD *)v23 + 8) = 0LL;
    *((_BYTE *)v23 + 72) = 0;
    *(_QWORD *)v23 = &CColorBrush::`vftable'{for `CContent'};
    *((_QWORD *)v23 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    *((_OWORD *)v23 + 5) = _xmm;
  }
  else
  {
    v23 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(this + 18, v23);
  if ( !this[18] )
  {
    v27 = 315;
LABEL_55:
    v4 = -2147024882;
    goto LABEL_45;
  }
  v24 = DefaultHeap::AllocClear(0x60uLL);
  if ( v24 )
  {
    v24[2] = 0;
    *((_QWORD *)v24 + 2) = this;
    *((_QWORD *)v24 + 3) = 0LL;
    *((_QWORD *)v24 + 5) = 0LL;
    v24[8] = 0;
    *((_QWORD *)v24 + 8) = 0LL;
    *((_BYTE *)v24 + 72) = 0;
    *(_QWORD *)v24 = &CColorBrush::`vftable'{for `CContent'};
    *((_QWORD *)v24 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    *((_OWORD *)v24 + 5) = _xmm;
  }
  else
  {
    v24 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(this + 19, v24);
  if ( !this[19] )
  {
    v27 = 318;
    goto LABEL_55;
  }
  *((_OWORD *)this + 71) = _xmm;
  *((_OWORD *)this + 72) = _xmm;
  *((_OWORD *)this + 73) = _xmm;
  *((_OWORD *)this + 74) = _xmm;
  return (unsigned int)v4;
}
