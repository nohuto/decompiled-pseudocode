/*
 * XREFs of sub_180037510 @ 0x180037510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033E08 @ 0x180033E08 (sub_180033E08.c)
 *     sub_1800389A0 @ 0x1800389A0 (sub_1800389A0.c)
 *     sub_1800D0C60 @ 0x1800D0C60 (sub_1800D0C60.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180037510(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rax
  __int64 *v11; // rcx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // [rsp+28h] [rbp-38h]
  volatile signed __int32 *v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-20h]
  char v20; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v21; // [rsp+50h] [rbp-10h]

  v8 = sub_1800D0C78(a1);
  v9 = 1;
  sub_1800D0C60(v8, 7LL, 4LL, 1LL);
  v10 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    sub_180033E08((__int64 *)(*(_QWORD *)a2 + 112LL), &v18, *(_DWORD *)(a1 + 88));
    v11 = &v18;
    v10 = v18;
  }
  else
  {
    v21 = 0LL;
    v11 = (__int64 *)&v20;
    v9 = 2;
  }
  v16 = v10;
  v17 = (volatile signed __int32 *)v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v12 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  v14 = *(_QWORD *)(v16 + 120);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  result = sub_1800389A0(a1, v14, a3, a4);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
