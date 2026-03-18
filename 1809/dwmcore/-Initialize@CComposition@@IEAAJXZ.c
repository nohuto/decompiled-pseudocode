/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAV1@@Z @ 0x180061210 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Create@CSpatialResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180061500 (-Create@CSpatialResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800615D0 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18006178C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180061AD4 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180061B9C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18006224C (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180062380 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800628D0 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180062C30 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180062E8C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x180062F58 (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x180063000 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180063094 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180088A8C (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x18014AE64 (--_GCWetInkManager@@QEAAPEAXI@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18014BDBC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1CSpatialResourceManager@@QEAA@XZ @ 0x180156B48 (--1CSpatialResourceManager@@QEAA@XZ.c)
 */

__int64 __fastcall CComposition::Initialize(struct CMonitorTreeAssociation **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // ebx
  struct IMessageSession *v5; // rsi
  CGdiSpriteBitmap *v6; // rcx
  Microsoft::Bamo::BaseBamoConnection *v7; // rcx
  struct CMonitorTreeAssociation *v8; // rax
  unsigned int v9; // edx
  CWetInkManager *v10; // rcx
  unsigned int v11; // ecx
  CSpatialResourceManager *v12; // rsi
  unsigned int v14; // [rsp+20h] [rbp-30h]
  CSpatialResourceManager **v15; // [rsp+30h] [rbp-20h]
  struct CSpatialResourceManager *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  void *v18; // [rsp+70h] [rbp+20h] BYREF
  void *v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v2 = CMonitorTreeAssociation::Create((struct CComposition *)this, this + 2);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 183;
    goto LABEL_42;
  }
  v2 = CThreadContext::InitializeObjectCaches();
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 188;
    goto LABEL_42;
  }
  v2 = CWindowManager::Create(this + 10);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 193;
    goto LABEL_42;
  }
  v2 = CRenderTargetManager::Create((struct CComposition *)this, this + 8);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 198;
    goto LABEL_42;
  }
  v2 = CSurfaceManager::Create((struct CComposition *)this, this + 9, &v19, &v18);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 206;
    goto LABEL_42;
  }
  (*(void (__fastcall **)(struct CMonitorTreeAssociation *, void *, void *))(*(_QWORD *)this[67] + 88LL))(
    this[67],
    v19,
    v18);
  v2 = CExpressionManager::Create(this + 28);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 213;
    goto LABEL_42;
  }
  v2 = CInputManager::Create((struct CComposition *)this, this + 11);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 218;
    goto LABEL_42;
  }
  v2 = CManipulationManager::Create((struct CComposition *)this, this + 12);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 223;
    goto LABEL_42;
  }
  v2 = CHolographicManager::Create((struct CComposition *)this, this + 15);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 228;
    goto LABEL_42;
  }
  v5 = (struct IMessageSession *)(*(__int64 (__fastcall **)(struct CMonitorTreeAssociation *))(*(_QWORD *)this[67] + 96LL))(this[67]);
  v2 = CMessageConversationHost::Create(v5, this + 151);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 235;
    goto LABEL_42;
  }
  v6 = this[152];
  if ( v6 )
  {
    this[152] = 0LL;
    CGdiSpriteBitmap::Release(v6);
  }
  v2 = DataProviderManager::Create(v5, this + 152);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 239;
    goto LABEL_42;
  }
  v7 = this[156];
  if ( v7 )
  {
    this[156] = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v7);
  }
  v2 = DiagnosticCallbacksManager::Create(v5, this + 156);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 243;
    goto LABEL_42;
  }
  v2 = CEffectCompilationService::Create(v5, this + 13);
  v4 = v2;
  if ( v2 < 0 )
  {
    v14 = 248;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, v14);
    return (unsigned int)v4;
  }
  v8 = (struct CMonitorTreeAssociation *)operator new(0x20uLL);
  if ( v8 )
  {
    *(_QWORD *)v8 = this;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
  }
  v10 = this[14];
  this[14] = v8;
  if ( v10 )
    CWetInkManager::`scalar deleting destructor'(v10, v9);
  v16 = 0LL;
  v15 = this + 17;
  v17 = 1;
  v4 = CSpatialResourceManager::Create((struct CComposition *)this, &v16);
  if ( v17 )
  {
    v12 = *v15;
    *v15 = v16;
    if ( v12 )
    {
      CSpatialResourceManager::~CSpatialResourceManager(v12);
      operator delete(v12, 0x50uLL);
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, 0x102u);
  }
  else
  {
    *((_OWORD *)this + 70) = _xmm;
    *((_OWORD *)this + 71) = _xmm;
    *((_OWORD *)this + 72) = _xmm;
    *((_OWORD *)this + 73) = _xmm;
  }
  return (unsigned int)v4;
}
