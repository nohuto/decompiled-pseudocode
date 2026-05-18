/*
 * XREFs of sub_1800836F4 @ 0x1800836F4
 * Callers:
 *     sub_180083914 @ 0x180083914 (sub_180083914.c)
 *     sub_18008706C @ 0x18008706C (sub_18008706C.c)
 *     sub_18008719C @ 0x18008719C (sub_18008719C.c)
 * Callees:
 *     sub_1800835E8 @ 0x1800835E8 (sub_1800835E8.c)
 *     sub_180083688 @ 0x180083688 (sub_180083688.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800836F4(__int64 a1, __int64 a2)
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
  sub_180087414(a1);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800835E8(a2, &v15);
  v5 = v15;
  if ( !v15 )
  {
    do
    {
      v6 = 0;
      if ( a2 != a1 )
      {
        v4 |= 1u;
        if ( !*sub_180083688(a2, &v17) )
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
      sub_180087340(a2);
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
      v5 = *sub_180083688(a2, &v19);
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
