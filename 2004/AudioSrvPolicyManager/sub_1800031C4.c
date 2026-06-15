/*
 * XREFs of sub_1800031C4 @ 0x1800031C4
 * Callers:
 *     sub_18003AF81 @ 0x18003AF81 (sub_18003AF81.c)
 * Callees:
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800031C4(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  char *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h]

  result = qword_18004FCE8();
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( a1 )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v10 )
    {
      v8 = &v9;
      v3 = v8;
      v4 = (char *)v8[8];
      if ( v4 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3[4] + 8LL))(v3[4]);
        sub_18000210C(v4, v3[9], (const char *)L"std::exception: %hs", v5);
      }
      v6 = *((_DWORD *)v3 + 20);
      v7 = -2147024322;
      if ( v6 >= 0 )
        v6 = v7;
      *((_DWORD *)v3 + 20) = v6;
      return v11;
    }
    catch ( ... )
    {
      return v11;
    }
  }
  return result;
}
