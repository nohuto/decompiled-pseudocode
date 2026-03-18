/*
 * XREFs of std::_Invoker_functor::_Call__lambda_7073ea3a1159c22cf152f2e0fb8a80e9__&_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_ @ 0x1800EBB78
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7073ea3a1159c22cf152f2e0fb8a80e9__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EBCB0 (std--_Func_impl_no_alloc__lambda_7073ea3a1159c22cf152f2e0fb8a80e9__void_void___unsi_ea_1800EBCB0.c)
 * Callees:
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18017747C (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 */

_DWORD *std::_Invoker_functor::_Call__lambda_7073ea3a1159c22cf152f2e0fb8a80e9____void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___(
        __int64 a1,
        _QWORD *a2,
        int *a3,
        ...)
{
  _DWORD *result; // rax
  int v4; // edi
  int v5; // esi
  _QWORD *v6; // rbx
  _DWORD *v7; // rdx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 v14; // [rsp+50h] [rbp+28h]
  _DWORD *v15; // [rsp+58h] [rbp+30h]
  va_list va1; // [rsp+60h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _DWORD *);
  result = v15;
  v4 = *a3;
  LODWORD(v12) = *a3;
  v5 = *v15;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v6 = (_QWORD *)*a2;
    if ( (v5 & 1) != 0 )
    {
      v7 = (_DWORD *)v6[1];
      if ( (_DWORD *)v6[2] == v7 )
      {
        result = (_DWORD *)std::vector<int>::_Emplace_reallocate<int>(v6, v7, (__int64 *)va);
      }
      else
      {
        *v7 = v4;
        v6[1] += 4LL;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v8 = (_DWORD *)v6[4];
      if ( (_DWORD *)v6[5] == v8 )
      {
        result = (_DWORD *)std::vector<int>::_Emplace_reallocate<int>(v6 + 3, v8, (__int64 *)va);
      }
      else
      {
        *v8 = v4;
        v6[4] += 4LL;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v9 = (_DWORD *)v6[7];
      if ( (_DWORD *)v6[8] == v9 )
      {
        result = (_DWORD *)std::vector<int>::_Emplace_reallocate<int>(v6 + 6, v9, (__int64 *)va);
      }
      else
      {
        *v9 = v4;
        v6[7] += 4LL;
      }
    }
    if ( (v5 & 8) != 0 )
    {
      v10 = (_DWORD *)v6[10];
      if ( (_DWORD *)v6[11] == v10 )
      {
        result = (_DWORD *)std::vector<int>::_Emplace_reallocate<int>(v6 + 9, v10, (__int64 *)va);
      }
      else
      {
        *v10 = v4;
        v6[10] += 4LL;
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v11 = (_DWORD *)v6[13];
      if ( (_DWORD *)v6[14] == v11 )
      {
        return (_DWORD *)std::vector<int>::_Emplace_reallocate<int>(v6 + 12, v11, (__int64 *)va);
      }
      else
      {
        *v11 = v4;
        v6[13] += 4LL;
      }
    }
  }
  return result;
}
