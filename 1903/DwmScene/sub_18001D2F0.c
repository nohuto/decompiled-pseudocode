/*
 * XREFs of sub_18001D2F0 @ 0x18001D2F0
 * Callers:
 *     sub_1800228D0 @ 0x1800228D0 (sub_1800228D0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180016B24 @ 0x180016B24 (sub_180016B24.c)
 *     sub_18001FC1C @ 0x18001FC1C (sub_18001FC1C.c)
 *     sub_1800630A8 @ 0x1800630A8 (sub_1800630A8.c)
 *     sub_180063428 @ 0x180063428 (sub_180063428.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006D55C @ 0x18006D55C (sub_18006D55C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_18001D2F0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+38h] [rbp-41h]
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h]
  __int128 v24; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h] BYREF
  char v27; // [rsp+78h] [rbp-1h]
  __int64 v28; // [rsp+80h] [rbp+7h]
  __int128 v29; // [rsp+88h] [rbp+Fh]
  _BYTE pExceptionObject[32]; // [rsp+98h] [rbp+1Fh] BYREF

  v28 = -2LL;
  sub_180063428(a1 + 3);
  v20 = 0LL;
  v21 = 0LL;
  if ( sub_18006CD84(a1) )
  {
    v9 = sub_18006D55C(a1, &v26);
    if ( &v20 != (__int64 *)v9 )
    {
      v20 = *(_QWORD *)v9;
      LOBYTE(v21) = *(_BYTE *)(v9 + 8);
      *(_QWORD *)v9 = 0LL;
      *(_BYTE *)(v9 + 8) = 0;
    }
    if ( v27 )
      sub_180063668(v26);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18001FC1C(a2, a3, a4, a5, 0);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v10 = a2[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a2[1];
  }
  v11 = *a2;
  v22 = *a2;
  v23 = v10;
  v12 = (_QWORD *)a1[32];
  if ( (_QWORD *)a1[33] == v12 )
  {
    sub_180016B24(a1 + 31, v12, &v22);
    v13 = v23;
  }
  else
  {
    *v12 = v11;
    v12[1] = v10;
    v13 = 0LL;
    v23 = 0LL;
    a1[32] += 16LL;
  }
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    {
      v14 = v23;
      (**(void (__fastcall ***)(__int64))v23)(v23);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v24 = 0LL;
  v15 = a2[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
    v15 = a2[1];
  }
  *(_QWORD *)&v24 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
  *((_QWORD *)&v24 + 1) = v15;
  v29 = 0LL;
  v16 = a1[2];
  if ( !v16 )
  {
LABEL_25:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
      goto LABEL_25;
  }
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) );
  v18 = a1[2];
  v25[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v25[1] = v18;
  v29 = 0LL;
  sub_1800630A8(v25, &v24);
  if ( (_BYTE)v21 )
    sub_180063668(v20);
  return a2;
}
