/*
 * XREFs of sub_1800157CC @ 0x1800157CC
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180016B94 @ 0x180016B94 (sub_180016B94.c)
 *     sub_180017030 @ 0x180017030 (sub_180017030.c)
 *     sub_1800631B8 @ 0x1800631B8 (sub_1800631B8.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18006D66C @ 0x18006D66C (sub_18006D66C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_1800157CC(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v24; // [rsp+50h] [rbp-69h] BYREF
  __int64 v25; // [rsp+58h] [rbp-61h]
  __int64 v26; // [rsp+60h] [rbp-59h] BYREF
  __int64 v27; // [rsp+68h] [rbp-51h]
  __int128 v28; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h] BYREF
  char v31; // [rsp+98h] [rbp-21h]
  __int64 v32; // [rsp+A0h] [rbp-19h]
  __int128 v33; // [rsp+A8h] [rbp-11h]
  _BYTE pExceptionObject[32]; // [rsp+B8h] [rbp-1h] BYREF

  v32 = -2LL;
  sub_180063538(a1 + 3);
  v24 = 0LL;
  v25 = 0LL;
  if ( sub_18006CE94(a1) )
  {
    v13 = sub_18006D66C(a1, &v30);
    if ( &v24 != (__int64 *)v13 )
    {
      v24 = *(_QWORD *)v13;
      LOBYTE(v25) = *(_BYTE *)(v13 + 8);
      *(_QWORD *)v13 = 0LL;
      *(_BYTE *)(v13 + 8) = 0;
    }
    if ( v31 )
      sub_180063778(v30);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180017030((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v14 = a2[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a2[1];
  }
  v15 = *a2;
  v26 = *a2;
  v27 = v14;
  v16 = (_QWORD *)a1[32];
  if ( (_QWORD *)a1[33] == v16 )
  {
    sub_180016B94(a1 + 31, v16, &v26);
    v17 = v27;
  }
  else
  {
    *v16 = v15;
    v16[1] = v14;
    v17 = 0LL;
    v27 = 0LL;
    a1[32] += 16LL;
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
    {
      v18 = v27;
      (**(void (__fastcall ***)(__int64))v27)(v27);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
    v19 = a2[1];
  }
  *(_QWORD *)&v28 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
  *((_QWORD *)&v28 + 1) = v19;
  v33 = 0LL;
  v20 = a1[2];
  if ( !v20 )
  {
LABEL_25:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v21 = *(_DWORD *)(v20 + 8);
    if ( !v21 )
      goto LABEL_25;
  }
  while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
  v22 = a1[2];
  v29[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v29[1] = v22;
  v33 = 0LL;
  sub_1800631B8(v29, &v28);
  if ( (_BYTE)v25 )
    sub_180063778(v24);
  return a2;
}
