/*
 * XREFs of ?ReplaceAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x18011F280
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180118F60 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180119AE8 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18011EA2C (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801218CC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180122810 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v5; // r14
  int v7; // ecx
  _DWORD *v8; // rsi
  unsigned int v9; // r12d
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 v13; // r8
  _DWORD *v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rcx
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+40h] [rbp-20h]
  char v22[24]; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  v5 = 0LL;
  v23 = 0;
  v20 = -2147483627;
  v7 = 0;
  v21 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    v8 = malloc(4LL * a2);
    if ( v8 )
    {
      v9 = a2;
      v7 = 0;
    }
    else
    {
      v3 = -2147024882;
      v23 = -2147024882;
      v7 = -2147024882;
    }
  }
  if ( v7 >= 0 )
  {
    v11 = 0;
    if ( v9 )
    {
      v11 = v9;
      v23 = 0;
      v12 = a3 - (_QWORD)v8;
      v13 = v9;
      v14 = v8;
      do
      {
        *v14 = *(_DWORD *)((char *)v14 + v12);
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    XWinRT::SerializingLockPolicy::Write(&v19, a1 + 120, &v23);
    v3 = v23;
    if ( v23 >= 0 )
    {
      v15 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
              (__int64)v22,
              *(_DWORD *)(a1 + 168),
              (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v20, v15);
      v23 = XWinRT::detail::ReentrancyGuard<1>::hr(&v20);
      v3 = v23;
      if ( v23 >= 0 )
      {
        *(_DWORD *)(a1 + 88) = v11;
        *(_DWORD *)(a1 + 92) = v9;
        *(_DWORD *)(a1 + 96) = 0;
        v16 = *(_DWORD **)(a1 + 104);
        *(_QWORD *)(a1 + 104) = v8;
        v8 = v16;
        ++*(_DWORD *)(a1 + 136);
      }
      v5 = v21;
    }
    if ( v19 )
    {
      v17 = v19 + 1;
      if ( LODWORD(v19->Ptr) == 1 )
        LODWORD(v17->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v17);
      v19 = 0LL;
    }
  }
  if ( v8 )
    free(v8);
  if ( v3 >= 0 )
  {
    v3 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v20,
           a1 + 144,
           (a1 + 16) & -(__int64)(a1 != 0),
           0,
           0);
    v23 = v3;
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v3;
}
