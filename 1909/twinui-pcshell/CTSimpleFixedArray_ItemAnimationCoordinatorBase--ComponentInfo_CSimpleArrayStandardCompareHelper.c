/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1803A2C14
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803A3060 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803A2EBC (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
        _QWORD *a1,
        struct IUnknown ***a2,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v5; // rax
  __int64 i; // r14
  __int64 v10; // rsi
  struct IUnknown **v11; // rdi
  BOOL v12; // ebx
  _BYTE v15[32]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v16[112]; // [rsp+48h] [rbp-70h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v5 = a3;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 32LL )
  {
    v10 = ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
            (ItemAnimationCoordinatorBase::ComponentInfo *)v15,
            v5);
    v11 = (struct IUnknown **)(ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
                                 (ItemAnimationCoordinatorBase::ComponentInfo *)v16,
                                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)(i + *a1))
                             + 8);
    v12 = SHIsSameObject(**a2, *v11) == 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v10 + 8));
    if ( !v12 )
      break;
    v5 = a3;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
