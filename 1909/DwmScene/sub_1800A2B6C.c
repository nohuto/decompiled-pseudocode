/*
 * XREFs of sub_1800A2B6C @ 0x1800A2B6C
 * Callers:
 *     sub_1800A17D8 @ 0x1800A17D8 (sub_1800A17D8.c)
 *     sub_1800A5BF0 @ 0x1800A5BF0 (sub_1800A5BF0.c)
 *     sub_1800A5C70 @ 0x1800A5C70 (sub_1800A5C70.c)
 *     sub_1800A5DDC @ 0x1800A5DDC (sub_1800A5DDC.c)
 *     sub_1800A60DC @ 0x1800A60DC (sub_1800A60DC.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A2B6C(__int64 *a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = (volatile signed __int32 *)a1[5];
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x1800A2C12LL);
      }
      v5 = v7;
    }
    result = j_j__o_free(v5);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
