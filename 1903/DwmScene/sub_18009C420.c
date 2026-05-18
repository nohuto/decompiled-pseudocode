/*
 * XREFs of sub_18009C420 @ 0x18009C420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800128D8 @ 0x1800128D8 (sub_1800128D8.c)
 *     sub_1800F0C90 @ 0x1800F0C90 (sub_1800F0C90.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009C420(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  sub_1800F0C90(a1, &v10);
  v8 = 0LL;
  v9 = 0LL;
  sub_1800128D8(&v8, a2);
  result = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(result + 104) = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 2);
    if ( !(_DWORD)result )
    {
      v6 = v9;
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
