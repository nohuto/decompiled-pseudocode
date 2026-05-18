/*
 * XREFs of sub_180073A84 @ 0x180073A84
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 *     sub_1800AF04C @ 0x1800AF04C (sub_1800AF04C.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 * Callees:
 *     sub_1800E9A90 @ 0x1800E9A90 (sub_1800E9A90.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180073A84(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rcx
  signed __int32 v10; // eax
  __int128 v11; // [rsp+30h] [rbp-20h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v11 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
      {
        v7 = *a2;
        *(_QWORD *)&v11 = *a2;
        v6 = a2[1];
        *((_QWORD *)&v11 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
  v7 = 0LL;
LABEL_3:
  if ( v7 )
  {
    a1[2] = sub_1800E9A90(v7, a3);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      v6 = *((_QWORD *)&v11 + 1);
      v7 = v11;
    }
    *a1 = v7;
    v8 = (volatile signed __int32 *)a1[1];
    a1[1] = v6;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      v6 = *((_QWORD *)&v11 + 1);
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return a1;
}
