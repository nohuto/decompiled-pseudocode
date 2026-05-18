/*
 * XREFs of sub_1800D1DC0 @ 0x1800D1DC0
 * Callers:
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_1800D1830 @ 0x1800D1830 (sub_1800D1830.c)
 *     sub_1800D1980 @ 0x1800D1980 (sub_1800D1980.c)
 *     sub_1800D20C4 @ 0x1800D20C4 (sub_1800D20C4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D1DC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  sub_1800D1830(a1 + 96, a2);
  v6 = a3[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a3[1];
  }
  *(_QWORD *)(a1 + 160) = *a3;
  v7 = *(volatile signed __int32 **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v6;
  if ( v7 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( sub_180064430(a1, 1) )
  {
    v8 = sub_180064400(a1);
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    sub_18007B288(v8, &v17);
    v9 = 0;
    v10 = v17;
    if ( (v18 - v17) >> 4 )
    {
      v11 = 0LL;
      do
      {
        v12 = v10 + 16 * v11;
        v16 = 0LL;
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v16 = *(_OWORD *)v12;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 32LL))(v16) )
          sub_1800D1980(a1, (__int64 *)&v16);
        v14 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
        if ( *((_QWORD *)&v16 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        ++v9;
        v10 = v17;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v18 - v17) >> 4) );
    }
    sub_1800113D8(&v17);
  }
  return sub_1800D20C4(a2 + 16);
}
