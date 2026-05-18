/*
 * XREFs of sub_18003DC90 @ 0x18003DC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003DC90(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed __int32 v6; // eax
  volatile signed __int32 *v7; // rbx
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v4 = *(_QWORD *)(a1 + 104);
  v10 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v9 = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) )
      {
        v9 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180045114(a2, &v9, &v10, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL), -2LL, v9);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a2;
}
