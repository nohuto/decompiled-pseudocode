/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000F418
 * Callers:
 *     ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000DEF0 (-OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800B1744 (-AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJ.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1800C1870 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r13
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
  char *v18; // r15
  __int64 v19; // rcx
  char *v20; // rdx
  char *v21; // rcx
  signed __int64 v22; // r9
  signed __int64 v23; // r8
  __int64 v24; // r8
  char *v25; // rbx
  char *v26; // r15
  __int64 v27; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 *v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v30 = v7 + 1;
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
  v33 = v11;
  v31 = 8 * v11;
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
      goto LABEL_49;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = &v17[8 * v6];
  try
  {
    v19 = *a3;
    *(_QWORD *)v18 = *a3;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v32 = (__int64 *)&v17[8 * v6];
    v20 = a1[1];
    v21 = *a1;
    if ( v4 == v20 )
    {
      if ( v21 != v20 )
      {
        v22 = v17 - v21;
        do
        {
          *(_QWORD *)&v21[v22] = 0LL;
          if ( &v21[v22] != v21 )
          {
            *(_QWORD *)&v21[v22] = *(_QWORD *)v21;
            *(_QWORD *)v21 = 0LL;
          }
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
          *(_QWORD *)&v21[v23] = 0LL;
          if ( &v21[v23] != v21 )
          {
            *(_QWORD *)&v21[v23] = *(_QWORD *)v21;
            *(_QWORD *)v21 = 0LL;
          }
          v21 += 8;
        }
        while ( v21 != v4 );
        v20 = a1[1];
      }
      v32 = (__int64 *)v17;
      if ( v4 != v20 )
      {
        v24 = v17 - v4 + 8 * (v6 + 1);
        do
        {
          v21 = &v4[v24];
          *(_QWORD *)&v4[v24] = 0LL;
          if ( &v4[v24] != v4 )
          {
            *(_QWORD *)v21 = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v20 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Destroy((__int64)v21, v32, (__int64 *)v18 + 1);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v29,
      v17,
      v33);
    throw;
  }
  v25 = *a1;
  if ( *a1 )
  {
    v26 = a1[1];
    if ( v25 != v26 )
    {
      do
      {
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 )
        {
          *(_QWORD *)v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v25 += 8;
      }
      while ( v25 != v26 );
      v25 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v25) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_47;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v25 - 1);
    if ( (unsigned __int64)&v25[-v16 - 8] <= 0x1F )
    {
      v25 = (char *)*((_QWORD *)v25 - 1);
LABEL_47:
      operator delete(v25, v15);
      goto LABEL_48;
    }
LABEL_49:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_48:
  *a1 = v17;
  a1[1] = &v17[8 * v30];
  a1[2] = &v17[v31];
  return (__int64)&(*a1)[8 * v6];
}
