/*
 * XREFs of ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1801492B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove_s @ 0x1800A587C (memmove_s.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011B4B4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180140C88 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180141940 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x180147C98 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x18014BF7C (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v4; // r15
  _DWORD *v5; // r14
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rcx
  int v12; // [rsp+20h] [rbp-40h]
  int Destination; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+34h] [rbp-2Ch]
  RTL_SRWLOCK *v15; // [rsp+38h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+48h]

  v4 = a2;
  v5 = 0LL;
  v16 = -2147483627;
  v14 = 0;
  v19 = 0;
  v17 = 0LL;
  v20 = a3;
  XWinRT::SerializingLockPolicy::Write(&v15, (RTL_SRWLOCK *)(a1 + 120), &v19);
  v7 = v19;
  if ( v19 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 88) )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v19 = -2147483637;
    }
    if ( v7 >= 0 )
    {
      v8 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
             (__int64)v18,
             *(_DWORD *)(a1 + 168),
             (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v16, v8);
      v19 = XWinRT::detail::ReentrancyGuard<1>::hr(&v16);
      v7 = v19;
      if ( v19 >= 0 )
      {
        if ( memmove_s(&Destination, 4uLL, (const void *const)(*(_QWORD *)(a1 + 104) + 4 * v4), 4uLL) )
        {
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v19 = -2147418113;
        }
        if ( v7 >= 0 )
        {
          v9 = *(_QWORD *)(a1 + 104);
          v20 = 0;
          *(_DWORD *)(v9 + 4 * v4) = a3;
          LODWORD(v9) = Destination;
          ++*(_DWORD *)(a1 + 136);
          v14 = v9;
        }
      }
      v5 = v17;
    }
  }
  if ( v15 )
  {
    v10 = v15 + 1;
    if ( LODWORD(v15->Ptr) == 1 )
      LODWORD(v10->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v10);
    v15 = 0LL;
  }
  if ( v7 >= 0 )
  {
    v12 = v4;
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v16,
           a1 + 144,
           (a1 + 16) & -(__int64)(a1 != 0),
           3u,
           v12);
    v19 = v7;
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v7;
}
