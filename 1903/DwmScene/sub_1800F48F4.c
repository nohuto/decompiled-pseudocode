/*
 * XREFs of sub_1800F48F4 @ 0x1800F48F4
 * Callers:
 *     sub_1800F3A90 @ 0x1800F3A90 (sub_1800F3A90.c)
 * Callees:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_1800F3BB4 @ 0x1800F3BB4 (sub_1800F3BB4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F48F4(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 136);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 120);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  sub_180026554((__int64 ***)(a1 + 88), &v11, **(__int64 ***)(a1 + 88), *(__int64 **)(a1 + 88));
  j_j__o_free(*(_QWORD *)(a1 + 88));
  result = sub_1800F3BB4((__int64 *)(a1 + 56));
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = (*(_QWORD *)(a1 + 48) - v5) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x1800F4A5CLL);
      }
      v5 = v7;
    }
    result = j_j__o_free(v5);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 24);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return result;
}
