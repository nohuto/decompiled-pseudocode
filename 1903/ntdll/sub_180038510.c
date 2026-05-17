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

__int64 __fastcall sub_180038510(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rbx
  signed __int64 v4; // rdi
  signed __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edx
  int v8; // ett
  _DWORD *HotpatchInformation; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rcx
  signed __int32 v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 **v18; // rax
  signed __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r8
  __int64 *ThreadPoolData; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rtt
  signed __int32 v26; // r8d
  signed __int32 v27; // ett
  __int64 v28; // rdx
  signed __int64 v29; // rcx
  signed __int64 v30; // rdx
  signed __int64 v31; // rtt
  __int64 v32; // rbx
  signed __int64 v33; // [rsp+30h] [rbp-38h]

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      v2 = 0;
    }
    v4 = v3;
    v5 = (v3 ^ (v3 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v3;
    if ( v4 < 0 && (v5 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v5 &= ~0x8000000000000000uLL;
      v2 = 1;
      RtlAcquireSRWLockExclusive(a1 + 64);
    }
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v5, v4);
  }
  while ( v4 != v3 );
  if ( v2 )
  {
    v32 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    sub_180066D3C(v32);
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v7 = result & 1;
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result & 0xFFFFFFFE) + 2,
                             result);
  }
  while ( v8 != (_DWORD)result );
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = NtCurrentTeb()->SystemReserved1[53];
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      sub_18010F1C4(*(_QWORD *)(a1 + 144), a1 + 200, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104));
    v11 = *(_QWORD *)(a1 + 144);
    v12 = *(_DWORD *)(a1 + 192);
    if ( !v11 )
      v11 = qword_180166470;
    if ( v11 == qword_180166458 )
      v12 = 1;
    v13 = *(unsigned int *)(a1 + 208);
    _m_prefetchw((const void *)(v11 + 428));
    v14 = *(_DWORD *)(v11 + 428);
    while ( 1 )
    {
      if ( v14 == -2 )
      {
        v26 = v13;
      }
      else
      {
        if ( v14 == (_DWORD)v13 || v14 == -1 )
        {
LABEL_22:
          v15 = (__int64 *)(a1 + 216);
          v16 = *(_QWORD *)(v11 + 8LL * v12 + 16) + 24 * v13;
          RtlAcquireSRWLockExclusive(v16 + 16);
          v18 = *(__int64 ***)(v16 + 8);
          if ( *v18 != (__int64 *)v16 )
            __fastfail(3u);
          *(_QWORD *)(a1 + 224) = v18;
          *v15 = v16;
          *v18 = v15;
          *(_QWORD *)(v16 + 8) = v15;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), 0LL, 1LL);
          if ( v19 != 1 )
          {
            do
            {
              v28 = 3LL;
              v29 = v19 & 6;
              if ( v29 != 2 )
                v28 = -1LL;
              v30 = v19 + v28;
              v31 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), v30, v19);
            }
            while ( v31 != v19 );
            if ( v29 == 2 )
              sub_180035E30((volatile signed __int64 *)(v16 + 16), v30, 0);
          }
          if ( !v11 || (v20 = *(_DWORD *)(v11 + 440)) == 0 )
            v20 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(v11 + 424) != v20 )
          {
            RtlAcquireSRWLockExclusive(v11 + 72);
            sub_18010EB1C(v11);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 72));
          }
          v21 = 0LL;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v23 = *ThreadPoolData;
            if ( *(_QWORD *)(*ThreadPoolData + 48) == v11 && *(_DWORD *)(v23 + 128) == 3 )
            {
              *(_DWORD *)(v23 + 128) = 4;
              v21 = 1LL;
            }
          }
          _m_prefetchw((const void *)(v11 + 8));
          result = *(_QWORD *)(v11 + 8);
          LODWORD(v33) = result;
          do
          {
            if ( (v33 & 0xFFFF0000) != 0 || (_DWORD)v21 )
            {
              v24 = 0LL;
            }
            else
            {
              LODWORD(v33) = (unsigned __int16)v33 | ((v33 & 0xFFFF0000) + 0x10000);
              v24 = 1LL;
            }
            v25 = result;
            HIDWORD(v33) = HIDWORD(result) + 1;
            result = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v33, result);
            LODWORD(v33) = result;
          }
          while ( v25 != result );
          if ( (_DWORD)v24 )
            result = ZwReleaseWorkerFactoryWorker(*(_QWORD *)(v11 + 56), v24, v21, v17);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
          return result;
        }
        v26 = -1;
      }
      v27 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 428), v26, v14);
      if ( v27 == v14 )
        goto LABEL_22;
    }
  }
  return result;
}
