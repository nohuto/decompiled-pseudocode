/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180240B54
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180245480 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D626C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6290 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18024267C (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator_ea_18024267C.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180242850 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@_ea_180242850.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
  struct IStereoscopicContentManager *StereoscopicContentManager; // rdi
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  int v19; // [rsp+40h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  int *v22; // [rsp+70h] [rbp+27h]
  int v23; // [rsp+78h] [rbp+2Fh]
  int v24; // [rsp+7Ch] [rbp+33h]

  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v5 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 18);
  v6 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 19);
  while ( v5 != v6 )
  {
    if ( *v5 == a2 )
    {
      memmove_0(v5, v5 + 1, (char *)v6 - (char *)(v5 + 1));
      *((_QWORD *)this + 19) -= 8LL;
      v9 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
      if ( v9 && *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v9,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v7, v8) )
      {
        StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v10, v12);
        v19 = *((_DWORD *)a2 + 30);
        v20 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 96);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)StereoscopicContentManager + 96));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
          (char *)StereoscopicContentManager + 328,
          &v19);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
        v20 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 40);
        EnterCriticalSection((LPCRITICAL_SECTION)StereoscopicContentManager + 1);
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
          (char *)StereoscopicContentManager + 80,
          &v19);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
      }
      v14 = *((_DWORD *)a2 + 30);
      if ( CompositorTracing::IsEnabled(v11) )
      {
        wil::details::static_lazy<CompositorTracing>::get(
          v15,
          (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
        v19 = v14;
        v17 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                               v16,
                                               (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v17 > 4u )
        {
          if ( TlgKeywordOn(v17, 0x400000000000uLL) )
          {
            v24 = 0;
            v22 = &v19;
            v23 = 4;
            TlgWrite(v18, &unk_1802DEF6F, 0LL, 0LL, 3u, &pData);
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
