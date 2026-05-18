/*
 * XREFs of sub_180073974 @ 0x180073974
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 *     sub_1800796C4 @ 0x1800796C4 (sub_1800796C4.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007A4A0 @ 0x18007A4A0 (sub_18007A4A0.c)
 *     sub_18007AEFC @ 0x18007AEFC (sub_18007AEFC.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800C2660 @ 0x1800C2660 (sub_1800C2660.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 * Callees:
 *     sub_1800E9980 @ 0x1800E9980 (sub_1800E9980.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180073974(_QWORD *a1, __int64 *a2, __int64 a3)
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
    a1[2] = sub_1800E9980(v7, a3);
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
