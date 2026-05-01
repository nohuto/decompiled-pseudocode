/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803836F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x1803831E4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1803832A4 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x180383428 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_180383428.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x18038354C (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180383590 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803835D0 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x180383618 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v2; // rsi
  const struct ItemAnimationCoordinatorBase::ComponentInfo *i; // r14
  bool v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // ebx
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v9; // rsi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rbx
  int v11; // eax
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v12; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *j; // rsi
  bool v14; // bl
  __int64 v15; // rax
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v16; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *k; // rsi
  bool v18; // bl
  __int128 v19; // xmm0
  __int64 v20; // rax
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v21; // r14
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v22; // rsi
  bool v23; // bl
  _BOOL8 v24; // r15
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int128 *v27; // rsi
  __int64 v28; // rcx
  void (__fastcall *v29)(ItemAnimationCoordinatorBase *, __int64 *); // rax
  __int64 v30; // rcx
  ItemAnimationCoordinatorBase *v32; // [rsp+38h] [rbp-D0h] BYREF
  struct IUnknown **v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37[6]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-40h]
  _BYTE v44[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v32 = (ItemAnimationCoordinatorBase *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v36, (__int64 *)&v32, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  *((_BYTE *)this + 232) = 0;
  v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 3);
  for ( i = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32 * *((_QWORD *)this + 4));
        v2 != i;
        v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v44, v2);
    memset_0(&v41, 0, 0x2CuLL);
    v33 = (struct IUnknown **)v44;
    v4 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                (_QWORD *)this + 19,
                (__int64)&v33,
                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v41,
                &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    if ( v4 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v41,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v44);
      v5 = *(_QWORD *)this;
      v43 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(v5 + 128))(this, &v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  }
  v35 = 0LL;
  v33 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  v33 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v32 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  v35 = 0LL;
  v32 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  LOBYTE(v6) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v6, (__int64 *)&v32, v7, &v35);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16 * *((_QWORD *)this + 8));
    while ( v9 != v10 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)&v33,
        v9);
      v11 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, struct IUnknown ***, __int64))(*(_QWORD *)this + 136LL))(
              this,
              &v33,
              v35);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v11);
        ((void (__fastcall *)(struct IUnknown **))(*v33)[10].lpVtbl)(v33);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64 *)&v33);
  }
  v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 11);
  for ( j = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32 * *((_QWORD *)this + 12));
        v12 != j;
        v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v44, v12);
    memset_0(&v41, 0, 0x2CuLL);
    v33 = (struct IUnknown **)v44;
    v14 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v33,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v41,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    if ( v14 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v41,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v44);
      v15 = *(_QWORD *)this;
      v43 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(v15 + 144))(this, &v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  }
  v16 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 15);
  for ( k = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v16 + 32 * *((_QWORD *)this + 16));
        v16 != k;
        v16 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v16 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)&v41, v16);
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
      (ItemAnimationCoordinatorBase::ComponentInfo *)v44,
      (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v41);
    memset_0(v37, 0, 0x2CuLL);
    v33 = (struct IUnknown **)&v41;
    v18 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v33,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v37,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
    if ( v18 )
      v19 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 12);
    else
      v19 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 88LL))(v42, &v38);
    v20 = *(_QWORD *)this;
    v46 = v19;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(v20 + 152))(this, v44);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  }
  v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)*((_QWORD *)this + 19);
  v22 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48 * *((_QWORD *)this + 20));
  while ( v21 != v22 )
  {
    ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
      (ItemAnimationCoordinatorBase::PositionChangedInfo *)&v41,
      v21);
    v33 = (struct IUnknown **)&v41;
    v39 = 0uLL;
    v38 = 0LL;
    v40 = 0LL;
    v23 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                 (_QWORD *)this + 3,
                 &v33,
                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
    v39 = 0uLL;
    v38 = 0LL;
    v40 = 0LL;
    v24 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                 (_QWORD *)this + 11,
                 &v33,
                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
    if ( !v23 && !v24 )
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 160LL))(this, &v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48);
  }
  v25 = (__int64 *)*((_QWORD *)this + 23);
  v26 = &v25[3 * *((_QWORD *)this + 24)];
  if ( v25 != v26 )
  {
    v27 = (__int128 *)(v25 + 1);
    do
    {
      v28 = *v25;
      v38 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v29 = *(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL);
      v39 = *v27;
      v29(this, &v38);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      v25 += 3;
      v27 = (__int128 *)((char *)v27 + 24);
    }
    while ( v25 != v26 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v30 = *((_QWORD *)this + 28);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  }
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v36);
  return 0LL;
}
