/*
 * XREFs of ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038260
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC90 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_18009CC90.c)
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CCA0 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_18009CCA0.c)
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CCB0 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_18009CCB0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v18; // eax
  void (*v20)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    v20 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    goto LABEL_13;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_ebe02ad8_a830_5451_b09a_7856d49cbbec) )
  {
    *v9 = v10;
LABEL_12:
    v20 = *(void (**)(void))(**(_QWORD **)v11 + 8LL);
LABEL_13:
    v20();
    return v3;
  }
  if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *(_QWORD *)v11 = v13;
    goto LABEL_12;
  }
  if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_c6d1be9f_c3ef_5ac8_9005_e82eb498d9ea) )
  {
    *(_QWORD *)v11 = v15;
    v18 = 0;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *(_QWORD *)v11 = v16;
    v18 = 0;
  }
  else if ( *v17 == 3
         && v17[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
         && v17[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
         && v17[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *(_QWORD *)v11 = v16;
    v18 = 0;
  }
  else
  {
    v18 = -2147467262;
  }
  v3 = v18;
  if ( v18 >= 0 )
    goto LABEL_12;
  return v3;
}
