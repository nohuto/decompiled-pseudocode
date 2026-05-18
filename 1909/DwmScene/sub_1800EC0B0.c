/*
 * XREFs of sub_1800EC0B0 @ 0x1800EC0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_1800160E0 @ 0x1800160E0 (sub_1800160E0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EC0B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+30h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  result = (__int64)sub_1800160E0(*a2, &v8);
  v4 = v8;
  if ( !v8 )
    goto LABEL_7;
  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(result + 8);
  if ( *(_QWORD *)(result + 16) == v5 )
  {
    result = sub_18000FC30(*(char ***)(a1 + 8), (char *)v5, &v8);
LABEL_7:
    v6 = v9;
    goto LABEL_8;
  }
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  v6 = v9;
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 2);
    v6 = v9;
    v4 = v8;
  }
  *(_QWORD *)v5 = v4;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(result + 8) += 16LL;
LABEL_8:
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v7 = v9;
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
