/*
 * XREFs of sub_180086948 @ 0x180086948
 * Callers:
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 * Callees:
 *     sub_180081FA8 @ 0x180081FA8 (sub_180081FA8.c)
 *     sub_180084118 @ 0x180084118 (sub_180084118.c)
 *     sub_180084850 @ 0x180084850 (sub_180084850.c)
 *     sub_18008644C @ 0x18008644C (sub_18008644C.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180086948(__int64 a1, __m128 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __m128 *v9; // rax
  __int128 v11; // [rsp+30h] [rbp-41h]
  __int128 v12; // [rsp+40h] [rbp-31h]
  __int128 v13; // [rsp+58h] [rbp-19h] BYREF
  __m128 v14; // [rsp+68h] [rbp-9h] BYREF
  __m128 v15; // [rsp+78h] [rbp+7h] BYREF
  __m128 v16; // [rsp+88h] [rbp+17h] BYREF
  __m128 v17; // [rsp+98h] [rbp+27h] BYREF

  sub_180087524(a1);
  sub_180087450(a1);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v12 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v12 )
  {
    sub_180087450(a1);
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v11 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = sub_180084118(v11, &v15);
  }
  else
  {
    v13 = xmmword_18025F020;
    v9 = (__m128 *)&v13;
  }
  v17 = *v9;
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_180084850(&v17, &v17);
  v14 = *sub_180081FA8(&v16, a2, &v17);
  return sub_18008644C(a1, &v14);
}
