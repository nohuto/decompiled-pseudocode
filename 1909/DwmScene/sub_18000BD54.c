/*
 * XREFs of sub_18000BD54 @ 0x18000BD54
 * Callers:
 *     sub_180127858 @ 0x180127858 (sub_180127858.c)
 * Callees:
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000BD54(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  char *v4; // rbx
  int v5; // eax
  int v6; // ecx
  _QWORD *v7; // rdx
  _QWORD v8[5]; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v9; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v8[4] = -2LL;
  result = qword_180269AC0(a1);
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( a1 )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v9 )
    {
      v7 = v8;
      v3 = v7;
      v4 = (char *)v7[8];
      if ( v4 )
      {
        (*(void (**)(void))(*(_QWORD *)v3[5] + 8LL))();
        sub_18000CC6C(v4);
      }
      v5 = *((_DWORD *)v3 + 20);
      v6 = -2147024322;
      if ( v5 >= 0 )
        v5 = v6;
      *((_DWORD *)v3 + 20) = v5;
      return v10;
    }
    catch ( ... )
    {
      return v10;
    }
  }
  return result;
}
