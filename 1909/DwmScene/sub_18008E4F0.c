/*
 * XREFs of sub_18008E4F0 @ 0x18008E4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FEB0 @ 0x18000FEB0 (sub_18000FEB0.c)
 *     sub_1800F0DA0 @ 0x1800F0DA0 (sub_1800F0DA0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008E4F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800F0DA0(a1, &v11);
  v9 = 0LL;
  v10 = 0LL;
  sub_18000FEB0(&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(v5 + 124) = *(_BYTE *)(a1 + 124);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 112);
  result = *(unsigned int *)(a1 + 108);
  *(_DWORD *)(v5 + 108) = result;
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      v7 = v10;
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
