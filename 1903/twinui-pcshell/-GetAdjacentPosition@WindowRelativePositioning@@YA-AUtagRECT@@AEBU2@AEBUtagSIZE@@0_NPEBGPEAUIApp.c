/*
 * XREFs of ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803A7648
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007B108 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180056A0C (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1803A73A0 (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@QE.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1803A74F4 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1803A7D6C (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 */

// Hidden C++ exception states: #wind=189
struct tagRECT *__fastcall WindowRelativePositioning::GetAdjacentPosition(
        WindowRelativePositioning *this,
        __m128i *__return_ptr retstr,
        const struct tagRECT *a3,
        const struct tagSIZE *a4,
        const struct tagRECT *a5,
        __int64 a6,
        const unsigned __int16 *a7,
        struct tagRECT *a8)
{
  int ScaleFactorForRect; // eax
  int v13; // r14d
  int v14; // ecx
  __int64 v15; // rbx
  __int64 *v16; // r8
  __m128i v17; // xmm0
  __int128 v18; // xmm7
  int (__fastcall *v19)(const unsigned __int16 *, _QWORD, __int64 *); // rbx
  __int64 v20; // rbx
  int (__fastcall *v21)(__int64, GUID *, __int64 *); // rsi
  _DWORD *v22; // rbx
  _DWORD *v23; // rsi
  __int128 *v24; // rax
  __int128 v25; // xmm6
  _DWORD *i; // rcx
  __int128 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-78h]
  __int64 v38[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v44; // [rsp+D0h] [rbp-38h]
  __int64 v45; // [rsp+D8h] [rbp-30h]
  __m128i v46; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-18h] BYREF

  v45 = -2LL;
  *(_QWORD *)&v47 = a6;
  ScaleFactorForRect = GetScaleFactorForRect(a8);
  v13 = 10 * ScaleFactorForRect / 100;
  v14 = retstr->m128i_i32[2] - retstr->m128i_i32[0];
  v36 = (unsigned int)(a4[1].cx + a4->cx - a3->left - v13);
  v38[0] = (unsigned int)(v13 + v14 - a4->cx - a4[1].cx);
  LODWORD(v33) = 40 * ScaleFactorForRect / 100;
  HIDWORD(v33) = v33;
  LODWORD(v34) = 40 * ScaleFactorForRect / -100;
  HIDWORD(v34) = v33;
  v46.m128i_i64[0] = __PAIR64__(v34, v33);
  LODWORD(v30) = v34;
  HIDWORD(v30) = v34;
  v28 = 0LL;
  v29 = 0LL;
  if ( (_BYTE)a5 )
  {
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v36);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v36;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), v38);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v38[0];
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v34);
      v15 = v34;
    }
    else
    {
      v15 = v34;
      **((_QWORD **)&v28 + 1) = v34;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v33);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v33;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v30);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v30;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 != *((_QWORD *)&v28 + 1) )
    {
      **((_QWORD **)&v28 + 1) = v46.m128i_i64[0];
LABEL_19:
      *((_QWORD *)&v28 + 1) += 8LL;
      goto LABEL_37;
    }
    v16 = (__int64 *)&v46;
  }
  else
  {
    std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), v38);
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v36);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v36;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v33);
      v15 = v33;
    }
    else
    {
      v15 = v33;
      **((_QWORD **)&v28 + 1) = v33;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), &v34);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v34;
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 == *((_QWORD *)&v28 + 1) )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), v46.m128i_i64);
    }
    else
    {
      **((_QWORD **)&v28 + 1) = v46.m128i_i64[0];
      *((_QWORD *)&v28 + 1) += 8LL;
    }
    if ( v29 != *((_QWORD *)&v28 + 1) )
    {
      **((_QWORD **)&v28 + 1) = v30;
      goto LABEL_19;
    }
    v16 = &v30;
  }
  std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((void **)&v28, *((_BYTE **)&v28 + 1), v16);
LABEL_37:
  v17 = *retstr;
  v46 = v17;
  v46.m128i_i32[2] = _mm_cvtsi128_si32(v17) + a3->left;
  v46.m128i_i32[3] = a3->top + v17.m128i_i32[1];
  v18 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                     (unsigned int)v38,
                     (unsigned int)&v46,
                     v15,
                     HIDWORD(v15),
                     (__int64)a8);
  v35 = 0LL;
  v19 = *(int (__fastcall **)(const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)a7 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  if ( v19(a7, v47, &v35) < 0 )
  {
LABEL_62:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    if ( (_QWORD)v28 )
    {
      std::_Deallocate<16,0>((void *)v28, (const struct std::nothrow_t *)((v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL));
      v28 = 0uLL;
      v29 = 0LL;
    }
    *(_OWORD *)this = v18;
    return (struct tagRECT *)this;
  }
  v31 = 0LL;
  v32 = 0LL;
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v36,
    v35);
  LODWORD(v39) = 0;
  v40 = 0LL;
  v41 = &v36;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v39);
  LODWORD(v42) = v37;
  v43 = 0LL;
  v44 = &v36;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v42);
  while ( (_DWORD)v39 != (_DWORD)v42 || v41 != v44 )
  {
    v20 = v40;
    v38[0] = v40;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v38);
    v47 = 0uLL;
    v30 = 0LL;
    v21 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 104LL);
    v30 = 0LL;
    if ( v21(v20, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v30) >= 0
      && (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 24LL))(v30, &v47) >= 0 )
    {
      if ( v32 == *((_QWORD *)&v31 + 1) )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((void **)&v31, *((char **)&v31 + 1), &v47);
      }
      else
      {
        **((_OWORD **)&v31 + 1) = v47;
        *((_QWORD *)&v31 + 1) += 16LL;
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v38);
    LODWORD(v39) = v39 + 1;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v39);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  v23 = (_DWORD *)*((_QWORD *)&v28 + 1);
  v22 = (_DWORD *)v28;
LABEL_59:
  if ( v22 == v23 )
  {
    if ( (_QWORD)v31 )
    {
      std::_Deallocate<16,0>((void *)v31, (const struct std::nothrow_t *)((v32 - v31) & 0xFFFFFFFFFFFFFFF0uLL));
      v31 = 0uLL;
      v32 = 0LL;
    }
    goto LABEL_62;
  }
  v24 = (__int128 *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                      (unsigned int)&v47,
                      (unsigned int)&v46,
                      *v22,
                      HIDWORD(*(_QWORD *)v22),
                      (__int64)a8);
  v25 = *v24;
  for ( i = (_DWORD *)v31; i != *((_DWORD **)&v31 + 1); i += 4 )
  {
    if ( (int)abs32(*i - *(_QWORD *)v24) < v13 && (int)abs32(i[1] - HIDWORD(*(_QWORD *)v24)) < v13 )
    {
      v22 += 2;
      goto LABEL_59;
    }
  }
  if ( (_QWORD)v31 )
  {
    std::_Deallocate<16,0>((void *)v31, (const struct std::nothrow_t *)((v32 - v31) & 0xFFFFFFFFFFFFFFF0uLL));
    v31 = 0uLL;
    v32 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  if ( (_QWORD)v28 )
  {
    std::_Deallocate<16,0>((void *)v28, (const struct std::nothrow_t *)((v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL));
    v28 = 0uLL;
    v29 = 0LL;
  }
  *(_OWORD *)this = v25;
  return (struct tagRECT *)this;
}
