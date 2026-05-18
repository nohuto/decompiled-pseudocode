/*
 * XREFs of sub_180083804 @ 0x180083804
 * Callers:
 *     sub_180083A24 @ 0x180083A24 (sub_180083A24.c)
 *     sub_18008717C @ 0x18008717C (sub_18008717C.c)
 *     sub_1800872AC @ 0x1800872AC (sub_1800872AC.c)
 * Callees:
 *     sub_1800836F8 @ 0x1800836F8 (sub_1800836F8.c)
 *     sub_180083798 @ 0x180083798 (sub_180083798.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180083804(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  bool v6; // bp
  volatile signed __int32 *v7; // rsi
  __int64 *v8; // r8
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  volatile signed __int32 *v20; // [rsp+50h] [rbp-28h]

  v4 = 0;
  sub_180087524(a1);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800836F8(a2, &v15);
  v5 = v15;
  if ( !v15 )
  {
    do
    {
      v6 = 0;
      if ( a2 != a1 )
      {
        v4 |= 1u;
        if ( !*sub_180083798(a2, &v17) )
          v6 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        v7 = v18;
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
          }
        }
      }
      if ( !v6 )
        break;
      sub_180087450(a2);
      v8 = (__int64 *)(a2 + 56);
      a2 = 0LL;
      v9 = 0LL;
      v10 = v8[1];
      if ( v10 )
      {
        while ( 1 )
        {
          v11 = *(_DWORD *)(v10 + 8);
          if ( !v11 )
            break;
          if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
          {
            a2 = *v8;
            v9 = (volatile signed __int32 *)v8[1];
            break;
          }
        }
      }
      v4 |= 4u;
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      v5 = *sub_180083798(a2, &v19);
    }
    else
    {
      v5 = 0LL;
    }
    if ( (v4 & 2) != 0 )
    {
      v12 = v20;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
  }
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v16;
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return v5;
}
