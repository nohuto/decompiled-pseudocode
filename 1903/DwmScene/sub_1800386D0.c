/*
 * XREFs of sub_1800386D0 @ 0x1800386D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032EC4 @ 0x180032EC4 (sub_180032EC4.c)
 *     sub_1800D1ED4 @ 0x1800D1ED4 (sub_1800D1ED4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800386D0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  char v5; // di
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-30h]
  char v17; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+50h] [rbp-20h]
  _BYTE v19[8]; // [rsp+58h] [rbp-18h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+20h]

  LODWORD(v21) = 0;
  v3 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( *a2 )
  {
    v4 = (__int64 *)sub_1800D1ED4(*a2, v19, *(unsigned int *)(a1 + 88));
    v5 = 1;
    v3 = *v4;
  }
  else
  {
    v18 = 0LL;
    v4 = (__int64 *)&v17;
    v5 = 2;
  }
  v13 = v3;
  v14 = (volatile signed __int32 *)v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v6 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~1u;
    v7 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  v15 = 0LL;
  v16 = 0LL;
  sub_180032EC4(&v15, &v13);
  if ( v15 )
  {
    v8 = *(_QWORD *)(v15 + 144);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v5 |= 0xCu;
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
    v8 = v21;
  }
  if ( (v5 & 4) != 0 && v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v9);
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      v11 = v16;
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      v12 = v14;
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
