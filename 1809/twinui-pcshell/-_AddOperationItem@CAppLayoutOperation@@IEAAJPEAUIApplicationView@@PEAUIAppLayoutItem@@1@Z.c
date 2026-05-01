/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x1803B814C
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1803B92BC (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803B76BC (--$FindEx@VCAppLayoutAnimationDataFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutAnima.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BE60C (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // r14d
  int v9; // r13d
  int v10; // r12d
  struct IUnknown *v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // esi
  struct IUnknown *v15; // rbx
  void *v16; // r8
  __int64 v17; // rdx
  struct IUnknown **v18; // rdx
  struct IUnknown *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v25; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  __m128i v31; // [rsp+D8h] [rbp-28h]
  int v32; // [rsp+E8h] [rbp-18h]
  _QWORD v33[3]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+118h] [rbp+18h]
  RECT rcSrc; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  memset(v33, 0, sizeof(v33));
  v35 = 0;
  v28 = 0LL;
  v9 = 0;
  v29 = 0LL;
  v10 = 0;
  v30 = 0LL;
  v32 = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  *(_QWORD *)&v25.left = 0LL;
  *(_QWORD *)&v25.right = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v31 = si128;
  if ( a3 )
  {
    v9 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD *))(*(_QWORD *)a3 + 64LL))(a3, v33);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, v27);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, _QWORD *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, v26);
  }
  if ( a4 )
  {
    v10 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64 *))(*(_QWORD *)a4 + 64LL))(a4, &v28);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v25);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v25, &rcDst);
    LODWORD(v29) = 3;
  }
  v22 = 0LL;
  v20 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
          (__int64 *)this + 11,
          &v20,
          v11,
          &v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v23);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v14 = CAppLayoutOperationItem::s_CreateInstance(a2, v33, &v28, v27, v26, &rcDst, &v25, v9, v10, v4);
  if ( v14 >= 0 )
  {
    v15 = v21;
    v20 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v17 = *((_QWORD *)this + 16);
    v14 = 0;
    if ( v17 != *((_QWORD *)this + 18)
      || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 120,
                  v17 + 1,
                  v16),
          v14 >= 0) )
    {
      v18 = (struct IUnknown **)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v18 )
      {
        *v18 = 0LL;
        if ( v18 != &v20 )
        {
          v20 = 0LL;
          *v18 = v15;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v14;
}
