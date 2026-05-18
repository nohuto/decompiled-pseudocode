/*
 * XREFs of sub_180103CFC @ 0x180103CFC
 * Callers:
 *     sub_180103E20 @ 0x180103E20 (sub_180103E20.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180103CFC(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  v2 = a1[14];
  if ( v2 )
  {
    v3 = (a1[16] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180103DBCLL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[14] = 0LL;
    a1[15] = 0LL;
    a1[16] = 0LL;
  }
  v7 = (volatile signed __int32 *)a1[13];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return sub_18008E18C(a1);
}
