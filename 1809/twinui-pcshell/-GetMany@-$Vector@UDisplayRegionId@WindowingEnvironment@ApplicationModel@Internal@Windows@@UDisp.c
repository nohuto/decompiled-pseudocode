/*
 * XREFs of ?GetMany@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x18011C140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011EAC0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  void *v5; // r13
  _DWORD *v7; // r14
  size_t v9; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  RTL_SRWLOCK *v18; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v21; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v5 = 0LL;
  v23 = 0;
  v7 = a4;
  v22 = 0;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  if ( a3 )
    memset_0(a4, 0, 4LL * a3);
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v21, a1 + 120, &v22);
  if ( !*(_DWORD *)(a1 + 96) || (v5 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v14 = v22;
  }
  else
  {
    v14 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v14 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 88);
    if ( a2 > v12 )
    {
      v14 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v14 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( a3 )
        {
          v13 = a2;
          do
          {
            if ( (unsigned int)v13 >= v12 )
              break;
            v14 = 0;
            v15 = (unsigned int)v13;
            v13 = (unsigned int)(v13 + 1);
            v16 = v23 + 1;
            *v7++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v15);
            v23 = v16;
          }
          while ( v16 < a3 );
        }
      }
      else if ( a3 )
      {
        v13 = a2;
        do
        {
          if ( (unsigned int)v13 >= v12 )
            break;
          v14 = 0;
          v17 = (unsigned int)v13;
          ++v11;
          v13 = (unsigned int)(v13 + 1);
          *v7++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v17);
        }
        while ( v11 < a3 );
      }
    }
  }
  if ( v21 )
  {
    v18 = v21 + 1;
    if ( LODWORD(v21->Ptr) == 1 )
      --LODWORD(v18->Ptr);
    else
      ReleaseSRWLockShared(v18);
  }
  if ( v14 >= 0 )
  {
    if ( v23 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v12 )
          break;
        v14 = 0;
        ++v11;
      }
    }
    *a5 = v11;
  }
  operator delete(v5, (const struct std::nothrow_t *)v13);
  return (unsigned int)v14;
}
