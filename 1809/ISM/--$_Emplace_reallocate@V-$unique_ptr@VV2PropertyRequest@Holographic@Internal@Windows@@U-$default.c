/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18011BF14
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x180111DE4 (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180111F64 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // r8
  char *v19; // rcx
  __int64 v20; // rax
  char *v21; // rax
  char *v22; // rcx
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  signed __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  signed __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rdx
  char *v31; // r8
  __int64 v32; // rax
  char *v33; // rbx
  char *v34; // r15
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  _QWORD *v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+88h] [rbp+10h]
  char *v41; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
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
  v37 = v11;
  v38 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (char *)operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_47;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = 8 * v6;
  v40 = 8 * v6;
  v19 = &v17[8 * v6];
  v39 = v19 + 8;
  try
  {
    v20 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v19 = v20;
    v41 = &v17[8 * v6];
    v21 = a1[1];
    v22 = *a1;
    v23 = 0LL;
    if ( v4 == v21 )
    {
      v24 = (unsigned __int64)(v21 - v22 + 7) >> 3;
      if ( v22 > v21 )
        v24 = 0LL;
      if ( v24 )
      {
        v25 = v17 - v22;
        do
        {
          v26 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          *(_QWORD *)&v22[v25] = v26;
          v22 += 8;
          ++v23;
        }
        while ( v23 != v24 );
      }
    }
    else
    {
      v27 = (unsigned __int64)(v4 - v22 + 7) >> 3;
      if ( v22 > v4 )
        v27 = 0LL;
      if ( v27 )
      {
        v28 = v17 - v22;
        do
        {
          v29 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          *(_QWORD *)&v22[v28] = v29;
          v22 += 8;
          ++v23;
        }
        while ( v23 != v27 );
        v21 = a1[1];
        v18 = 8 * v6;
      }
      v41 = v17;
      v30 = 0LL;
      v22 = (char *)((unsigned __int64)(v21 - v4 + 7) >> 3);
      if ( v4 > v21 )
        v22 = 0LL;
      if ( v22 )
      {
        v31 = &v17[v18 - (_QWORD)v4];
        do
        {
          v32 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)&v4[(_QWORD)v31 + 8] = v32;
          v4 += 8;
          v30 = (_QWORD *)((char *)v30 + 1);
        }
        while ( v30 != (_QWORD *)v22 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Destroy((__int64)v22, v41, v39);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v36,
      v17,
      v37);
    throw;
  }
  v33 = *a1;
  if ( *a1 )
  {
    v34 = a1[1];
    if ( v33 != v34 )
    {
      do
      {
        if ( *(_QWORD *)v33 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v33 + 8LL))(*(_QWORD *)v33, 1LL);
        v33 += 8;
      }
      while ( v33 != v34 );
      v33 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v33) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_45;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v33 - 1);
    if ( (unsigned __int64)&v33[-v16 - 8] <= 0x1F )
    {
      v33 = (char *)*((_QWORD *)v33 - 1);
LABEL_45:
      operator delete(v33, v15);
      goto LABEL_46;
    }
LABEL_47:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_46:
  *a1 = v17;
  a1[1] = &v17[8 * v8];
  a1[2] = &v17[v38];
  return (__int64)&(*a1)[v40];
}
