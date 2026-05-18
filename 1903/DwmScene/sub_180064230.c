/*
 * XREFs of sub_180064230 @ 0x180064230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064230(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rdi
  signed __int32 v5; // eax
  __int128 v6; // [rsp+28h] [rbp-20h]

  v6 = 0LL;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v1 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v5 + 1, v5) )
      {
        *(_QWORD *)&v6 = *(_QWORD *)(a1 + 72);
        v2 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v6 + 1) = v2;
        goto LABEL_3;
      }
    }
  }
  v2 = 0LL;
LABEL_3:
  v3 = sub_18006CD84(v6);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v6 + 1))(*((_QWORD *)&v6 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v6 + 1) + 8LL))(*((_QWORD *)&v6 + 1));
    }
  }
  return v3;
}
