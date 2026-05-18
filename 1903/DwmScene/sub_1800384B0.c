/*
 * XREFs of sub_1800384B0 @ 0x1800384B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D278C @ 0x1800D278C (sub_1800D278C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_1800384B0(__int64 a1, _QWORD *a2, unsigned int a3, int a4, ...)
{
  __int64 v6; // rax
  __int64 *v7; // rcx
  char v8; // di
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-41h]
  volatile signed __int32 *v15; // [rsp+48h] [rbp-39h]
  __int64 v16; // [rsp+50h] [rbp-31h]
  char v17; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  _BYTE v20[8]; // [rsp+70h] [rbp-11h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h] BYREF
  int v23; // [rsp+88h] [rbp+7h] BYREF
  va_list va; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v19 = -2LL;
  v23 = a4;
  LODWORD(v16) = 0;
  v6 = 0LL;
  if ( *a2 )
  {
    v7 = (__int64 *)sub_1800D278C(*a2, v20, *(unsigned int *)(a1 + 88));
    v8 = 1;
    v6 = *v7;
  }
  else
  {
    v18 = 0LL;
    v7 = (__int64 *)&v17;
    v8 = 2;
  }
  v14 = v6;
  v15 = (volatile signed __int32 *)v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v9 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    v10 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( v14 )
  {
    v11 = *(_QWORD *)(v14 + 104);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v8 |= 0xCu;
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
    v11 = v16;
  }
  v22 = v12;
  if ( (v8 & 4) != 0 && v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, char *, int *))(**(_QWORD **)(a1 + 144) + 144LL))(
             *(_QWORD *)(a1 + 144),
             a3,
             1LL,
             &v22,
             va,
             &v23);
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
