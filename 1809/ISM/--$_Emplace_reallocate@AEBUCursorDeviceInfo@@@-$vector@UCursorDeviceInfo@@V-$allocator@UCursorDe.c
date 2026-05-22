/*
 * XREFs of ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x180097E20
 * Callers:
 *     ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x180096360 (-OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x180113870 (-RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UE.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector<CursorDeviceInfo>::_Emplace_reallocate<CursorDeviceInfo const &>(
        _QWORD *a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  size_t v13; // rdx
  size_t v14; // rcx
  void *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  char *v17; // rcx
  char *v18; // rbx
  unsigned __int64 v19; // r14
  char *v20; // r8
  char *v21; // rdx
  char *v22; // rcx
  size_t v23; // r8
  __int64 v24; // rcx
  char *v25; // rcx
  char *v26; // r8
  __int64 v28; // [rsp+68h] [rbp+10h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v28 = v11;
  v12 = 16 * v11;
  v13 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
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
    v19 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)&v18[v19] = *a3;
    v20 = (char *)a1[1];
    v21 = (char *)*a1;
    v22 = v18;
    if ( a2 == v20 )
    {
      v23 = v20 - v21;
    }
    else
    {
      memmove_0(v18, v21, (size_t)&a2[-*a1]);
      v22 = &v18[v19 + 16];
      v23 = a1[1] - (_QWORD)a2;
      v21 = a2;
    }
    memmove_0(v22, v21, v23);
  }
  catch ( ... )
  {
    std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v24, v18, v28);
    throw;
  }
  v25 = (char *)*a1;
  if ( *a1 )
  {
    v16 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v16 < 0x1000 )
    {
LABEL_24:
      operator delete(v25, v16);
      goto LABEL_25;
    }
    v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
    v26 = (char *)*((_QWORD *)v25 - 1);
    v17 = (char *)(v25 - v26);
    if ( (unsigned __int64)(v17 - 8) <= 0x1F )
    {
      v25 = v26;
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_25:
  *a1 = v18;
  a1[1] = &v18[16 * v8];
  a1[2] = &v18[v12];
  return v19 + *a1;
}
