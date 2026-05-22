/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800580D4
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180057994 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x18005849C (-_Change_array@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULe.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

__int64 __fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        _QWORD *a1,
        char *a2,
        const void *a3)
{
  char *v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // rax
  char *v19; // r15
  char *v20; // rdi
  signed __int64 v21; // rsi
  signed __int64 v22; // r15
  signed __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // [rsp+78h] [rbp+10h]

  v4 = a2;
  v6 = (__int64)&a2[-*a1] / 1600;
  v7 = (a1[1] - *a1) / 1600LL;
  if ( v7 == 0x28F5C28F5C28F5LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 1600LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x28F5C28F5C28F5LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 1600 * v11;
  if ( v11 > 0x28F5C28F5C28F5LL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    v17 = 0LL;
    if ( v12 )
    {
      v18 = (char *)operator new(v12);
      v17 = v18;
    }
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
      _o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
    }
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  try
  {
    v26 = 1600 * v6;
    memcpy_0(&v17[1600 * v6], a3, 0x640uLL);
    v19 = (char *)a1[1];
    v20 = (char *)*a1;
    if ( v4 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = v17 - v20;
        do
        {
          memcpy_0(&v20[v21], v20, 0x640uLL);
          v20 += 1600;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      if ( v20 != v4 )
      {
        v22 = v17 - v20;
        do
        {
          memcpy_0(&v20[v22], v20, 0x640uLL);
          v20 += 1600;
        }
        while ( v20 != v4 );
        v19 = (char *)a1[1];
      }
      if ( v4 != v19 )
      {
        v23 = &v17[v26 + 1600] - v4;
        do
        {
          memcpy_0(&v4[v23], v4, 0x640uLL);
          v4 += 1600;
        }
        while ( v4 != v19 );
      }
    }
    std::vector<LegacyInputInfo>::_Change_array(a1, v17, v8, v11, -2LL);
    result = v26 + *a1;
  }
  catch ( ... )
  {
    std::allocator<LegacyInputInfo>::deallocate(v24, v17, v11);
    throw;
  }
  return result;
}
