/*
 * XREFs of ?GetMany@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x180015FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CADF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r15
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // edi
  _QWORD *v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rcx
  unsigned int v18; // esi
  _QWORD *v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned int i; // ecx
  __int64 v23; // rbx
  void *v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+80h] [rbp+8h]
  unsigned int v28; // [rsp+90h] [rbp+18h]

  v5 = a4;
  v8 = 0;
  v9 = 0;
  v26 = 0;
  v28 = 0;
  v10 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v25 = 0LL;
  v11 = a1 + 72;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    v12 = *(_DWORD *)(a1 + 80);
    if ( v12 >= 0 )
      *(_DWORD *)(a1 + 80) = v12 + 1;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v13 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v25 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v25 )
    {
      v13 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v13, 0LL);
      goto LABEL_29;
    }
  }
  v28 = *(_DWORD *)(a1 + 40);
  if ( a2 > v28 )
  {
    v13 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( a3 )
    {
      v14 = a2;
      v15 = v5;
      v16 = *(_DWORD *)(a1 + 40);
      do
      {
        if ( v14 >= v16 )
          break;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v14);
        *v15 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        ++v9;
        ++v14;
        ++v15;
      }
      while ( v9 < a3 );
      v26 = v9;
      v8 = 0;
    }
    v13 = 0;
  }
  else if ( a3 )
  {
    v18 = a2;
    v19 = v5;
    v20 = *(_DWORD *)(a1 + 40);
    do
    {
      v13 = 0;
      if ( v18 >= v20 )
        break;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v18);
      *v19 = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      ++v8;
      ++v18;
      ++v19;
    }
    while ( v8 < a3 );
    v11 = a1 + 72;
  }
LABEL_29:
  if ( v11 )
  {
    if ( *(_DWORD *)v11 == 1 )
      --*(_DWORD *)(v11 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v11 + 8));
  }
  if ( v13 < 0 )
  {
    if ( v8 )
    {
      v23 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
    if ( v26 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v28 )
          break;
        v13 = 0;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v25);
  return (unsigned int)v13;
}
