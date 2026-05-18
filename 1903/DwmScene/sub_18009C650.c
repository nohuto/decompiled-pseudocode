/*
 * XREFs of sub_18009C650 @ 0x18009C650
 * Callers:
 *     sub_18008CEF4 @ 0x18008CEF4 (sub_18008CEF4.c)
 * Callees:
 *     sub_180083644 @ 0x180083644 (sub_180083644.c)
 *     sub_18008A3F0 @ 0x18008A3F0 (sub_18008A3F0.c)
 *     sub_18008C858 @ 0x18008C858 (sub_18008C858.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18009C650(_QWORD *a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 result; // rax
  signed __int32 v9; // eax
  __int128 v10; // [rsp+20h] [rbp-69h]
  __int128 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+48h] [rbp-41h]
  __int128 v13; // [rsp+50h] [rbp-39h] BYREF
  __int64 v14; // [rsp+60h] [rbp-29h]
  __int128 v15; // [rsp+70h] [rbp-19h] BYREF
  __int128 v16; // [rsp+90h] [rbp+7h]
  __int128 v17; // [rsp+A0h] [rbp+17h]

  v10 = 0LL;
  v6 = a1[8];
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v9 + 1, v9) )
      {
        *(_QWORD *)&v10 = a1[7];
        v7 = a1[8];
        *((_QWORD *)&v10 + 1) = v7;
        goto LABEL_3;
      }
    }
  }
  v7 = 0LL;
LABEL_3:
  sub_180083644(v10, (__int64)&v15);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v11 = xmmword_1801E38A0;
  v12 = 0x3F8000003F800000LL;
  result = sub_18008C858(a1 + 11, &v11, *(double *)&v16, *(double *)&v17);
  if ( *a3 )
  {
    v13 = xmmword_1801E38A0;
    v14 = 0x3F8000003F800000LL;
    result = sub_18008A3F0(&v13, a2, (unsigned __int64 *)&v11);
    *(_OWORD *)a2 = v13;
    a2[2] = v14;
  }
  else
  {
    *(_OWORD *)a2 = v11;
    a2[2] = v12;
    *a3 = 1;
  }
  return result;
}
