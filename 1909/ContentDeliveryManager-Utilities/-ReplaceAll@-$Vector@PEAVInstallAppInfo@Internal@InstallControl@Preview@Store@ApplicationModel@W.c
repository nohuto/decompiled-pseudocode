/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180016610
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017834 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180017850 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v9; // r12d
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // rcx
  __int64 v15; // r14
  _QWORD *v16; // rbp
  RTL_SRWLOCK *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  unsigned __int8 v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = malloc(8LL * a2);
    if ( !v3 )
      return 2147942414LL;
    v5 = a2;
  }
  v9 = 0;
  if ( v5 )
  {
    v10 = v3;
    v9 = v5;
    v11 = a3 - (_QWORD)v3;
    v12 = v5;
    do
    {
      v13 = *(_QWORD *)((char *)v10 + v11);
      *v10 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  v14 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v14->Ptr) )
      LODWORD(v14->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v14);
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v20, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v15 = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v9;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 48) = 0;
  v16 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v3;
  ++*(_DWORD *)(a1 + 88);
  if ( a1 != -72 )
  {
    v17 = (RTL_SRWLOCK *)(a1 + 80);
    if ( *(_DWORD *)(a1 + 72) == 1 )
      LODWORD(v17->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v17);
  }
  if ( v16 )
  {
    if ( (_DWORD)v15 )
    {
      v18 = v16;
      v19 = v15;
      do
      {
        if ( *v18 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
          *v18 = 0LL;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    free(v16);
  }
  return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
           v20,
           *(unsigned __int8 *)(a1 + 92),
           a1,
           0LL,
           0);
}
