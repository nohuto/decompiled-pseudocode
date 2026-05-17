/*
 * XREFs of RtlAcquireResourceShared @ 0x18005FB10
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

char __fastcall RtlAcquireResourceShared(__int64 a1, char a2)
{
  signed __int32 v2; // r8d
  signed __int32 v5; // eax
  signed __int32 v7; // edx
  bool v8; // zf
  int v9; // eax
  int v10; // ebp
  __int64 *v11; // rsi
  int v12; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(HANDLE *)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( v2 >= 0 )
      {
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2);
        v8 = v2 == v5;
        v2 = v5;
        if ( v8 )
          return 1;
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      v2 = *(_DWORD *)(a1 + 68);
      if ( v2 >= 0 )
      {
        v7 = *(_DWORD *)(a1 + 48);
        v8 = v7 == 0;
        if ( v7 > 0 )
        {
          do
          {
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v7 - 1, v7);
            if ( v7 == v9 )
              break;
            v7 = v9;
          }
          while ( v9 > 0 );
          v8 = v7 == 0;
        }
        if ( !v8 )
          continue;
      }
      v10 = 0;
      while ( 1 )
      {
        v11 = &qword_180164F00;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          v11 = 0LL;
        v12 = ZwWaitForSingleObject(*(_QWORD *)(a1 + 40), 0LL, v11);
        if ( v12 != 258 )
          break;
        DbgPrintEx(
          101,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v10,
          ((unsigned __int64)(((unsigned __int128)(*v11 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v11) >> 63)
        + ((__int64)(((unsigned __int128)(*v11 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v11) >> 23));
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v10 > 2 )
          sub_1800E6C88(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      if ( v12 < 0 )
        RtlRaiseStatus((unsigned int)v12);
      v2 = *(_DWORD *)(a1 + 68);
    }
    return 0;
  }
}
