/*
 * XREFs of ?IndexOf@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAIPEAE@Z @ 0x1801652F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008AD14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013509C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?IndexOfInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@IU67825@PEAIPEAE@Z @ 0x1801654F0 (-IndexOfInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _DWORD *v8; // r14
  int v9; // ebp
  const struct std::nothrow_t *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  int v12; // edi
  unsigned __int64 v13; // r8
  size_t v14; // rax
  __int64 i; // r8
  int v17; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v18; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v18, (RTL_SRWLOCK *)(a1 + 120), &v17);
  v12 = v17;
  if ( v17 >= 0 )
  {
    v13 = *(unsigned int *)(a1 + 88);
    if ( *(_DWORD *)(a1 + 96) )
    {
      v14 = 4 * v13;
      if ( !is_mul_ok(v13, 4uLL) )
        v14 = -1LL;
      v8 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
        {
          if ( v12 < 0 )
            break;
          v12 = 0;
          ++v9;
          LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * i);
          v8[i] = (_DWORD)v11;
        }
      }
      else
      {
        v12 = -2147024882;
      }
    }
    else
    {
      v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::IndexOfInternal(
              (_DWORD)v11,
              *(_QWORD *)(a1 + 104),
              v13,
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v18 )
  {
    v11 = v18 + 1;
    if ( LODWORD(v18->Ptr) == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v12 >= 0 && v9 )
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::IndexOfInternal(
            (_DWORD)v11,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  operator delete(v8, v10);
  return (unsigned int)v12;
}
