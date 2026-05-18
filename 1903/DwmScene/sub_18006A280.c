/*
 * XREFs of sub_18006A280 @ 0x18006A280
 * Callers:
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 * Callees:
 *     sub_18006A05C @ 0x18006A05C (sub_18006A05C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18006A280(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 *v5; // rax
  void (__fastcall ****v6)(_QWORD, __int64); // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  signed __int32 v10; // eax
  __int128 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+60h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = a1[10];
  if ( v3 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v3 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v10 + 1, v10) )
      {
        *(_QWORD *)&v11 = a1[9];
        v4 = a1[10];
        *((_QWORD *)&v11 + 1) = v4;
        goto LABEL_3;
      }
    }
  }
  v4 = 0LL;
LABEL_3:
  v12 = v11;
  v5 = sub_18006A05C((__int64 *)&v13, &v12, a2);
  v6 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 12);
  if ( a1 + 12 != v5 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))*v5;
    *v5 = 0LL;
    v8 = *v6;
    *v6 = v7;
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  if ( v13 )
    (**v13)(v13, 1LL);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 48LL))(a1);
  return 1;
}
