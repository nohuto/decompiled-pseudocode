/*
 * XREFs of sub_1800A9714 @ 0x1800A9714
 * Callers:
 *     sub_1800A4FB8 @ 0x1800A4FB8 (sub_1800A4FB8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     sub_18002638C @ 0x18002638C (sub_18002638C.c)
 *     sub_18009098C @ 0x18009098C (sub_18009098C.c)
 *     sub_1800A9034 @ 0x1800A9034 (sub_1800A9034.c)
 *     sub_1800AA2EC @ 0x1800AA2EC (sub_1800AA2EC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A9714(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  _QWORD *i; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD **v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  __int64 **v12; // rax
  __int64 j; // rax
  __int64 *k; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  unsigned __int128 v18; // kr00_16
  __int64 v19; // rsi
  __int64 **v20; // rax
  __int64 m; // rax
  signed __int32 v22; // eax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 *n; // rcx
  __int64 v26; // rbx
  __int128 v28; // [rsp+28h] [rbp-39h] BYREF
  __int128 v29; // [rsp+38h] [rbp-29h] BYREF
  __int128 v30; // [rsp+48h] [rbp-19h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h]
  _BYTE v32[8]; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int128 v33; // [rsp+68h] [rbp+7h]
  _QWORD v34[2]; // [rsp+78h] [rbp+17h] BYREF

  v31 = -2LL;
  v2 = (_QWORD *)(a1 + 256);
  v3 = (_QWORD *)(a1 + 416);
  while ( v2 != v3 )
  {
    v28 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(v2, (__int64 *)&v28);
    if ( *((_QWORD *)&v28 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v4 = *((_QWORD *)&v28 + 1);
        (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
      }
    }
    v2 += 2;
  }
  for ( i = (_QWORD *)(a1 + 96); i != (_QWORD *)(a1 + 256); i += 2 )
  {
    v29 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(i, (__int64 *)&v29);
    if ( *((_QWORD *)&v29 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v6 = *((_QWORD *)&v29 + 1);
        (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
      }
    }
  }
  v7 = *(_QWORD **)(a1 + 416);
  v8 = (_QWORD *)*v7;
  while ( v8 != v7 )
  {
    sub_18002638C(v8 + 7);
    v9 = (_QWORD **)v8[5];
    v10 = *v9;
    *v9 = v9;
    *(_QWORD *)(v8[5] + 8LL) = v8[5];
    v8[6] = 0LL;
    if ( v10 != (_QWORD *)v8[5] )
    {
      do
      {
        v11 = (_QWORD *)*v10;
        unknown_libname_115((__int64)(v10 + 2), 0);
        j_j__o_free(v10);
        v10 = v11;
      }
      while ( v11 != (_QWORD *)v8[5] );
    }
    v12 = (__int64 **)v8[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( j = v8[1]; !*(_BYTE *)(j + 25) && v8 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
        v8 = (_QWORD *)j;
      v8 = (_QWORD *)j;
    }
    else
    {
      v8 = (_QWORD *)v8[2];
      for ( k = *v12; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v8 = k;
    }
  }
  v34[0] = 0LL;
  v34[1] = 0LL;
  sub_1800A9034(a1, v34);
  v15 = (_QWORD *)v34[0];
  v16 = *(_QWORD **)v34[0];
  while ( v16 != v15 )
  {
    v33 = 0LL;
    v17 = v16[5];
    if ( v17 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v17 + 8);
        if ( !v22 )
          break;
        if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v22 + 1, v22) )
        {
          v23 = v16[4];
          *(_QWORD *)&v33 = v23;
          v24 = v16[5];
          *((_QWORD *)&v33 + 1) = v24;
          v18 = __PAIR128__(v24, v23);
          goto LABEL_30;
        }
      }
    }
    v18 = v33;
LABEL_30:
    if ( (_QWORD)v18 )
      sub_18009098C((_QWORD *)v18);
    if ( *((_QWORD *)&v18 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v19 = *((_QWORD *)&v33 + 1);
        (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
      }
    }
    v20 = (__int64 **)v16[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( m = v16[1]; !*(_BYTE *)(m + 25) && v16 == *(_QWORD **)(m + 16); m = *(_QWORD *)(m + 8) )
        v16 = (_QWORD *)m;
      v16 = (_QWORD *)m;
    }
    else
    {
      v16 = (_QWORD *)v16[2];
      for ( n = *v20; !*((_BYTE *)n + 25); n = (__int64 *)*n )
        v16 = n;
    }
  }
  v30 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 440), (__int64 *)&v30);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v26 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  sub_1800AA2EC(v34, v32, *(_QWORD *)v34[0], v34[0], v28);
  return j_j__o_free(v34[0]);
}
