/*
 * XREFs of sub_1801239E0 @ 0x1801239E0
 * Callers:
 *     sub_180121F80 @ 0x180121F80 (sub_180121F80.c)
 *     sub_180123A80 @ 0x180123A80 (sub_180123A80.c)
 *     sub_180134826 @ 0x180134826 (sub_180134826.c)
 * Callees:
 *     sub_180123CC0 @ 0x180123CC0 (sub_180123CC0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801239E0(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  sub_180123CC0(a1 + 6);
  result = j_j__o_free(a1[6]);
  v3 = (volatile signed __int32 *)a1[5];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
