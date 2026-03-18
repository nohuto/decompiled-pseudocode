/*
 * XREFs of _lambda_7073ea3a1159c22cf152f2e0fb8a80e9_::_lambda_invoker_cdecl_ @ 0x1800BD7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180178BEC (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 */

__int64 __fastcall lambda_7073ea3a1159c22cf152f2e0fb8a80e9_::_lambda_invoker_cdecl_(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  _DWORD *v7; // rdx
  __int64 result; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    if ( (a5 & 1) != 0 )
    {
      v7 = (_DWORD *)a1[1];
      if ( (_DWORD *)a1[2] == v7 )
      {
        result = std::vector<int>::_Emplace_reallocate<int>(a1, v7, &v13);
      }
      else
      {
        *v7 = a2;
        a1[1] += 4LL;
      }
    }
    if ( (a5 & 2) != 0 )
    {
      v9 = (_DWORD *)a1[4];
      if ( (_DWORD *)a1[5] == v9 )
      {
        result = std::vector<int>::_Emplace_reallocate<int>(a1 + 3, v9, &v13);
      }
      else
      {
        *v9 = a2;
        a1[4] += 4LL;
      }
    }
    if ( (a5 & 4) != 0 )
    {
      v10 = (_DWORD *)a1[7];
      if ( (_DWORD *)a1[8] == v10 )
      {
        result = std::vector<int>::_Emplace_reallocate<int>(a1 + 6, v10, &v13);
      }
      else
      {
        *v10 = a2;
        a1[7] += 4LL;
      }
    }
    if ( (a5 & 8) != 0 )
    {
      v11 = (_DWORD *)a1[10];
      if ( (_DWORD *)a1[11] == v11 )
      {
        result = std::vector<int>::_Emplace_reallocate<int>(a1 + 9, v11, &v13);
      }
      else
      {
        *v11 = a2;
        a1[10] += 4LL;
      }
    }
    if ( (a5 & 0x10) != 0 )
    {
      v12 = (_DWORD *)a1[13];
      if ( (_DWORD *)a1[14] == v12 )
      {
        return std::vector<int>::_Emplace_reallocate<int>(a1 + 12, v12, &v13);
      }
      else
      {
        *v12 = a2;
        a1[13] += 4LL;
      }
    }
  }
  return result;
}
