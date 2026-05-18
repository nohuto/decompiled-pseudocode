/*
 * XREFs of sub_1801011A0 @ 0x1801011A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_1800A5128 @ 0x1800A5128 (sub_1800A5128.c)
 *     sub_1800A516C @ 0x1800A516C (sub_1800A516C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800B1004 @ 0x1800B1004 (sub_1800B1004.c)
 *     sub_1800B10EC @ 0x1800B10EC (sub_1800B10EC.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     sub_1800FFC4C @ 0x1800FFC4C (sub_1800FFC4C.c)
 *     sub_180100414 @ 0x180100414 (sub_180100414.c)
 *     sub_180100448 @ 0x180100448 (sub_180100448.c)
 *     sub_1801005D8 @ 0x1801005D8 (sub_1801005D8.c)
 *     sub_18010060C @ 0x18010060C (sub_18010060C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1801011A0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbx
  signed __int32 v13; // eax
  int v14; // eax
  _QWORD *v15; // rax
  volatile signed __int32 *v16; // rbx
  _QWORD *v17; // r8
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // r8
  volatile signed __int32 *v20; // rbx
  _QWORD *v21; // r8
  __int64 result; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int128 v25; // [rsp+28h] [rbp-69h]
  __int64 v26; // [rsp+38h] [rbp-59h] BYREF
  volatile signed __int32 *v27; // [rsp+40h] [rbp-51h]
  __int128 v28; // [rsp+48h] [rbp-49h] BYREF
  __int128 v29; // [rsp+58h] [rbp-39h] BYREF
  __int128 v30; // [rsp+68h] [rbp-29h] BYREF
  __int64 v31; // [rsp+78h] [rbp-19h]
  __int64 v32; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v35; // [rsp+98h] [rbp+7h]
  __int64 v36; // [rsp+A0h] [rbp+Fh] BYREF
  volatile signed __int32 *v37; // [rsp+A8h] [rbp+17h]
  __int64 v38; // [rsp+B0h] [rbp+1Fh] BYREF
  volatile signed __int32 *v39; // [rsp+B8h] [rbp+27h]

  v31 = -2LL;
  v6 = sub_1800F0DA4(a1);
  v7 = sub_180078118(v6);
  v29 = 0LL;
  sub_1800A5128(v7, a1 + 1768, &v29);
  v8 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
  if ( *((_QWORD *)&v29 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v30 = 0LL;
  sub_1800A5128(v7, a1 + 1848, &v30);
  v9 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v10 + 8);
      if ( !v13 )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v13 + 1, v13) )
      {
        *(_QWORD *)&v25 = *(_QWORD *)(a1 + 56);
        v11 = *(_QWORD *)(a1 + 64);
        *((_QWORD *)&v25 + 1) = v11;
        goto LABEL_11;
      }
    }
  }
  v11 = 0LL;
LABEL_11:
  sub_18000F9B8(v25, &v26);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
    }
  }
  v12 = v26;
  if ( *(_BYTE *)(v26 + 124) && *(float *)(v26 + 104) > 0.0 )
  {
    sub_1800FFC4C(a1);
    if ( *(_DWORD *)(a1 + 1960) || !*(_DWORD *)(a1 + 1944) )
    {
      if ( *(_DWORD *)(v12 + 120) == 2 )
      {
        if ( *(_DWORD *)(a1 + 316) != 3 )
        {
          *(_DWORD *)(a1 + 316) = 3;
LABEL_35:
          sub_1800B1004(a1, 2);
        }
      }
      else if ( *(_DWORD *)(a1 + 316) != 1 )
      {
        *(_DWORD *)(a1 + 316) = 1;
        goto LABEL_35;
      }
      *(_DWORD *)(a1 + 312) = 1065353216;
      *(_DWORD *)(a1 + 412) = 3;
LABEL_37:
      v14 = *(_DWORD *)(a1 + 1940) - 1;
      *(_QWORD *)&v28 = 0x100000001LL;
      DWORD2(v28) = v14;
      HIDWORD(v28) = v14;
      sub_1800B10EC(a1, &v28);
      sub_1800AF450(a1, a2, a3);
      v15 = sub_18010060C(a1, &v32);
      sub_1800A5128(v7, a1 + 1768, v15);
      v16 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      v17 = sub_180100448(a1, &v34);
      sub_1800A5128(v7, a1 + 1848, v17);
      v18 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v12 + 120) == 2 )
    {
      if ( *(_DWORD *)(a1 + 316) != 4 )
      {
        *(_DWORD *)(a1 + 316) = 4;
LABEL_31:
        sub_1800B1004(a1, 2);
      }
    }
    else if ( *(_DWORD *)(a1 + 316) != 2 )
    {
      *(_DWORD *)(a1 + 316) = 2;
      goto LABEL_31;
    }
    *(_DWORD *)(a1 + 412) = 6;
    *(_DWORD *)(a1 + 312) = 0;
    goto LABEL_37;
  }
LABEL_45:
  v19 = sub_1801005D8(a1, &v36);
  sub_1800A516C(v7, a1 + 1768, v19);
  v20 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = sub_180100414(a1, &v38);
  result = sub_1800A516C(v7, a1 + 1848, v21);
  v23 = v39;
  if ( v39 )
  {
    result = (unsigned int)_InterlockedDecrement(v39 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      result = (unsigned int)_InterlockedDecrement(v23 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
    if ( !(_DWORD)result )
    {
      v24 = v27;
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = (unsigned int)_InterlockedDecrement(v24 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  return result;
}
