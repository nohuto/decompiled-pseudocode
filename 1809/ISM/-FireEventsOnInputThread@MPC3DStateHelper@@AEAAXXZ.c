/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18003AC98
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x18003AC80 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x18003B14C (--1-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@X.c)
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x18003BAA8 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x18003C5DC (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r15
  char Ptr_high; // r12
  char v4; // r13
  _QWORD *Ptr; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // r8
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD *); // rcx
  __int64 **v10; // rax
  __int64 *j; // rcx
  __int64 i; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  _QWORD *v16; // r8
  __int64 (__fastcall ***v17)(_QWORD, __int64, _QWORD *); // rcx
  __int64 **v18; // rax
  __int64 *m; // rcx
  __int64 k; // rax
  __int64 n; // rbx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 ii; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  const char *v27; // r9
  const char *v28; // r9
  _DWORD *v29; // rcx
  ISMTracing *v30; // rcx
  __int128 v31; // [rsp+28h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  PSRWLOCK v36; // [rsp+A0h] [rbp+40h] BYREF
  char v37; // [rsp+A8h] [rbp+48h]
  __int64 v38; // [rsp+B0h] [rbp+50h]

  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v36 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v37 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v4 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  Ptr = SRWLock[6].Ptr;
  v6 = (_QWORD *)*Ptr;
  if ( (_QWORD *)*Ptr != Ptr )
  {
    v7 = *((_QWORD *)&v33 + 1);
    do
    {
      v8 = v6 + 5;
      if ( v34 == v7 )
      {
        std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(&v33, v7, v8);
        v7 = *((_QWORD *)&v33 + 1);
      }
      else
      {
        v38 = v7;
        *(_QWORD *)(v7 + 56) = 0LL;
        v9 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))v6[12];
        if ( v9 )
          *(_QWORD *)(v7 + 56) = (**v9)(v9, v7, v8);
        v7 = *((_QWORD *)&v33 + 1) + 64LL;
        *((_QWORD *)&v33 + 1) += 64LL;
      }
      if ( !*((_BYTE *)v6 + 25) )
      {
        v10 = (__int64 **)v6[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v6 = (_QWORD *)i;
          v6 = (_QWORD *)i;
        }
        else
        {
          v6 = (_QWORD *)v6[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v6 = j;
        }
      }
    }
    while ( v6 != Ptr );
  }
  v13 = SRWLock[4].Ptr;
  v14 = (_QWORD *)*v13;
  if ( (_QWORD *)*v13 != v13 )
  {
    v15 = *((_QWORD *)&v31 + 1);
    do
    {
      v16 = v14 + 5;
      if ( v32 == v15 )
      {
        std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(&v31, v15, v16);
        v15 = *((_QWORD *)&v31 + 1);
      }
      else
      {
        v38 = v15;
        *(_QWORD *)(v15 + 56) = 0LL;
        v17 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))v14[12];
        if ( v17 )
          *(_QWORD *)(v15 + 56) = (**v17)(v17, v15, v16);
        v15 = *((_QWORD *)&v31 + 1) + 64LL;
        *((_QWORD *)&v31 + 1) += 64LL;
      }
      if ( !*((_BYTE *)v14 + 25) )
      {
        v18 = (__int64 **)v14[2];
        if ( *((_BYTE *)v18 + 25) )
        {
          for ( k = v14[1]; !*(_BYTE *)(k + 25) && v14 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
            v14 = (_QWORD *)k;
          v14 = (_QWORD *)k;
        }
        else
        {
          v14 = (_QWORD *)v14[2];
          for ( m = *v18; !*((_BYTE *)m + 25); m = (__int64 *)*m )
            v14 = m;
        }
      }
    }
    while ( v14 != v13 );
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v4 )
  {
    v22 = *((_QWORD *)&v33 + 1);
    for ( n = v33; n != v22; n += 64LL )
    {
      LOBYTE(v36) = Ptr_high;
      v23 = *(_QWORD *)(n + 56);
      if ( !v23 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v23 + 16LL))(v23, &v36);
    }
  }
  if ( v2 != v37 )
  {
    v25 = *((_QWORD *)&v31 + 1);
    for ( ii = v31; ii != v25; ii += 64LL )
    {
      LOBYTE(v36) = v2;
      v26 = *(_QWORD *)(ii + 56);
      if ( !v26 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v26 + 16LL))(v26, &v36);
    }
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
    {
      if ( !SetEvent(SRWLock[8].Ptr) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x904,
          (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
          v28);
        __debugbreak();
      }
    }
    else if ( !SetEvent(SRWLock[9].Ptr) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x904,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v27);
      JUMPOUT(0x18003AF97LL);
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  v29 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v29 && *v29 )
  {
    ISMTracing::Instance();
    ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(v30, v2, Ptr_high);
  }
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v31);
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v33);
}
