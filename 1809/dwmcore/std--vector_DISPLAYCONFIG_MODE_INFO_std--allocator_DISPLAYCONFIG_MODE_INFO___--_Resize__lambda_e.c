/*
 * XREFs of std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___ @ 0x18022E954
 * Callers:
 *     CalculateDisplayBlankTime @ 0x18022ED94 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x18022FFB0 (-_Change_array@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@.c)
 */

const void **__fastcall std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___(
        __int64 a1,
        unsigned __int64 a2)
{
  const void **result; // rax
  __int64 v3; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  SIZE_T v10; // rcx
  char *v11; // r14
  unsigned __int64 v12; // r8
  char *v13; // rdi
  unsigned __int64 v14; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  v6 = (v3 - *(_QWORD *)a1) >> 6;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + (a2 << 6);
    }
    else
    {
      v14 = a2 - v6;
      if ( v14 )
      {
        result = (const void **)memset_0(*(void **)(a1 + 8), 0, v14 << 6);
        v3 += v14 << 6;
      }
      *(_QWORD *)(a1 + 8) = v3;
    }
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = v9 << 6;
    if ( v9 > 0x3FFFFFFFFFFFFFFLL )
      v10 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v12 = a2 - v6;
    v13 = &v11[64 * v6];
    if ( v12 )
      memset_0(v13, 0, v12 << 6);
    memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (const void **)std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(a1, v11, a2, v9);
  }
  return result;
}
