/*
 * XREFs of sub_1800F4A04 @ 0x1800F4A04
 * Callers:
 *     sub_1800F3BA0 @ 0x1800F3BA0 (sub_1800F3BA0.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     sub_1800F3CC4 @ 0x1800F3CC4 (sub_1800F3CC4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F4A04(__int64 a1)
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
  sub_180026664((__int64 ***)(a1 + 88), &v11, **(__int64 ***)(a1 + 88), *(__int64 **)(a1 + 88));
  j_j__o_free(*(_QWORD *)(a1 + 88));
  result = sub_1800F3CC4((__int64 *)(a1 + 56));
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
        JUMPOUT(0x1800F4B6CLL);
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
