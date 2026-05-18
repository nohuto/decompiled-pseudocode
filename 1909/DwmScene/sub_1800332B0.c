/*
 * XREFs of sub_1800332B0 @ 0x1800332B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800332B0(__int64 a1, _QWORD *a2, unsigned __int8 a3, char a4)
{
  __int64 v7; // rax
  __int64 *v8; // rcx
  char v9; // di
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 result; // rax
  volatile signed __int32 *v15; // rbx
  __int128 v16; // [rsp+40h] [rbp-39h]
  __int64 v17; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-21h]
  __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-11h]
  char v21; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v22; // [rsp+78h] [rbp-1h]
  __int64 v23[8]; // [rsp+80h] [rbp+7h] BYREF

  v7 = 0LL;
  if ( *a2 )
  {
    sub_180033F18(*a2 + 256LL, &v19, *(unsigned int *)(a1 + 88));
    v8 = &v19;
    v9 = 1;
    v7 = v19;
  }
  else
  {
    v22 = 0LL;
    v8 = (__int64 *)&v21;
    v9 = 2;
  }
  *(_QWORD *)&v16 = v7;
  *((_QWORD *)&v16 + 1) = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v22;
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v20;
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_QWORD *)&v16 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
  *(_OWORD *)v23 = v16;
  sub_1800171D4(&v17, v23);
  v12 = *(_QWORD *)(v17 + 112);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = a3 | 2u;
  if ( !a4 )
    v13 = a3;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v12, v13);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 2);
    if ( !(_DWORD)result )
    {
      v15 = v18;
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( *((_QWORD *)&v16 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  return result;
}
