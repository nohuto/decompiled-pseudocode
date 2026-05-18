/*
 * XREFs of sub_18006A840 @ 0x18006A840
 * Callers:
 *     sub_180034140 @ 0x180034140 (sub_180034140.c)
 *     sub_18006A11C @ 0x18006A11C (sub_18006A11C.c)
 * Callees:
 *     sub_18006D12C @ 0x18006D12C (sub_18006D12C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18006A840(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int128 v4; // rcx
  signed __int32 v5; // eax
  __int128 v6; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5) )
      {
        v4 = *(_OWORD *)(a1 + 72);
        *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 80);
        goto LABEL_5;
      }
    }
  }
  v4 = 0LL;
LABEL_5:
  if ( (_QWORD)v4 )
    *(_DWORD *)(a1 + 104) = sub_18006D12C(v4);
  if ( *((_QWORD *)&v4 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v4 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (***((void (__fastcall ****)(_QWORD))&v6 + 1))(*((_QWORD *)&v6 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 12LL)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v6 + 1) + 8LL))(*((_QWORD *)&v6 + 1));
  }
}
