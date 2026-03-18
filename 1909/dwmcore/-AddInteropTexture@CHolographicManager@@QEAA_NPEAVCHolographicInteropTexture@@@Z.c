/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18023F840
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x180245E10 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D626C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6290 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x18023FD08 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802402A4 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802422D0 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v5; // r15
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  bool v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // rdx
  CHolographicInteropTaskQueue *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CStereoscopicContentManager *StereoscopicContentManager; // rax
  unsigned int v15; // edi
  __int64 v16; // rcx
  CompositorTracing *v17; // rcx
  struct CHolographicInteropTexture *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  v5 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(this, *((_DWORD *)a2 + 30));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v7 = 0;
    AcquireSRWLockExclusive(v2);
    CMILCOMBase::InternalAddRef(a2);
    v9 = (_BYTE *)*((_QWORD *)this + 19);
    if ( *((_BYTE **)this + 20) == v9 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
        (__int64)this + 144,
        v9,
        &v19);
    }
    else
    {
      *(_QWORD *)v9 = a2;
      *((_QWORD *)this + 19) += 8LL;
    }
    v10 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v10 && *((_BYTE *)this + 240) )
      v5 = CHolographicInteropTaskQueue::PostMessageW(v10, 2u, (struct IUnknown *)a2 + 8, 0LL, 0LL, 0LL, 0LL);
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), (__int64)v9, v8) )
    {
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v11, v13);
      CStereoscopicContentManager::RegisterStereoscopicContentConsumer(StereoscopicContentManager, a2);
      v7 = 1;
    }
    v15 = *((_DWORD *)a2 + 30);
    if ( CompositorTracing::IsEnabled(v12) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v16,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureAdd_(v17, v15, v7);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v5;
}
