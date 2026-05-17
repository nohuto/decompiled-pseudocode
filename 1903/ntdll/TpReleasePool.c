/*
 * XREFs of TpReleasePool @ 0x180081400
 * Callers:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 *     ZwShutdownWorkerFactory @ 0x18009FCB0 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F398 @ 0x18010F398 (sub_18010F398.c)
 *     sub_18010F990 @ 0x18010F990 (sub_18010F990.c)
 */

__int64 __fastcall TpReleasePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int64 *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v24; // [rsp+88h] [rbp+10h]
  signed __int64 v25; // [rsp+90h] [rbp+18h]

  v24 = 0;
  if ( !a1 || a1 == qword_180166470 || a1 == qword_180166458 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v19 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v19 + 72) )
      return sub_18010EFC8(v19, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( *(_BYTE *)(a1 + 377) )
    {
      sub_18010EFC8(v6, v5, v7, v8);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v25) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v25) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v25, v9);
          LODWORD(v25) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; ; ++i )
        {
          HIDWORD(v22) = i;
          if ( i >= 3 )
            break;
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            LODWORD(v22) = j;
            if ( (unsigned int)j >= dword_180166074 || v11 )
              break;
            v14 = sub_18010F990(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i, v7, v8, v22);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 && *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v24 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (__int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (__int64)NtCurrentPeb();
      v18 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v18 = 2147353478LL;
    }
    if ( *(_BYTE *)v18 )
      result = sub_18010F398(a1);
    if ( v24 )
    {
      if ( a1 == qword_180166470 )
      {
        v20 = &qword_180166480;
        v21 = &qword_180166470;
      }
      else
      {
        if ( a1 != qword_180166458 )
        {
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            return sub_180081630(a1, v16, v17);
          return result;
        }
        v20 = (signed __int64 *)&unk_180166468;
        v21 = &qword_180166458;
      }
      return sub_18002F2D4((const void **)v21, (__int64)v20);
    }
  }
  return result;
}
