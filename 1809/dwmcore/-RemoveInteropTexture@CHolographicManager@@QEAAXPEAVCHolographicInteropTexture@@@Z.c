/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18020BA1C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020D8A0 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014B5F0 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180210720 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator_ea_180210720.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18021090C (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@_ea_18021090C.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture **v5; // rcx
  struct CHolographicInteropTexture **v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  CHolographicInteropTaskQueue *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  CComposition *v13; // rcx
  struct CStereoscopicContentManager *StereoscopicContentManager; // rdi
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  int v20; // [rsp+40h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+48h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  int *v23; // [rsp+70h] [rbp+27h]
  int v24; // [rsp+78h] [rbp+2Fh]
  int v25; // [rsp+7Ch] [rbp+33h]

  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v5 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 15);
  v6 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 16);
  while ( v5 != v6 )
  {
    if ( *v5 == a2 )
    {
      memmove_0(v5, v5 + 1, (char *)v6 - (char *)(v5 + 1));
      *((_QWORD *)this + 16) -= 8LL;
      v9 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
      if ( v9 && *((_BYTE *)this + 216) )
        CHolographicInteropTaskQueue::PostMessageW(
          v9,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2), v7, v8) )
      {
        v13 = (CComposition *)*((_QWORD *)this + 2);
        v20 = *((_DWORD *)a2 + 30);
        StereoscopicContentManager = CComposition::GetStereoscopicContentManager(v13, v10, v12);
        v21 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 96);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)StereoscopicContentManager + 96));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
          (char *)StereoscopicContentManager + 328,
          &v20);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
        v21 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 40);
        EnterCriticalSection((LPCRITICAL_SECTION)StereoscopicContentManager + 1);
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
          (char *)StereoscopicContentManager + 80,
          &v20);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
      }
      v15 = *((_DWORD *)a2 + 30);
      if ( CompositorTracing::IsEnabled(v11) )
      {
        wil::details::static_lazy<CompositorTracing>::get(
          v16,
          (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
        v20 = v15;
        v18 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<CompositorTracing>::get(
                                                           v17,
                                                           (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)
                                             + 1);
        if ( *(_DWORD *)v18 > 4u )
        {
          if ( TlgKeywordOn(v18, 0x400000000000uLL) )
          {
            v25 = 0;
            v23 = &v20;
            v24 = 4;
            TlgWrite(v19, &unk_1802B906F, 0LL, 0LL, 3u, &pData);
          }
        }
      }
      CGdiSpriteBitmap::Release(a2);
      break;
    }
    ++v5;
  }
  ReleaseSRWLockExclusive(v2);
}
