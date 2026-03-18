/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18020A86C
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18020E290 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014B5F0 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x18020ACB4 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x18020B23C (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180210368 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
  _QWORD *v9; // rdx
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
  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  v5 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(this, *((_DWORD *)a2 + 30));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v7 = 0;
    AcquireSRWLockExclusive(v2);
    CMILCOMBase::InternalAddRef(a2);
    v9 = (_QWORD *)*((_QWORD *)this + 16);
    if ( *((_QWORD **)this + 17) == v9 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
        (__int64 *)this + 15,
        v9,
        &v19);
    }
    else
    {
      *v9 = a2;
      *((_QWORD *)this + 16) += 8LL;
    }
    v10 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v10 && *((_BYTE *)this + 216) )
      v5 = CHolographicInteropTaskQueue::PostMessageW(v10, 2u, (struct IUnknown *)a2 + 8, 0LL, 0LL, 0LL, 0LL);
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2), (__int64)v9, v8) )
    {
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2), v11, v13);
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
