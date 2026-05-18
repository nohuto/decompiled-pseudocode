/*
 * XREFs of sub_180018730 @ 0x180018730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_1800159D4 @ 0x1800159D4 (sub_1800159D4.c)
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_180016788 @ 0x180016788 (sub_180016788.c)
 *     sub_180017164 @ 0x180017164 (sub_180017164.c)
 *     sub_18002EA0C @ 0x18002EA0C (sub_18002EA0C.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_18009DE28 @ 0x18009DE28 (sub_18009DE28.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018730(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rsi
  signed int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int128 v21; // [rsp+20h] [rbp-59h] BYREF
  __int64 v22; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  __int128 v24; // [rsp+40h] [rbp-39h]
  _BYTE v25[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-21h]
  __int128 v27; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-9h] BYREF
  __int128 v29; // [rsp+80h] [rbp+7h] BYREF
  int v30[2]; // [rsp+90h] [rbp+17h] BYREF
  volatile signed __int32 *v31; // [rsp+98h] [rbp+1Fh]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)v30 = 0LL;
  v31 = 0LL;
  sub_180015EA4(*(_QWORD **)(a1 + 56), v30, 1u);
  v8 = *(_QWORD *)(a1 + 56);
  v29 = 0uLL;
  v9 = (__int64 *)sub_180077A9C(v8, v25, 1LL);
  sub_1800159D4(*v9, &v29);
  v10 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v21 = 0uLL;
  if ( *((_QWORD *)&v29 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
  v27 = v29;
  sub_180017164(&v21, (__int64 *)&v27);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v22 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v23 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  sub_18002EA0C(v21, &v23, &v22, 1LL);
  v11 = *((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 1u);
    v11 = *((_QWORD *)&v21 + 1);
  }
  v24 = v21;
  sub_18009DE28(v30[0]);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
  if ( *((_QWORD *)&v24 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v11 = *((_QWORD *)&v21 + 1);
  }
  v28 = 0LL;
  v13 = sub_180016788(&v28, (__int64)v30);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v16 = v28;
    v15 = 0LL;
    v28 = 0LL;
    v14 = 0;
    *a4 = v16;
  }
  else
  {
    sub_18000C338(retaddr, 393, (__int64)"SpectreRenderer.cpp", v13);
    v15 = v28;
  }
  if ( v15 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v17 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
  if ( *((_QWORD *)&v29 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = v31;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return v14;
}
