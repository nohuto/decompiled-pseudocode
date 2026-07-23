/*
 * XREFs of sub_180038510 @ 0x180038510
 * Callers:
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 *     TpPostWork @ 0x180036570 (TpPostWork.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x18009F3F0 (ZwReleaseWorkerFactoryWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 *     sub_18010F1C4 @ 0x18010F1C4 (sub_18010F1C4.c)
 */

int __fastcall sub_180038510(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rbx
  signed __int64 v4; // rdi
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  int v7; // edx
  int v8; // ett
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v10; // rcx
  char *v11; // rdi
  int v12; // edx
  __int64 v13; // rcx
  signed __int32 v14; // eax
  _RTL_SRWLOCK **v15; // r14
  _RTL_SRWLOCK *v16; // rbx
  _RTL_SRWLOCK **Ptr; // rax
  signed __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  __int64 *ThreadPoolData; // rcx
  __int64 v22; // rax
  int v23; // edx
  signed __int64 v24; // rtt
  signed __int32 v25; // r8d
  signed __int32 v26; // ett
  __int64 v27; // rdx
  signed __int64 v28; // rcx
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  __int64 v31; // rbx
  signed __int64 v33; // [rsp+30h] [rbp-38h]

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v2 = 0;
    }
    v4 = v3;
    v5 = (v3 ^ (v3 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v3;
    if ( v4 < 0 && (v5 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v5 &= ~0x8000000000000000uLL;
      v2 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    }
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v5, v4);
  }
  while ( v4 != v3 );
  if ( v2 )
  {
    v31 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    sub_180066D3C(v31);
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(v6) = *(_DWORD *)(a1 + 232);
  do
  {
    v7 = v6 & 1;
    v8 = v6;
    LODWORD(v6) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), (v6 & 0xFFFFFFFE) + 2, v6);
  }
  while ( v8 != (_DWORD)v6 );
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      sub_18010F1C4(*(_QWORD *)(a1 + 144), a1 + 200, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104));
    v11 = *(char **)(a1 + 144);
    v12 = *(_DWORD *)(a1 + 192);
    if ( !v11 )
      v11 = (char *)qword_180166470;
    if ( v11 == (char *)qword_180166458 )
      v12 = 1;
    v13 = *(unsigned int *)(a1 + 208);
    _m_prefetchw(v11 + 428);
    v14 = *((_DWORD *)v11 + 107);
    while ( 1 )
    {
      if ( v14 == -2 )
      {
        v25 = v13;
      }
      else
      {
        if ( v14 == (_DWORD)v13 || v14 == -1 )
        {
LABEL_22:
          v15 = (_RTL_SRWLOCK **)(a1 + 216);
          v16 = (_RTL_SRWLOCK *)(*(_QWORD *)&v11[8 * v12 + 16] + 24 * v13);
          RtlAcquireSRWLockExclusive(v16 + 2);
          Ptr = (_RTL_SRWLOCK **)v16[1].Ptr;
          if ( *Ptr != v16 )
            __fastfail(3u);
          *(_QWORD *)(a1 + 224) = Ptr;
          *v15 = v16;
          *Ptr = (_RTL_SRWLOCK *)v15;
          v16[1].Ptr = v15;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&v16[2], 0LL, 1LL);
          if ( v18 != 1 )
          {
            do
            {
              v27 = 3LL;
              v28 = v18 & 6;
              if ( v28 != 2 )
                v27 = -1LL;
              v29 = v18 + v27;
              v30 = v18;
              v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&v16[2], v29, v18);
            }
            while ( v30 != v18 );
            if ( v28 == 2 )
              sub_180035E30((volatile signed __int64 *)&v16[2], v29, 0);
          }
          if ( !v11 || (v19 = *((_DWORD *)v11 + 110)) == 0 )
            v19 = MEMORY[0x7FFE03C0];
          if ( *((_DWORD *)v11 + 106) != v19 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v11 + 9);
            sub_18010EB1C(v11);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v11 + 9);
          }
          v20 = 0;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v22 = *ThreadPoolData;
            if ( *(char **)(*ThreadPoolData + 48) == v11 && *(_DWORD *)(v22 + 128) == 3 )
            {
              *(_DWORD *)(v22 + 128) = 4;
              v20 = 1;
            }
          }
          _m_prefetchw(v11 + 8);
          v6 = *((_QWORD *)v11 + 1);
          LODWORD(v33) = v6;
          do
          {
            if ( (v33 & 0xFFFF0000) != 0 || v20 )
            {
              v23 = 0;
            }
            else
            {
              LODWORD(v33) = (unsigned __int16)v33 | ((v33 & 0xFFFF0000) + 0x10000);
              v23 = 1;
            }
            v24 = v6;
            HIDWORD(v33) = HIDWORD(v6) + 1;
            v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 1, v33, v6);
            LODWORD(v33) = v6;
          }
          while ( v24 != v6 );
          if ( v23 )
            LODWORD(v6) = ZwReleaseWorkerFactoryWorker(*((HANDLE *)v11 + 7));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            LODWORD(v6) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
          return v6;
        }
        v25 = -1;
      }
      v26 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)v11 + 107, v25, v14);
      if ( v26 == v14 )
        goto LABEL_22;
    }
  }
  return v6;
}
