/*
 * XREFs of ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800B5ABC
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800AE6AC (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Emplace_reallocate<Microsoft::WRL::Wrappers::HString>(
        HSTRING **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // r13
  char *v19; // rcx
  char *v20; // rdx
  char *v21; // rcx
  signed __int64 v22; // r8
  signed __int64 v23; // rdx
  HSTRING *v24; // rbx
  HSTRING *v25; // r15
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  HSTRING *v30; // [rsp+30h] [rbp-38h]
  HSTRING *v31; // [rsp+78h] [rbp+10h]
  __int64 v32; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - (char *)*a1) >> 3;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v28 = v7 + 1;
  v9 = a1[2] - *a1;
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
  v32 = v11;
  v29 = 8 * v11;
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
      goto LABEL_39;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = v6;
  v19 = &v17[8 * v6];
  v30 = (HSTRING *)(v19 + 8);
  try
  {
    *(_QWORD *)v19 = *a3;
    *a3 = 0LL;
    v31 = (HSTRING *)&v17[8 * v6];
    v20 = (char *)a1[1];
    v21 = (char *)*a1;
    if ( v4 == v20 )
    {
      if ( v21 != v20 )
      {
        v22 = v17 - v21;
        do
        {
          *(_QWORD *)&v21[v22] = *(_QWORD *)v21;
          *(_QWORD *)v21 = 0LL;
          v21 += 8;
        }
        while ( v21 != v20 );
      }
    }
    else
    {
      if ( v21 != v4 )
      {
        v23 = v17 - v21;
        do
        {
          *(_QWORD *)&v21[v23] = *(_QWORD *)v21;
          *(_QWORD *)v21 = 0LL;
          v21 += 8;
        }
        while ( v21 != v4 );
        v20 = (char *)a1[1];
      }
      v31 = (HSTRING *)v17;
      if ( v4 != v20 )
      {
        v21 = &v17[v18 * 8 - (_QWORD)v4];
        do
        {
          *(_QWORD *)&v4[(_QWORD)v21 + 8] = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          v4 += 8;
        }
        while ( v4 != v20 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::Wrappers::HString>::_Destroy((__int64)v21, v31, v30);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v27,
      v17,
      v32);
    throw;
  }
  v24 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    if ( v24 != v25 )
    {
      do
      {
        WindowsDeleteString(*v24);
        *v24++ = 0LL;
      }
      while ( v24 != v25 );
      v24 = *a1;
    }
    v15 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v24) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_37;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = (__int64)*(v24 - 1);
    if ( (unsigned __int64)v24 - v16 - 8 <= 0x1F )
    {
      v24 = (HSTRING *)*(v24 - 1);
LABEL_37:
      operator delete(v24, v15);
      goto LABEL_38;
    }
LABEL_39:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_38:
  *a1 = (HSTRING *)v17;
  a1[1] = (HSTRING *)&v17[8 * v28];
  a1[2] = (HSTRING *)&v17[v29];
  return (__int64)&(*a1)[v18];
}
