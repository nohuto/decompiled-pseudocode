/*
 * XREFs of sub_180044750 @ 0x180044750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180032D14 @ 0x180032D14 (sub_180032D14.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180044750(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  signed __int32 v14; // eax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-21h]
  __int128 v20; // [rsp+48h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h]
  __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  int v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+78h] [rbp+17h]
  __int64 v26; // [rsp+80h] [rbp+1Fh] BYREF

  v21 = -2LL;
  if ( *(_DWORD *)(a1 + 136) != 1 )
    goto LABEL_31;
  v18 = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(a1 + 120);
  v20 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v7 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v14 + 1, v14) )
      {
        *(_QWORD *)&v20 = *(_QWORD *)(v6 + 72);
        v8 = *(_QWORD *)(v6 + 80);
        *((_QWORD *)&v20 + 1) = v8;
        goto LABEL_4;
      }
    }
  }
  v8 = *((_QWORD *)&v20 + 1);
LABEL_4:
  sub_180032D14(&v18, &v20);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  v22 = 0LL;
  sub_180033D1C(*(_QWORD **)(a1 + 120), &v22);
  v10 = *(_DWORD *)(a1 + 140);
  if ( !v10 )
  {
    v24 = 0LL;
    v25 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, bool))(*(_QWORD *)v22 + 232LL))(
            v22,
            *(_QWORD *)(a1 + 96),
            &v24,
            16LL,
            a3 != 1);
    if ( !v12 )
    {
      *(_QWORD *)(a1 + 144) = v24;
      *(_BYTE *)(a1 + 152) = (_DWORD)v25 != 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, bool))(*(_QWORD *)v22 + 232LL))(
            v22,
            *(_QWORD *)(a1 + 96),
            &v26,
            8LL,
            a3 != 1);
    if ( !v12 )
    {
      v13 = v26;
      goto LABEL_13;
    }
LABEL_23:
    if ( v12 != 1 )
    {
      sub_1800253B0(v18, v12);
      *(_DWORD *)(a1 + 136) = 5;
    }
    goto LABEL_25;
  }
  if ( v11 == 2 )
  {
    v23 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, bool))(*(_QWORD *)v22 + 232LL))(
            v22,
            *(_QWORD *)(a1 + 96),
            &v23,
            4LL,
            a3 != 1);
    if ( !v12 )
    {
      v13 = v23;
LABEL_13:
      *(_QWORD *)(a1 + 144) = v13;
LABEL_22:
      *(_DWORD *)(a1 + 136) = 2;
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_25:
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      v16 = v19;
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
LABEL_31:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 144);
  return a2;
}
