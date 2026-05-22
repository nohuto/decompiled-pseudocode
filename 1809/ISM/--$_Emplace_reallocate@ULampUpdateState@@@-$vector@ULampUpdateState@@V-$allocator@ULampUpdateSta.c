/*
 * XREFs of ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18001E60C
 * Callers:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001DE08 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x18008C3A0 (-RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(_QWORD *a1, char *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  size_t v13; // rdx
  size_t v14; // rcx
  void *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  char *v17; // rcx
  char *v18; // rbx
  char *v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // r8
  __int64 v27; // [rsp+68h] [rbp+10h]

  v6 = (__int64)&a2[-*a1] >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v27 = v11;
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  if ( v13 < 0x1000 )
  {
    if ( v13 )
      v18 = (char *)operator new(v13);
    else
      v18 = 0LL;
  }
  else
  {
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
      v14 = -1LL;
    v15 = operator new(v14);
    if ( !v15 )
      goto LABEL_26;
    v18 = (char *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v18 - 1) = v15;
  }
  try
  {
    *(_QWORD *)&v18[8 * v6] = *a3;
    v19 = (char *)a1[1];
    v20 = (char *)*a1;
    v21 = v18;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v18, v20, (size_t)&a2[-*a1]);
      v21 = &v18[8 * v6 + 8];
      v22 = a1[1] - (_QWORD)a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
  }
  catch ( ... )
  {
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v23,
      v18,
      v27);
    throw;
  }
  v24 = (char *)*a1;
  if ( *a1 )
  {
    v16 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v16 < 0x1000 )
    {
LABEL_24:
      operator delete(v24, v16);
      goto LABEL_25;
    }
    v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
    v25 = (char *)*((_QWORD *)v24 - 1);
    v17 = (char *)(v24 - v25);
    if ( (unsigned __int64)(v17 - 8) <= 0x1F )
    {
      v24 = v25;
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_25:
  *a1 = v18;
  a1[1] = &v18[8 * v8];
  a1[2] = &v18[v12];
  return *a1 + 8 * v6;
}
