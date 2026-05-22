/*
 * XREFs of ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18001FB20
 * Callers:
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001EE70 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F000 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F190 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F320 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F4B0 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F640 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F7D0 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  unsigned __int64 v18; // r13
  char *v19; // rcx
  _QWORD *v20; // rdx
  char *v21; // rdx
  char *v22; // rax
  char *v23; // r8
  char *v24; // rdx
  __int64 v25; // r9
  char *v26; // rbx
  char *v27; // r15
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-48h]
  char *v32; // [rsp+78h] [rbp+10h]
  unsigned __int64 v33; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
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
  v31 = 16 * v11;
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
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
  v18 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v19 = &v17[v18];
  try
  {
    *(_QWORD *)v19 = *a3;
    v20 = a3 + 1;
    *((_QWORD *)v19 + 1) = 0LL;
    if ( v19 + 8 != (char *)(a3 + 1) )
    {
      *((_QWORD *)v19 + 1) = *v20;
      *v20 = 0LL;
    }
    v32 = &v17[v18];
    v21 = a1[1];
    v22 = *a1;
    if ( a2 == v21 )
    {
      if ( v22 != v21 )
      {
        v19 = v22 + 8;
        v23 = (char *)(v17 - v22);
        do
        {
          *(_QWORD *)&v19[(_QWORD)v23 - 8] = *((_QWORD *)v19 - 1);
          *(_QWORD *)&v23[(_QWORD)v19] = 0LL;
          if ( &v23[(_QWORD)v19] != v19 )
          {
            *(_QWORD *)&v23[(_QWORD)v19] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != v21 );
      }
    }
    else
    {
      if ( v22 != a2 )
      {
        v19 = v22 + 8;
        v24 = (char *)(v17 - v22);
        do
        {
          *(_QWORD *)&v19[(_QWORD)v24 - 8] = *((_QWORD *)v19 - 1);
          *(_QWORD *)&v24[(_QWORD)v19] = 0LL;
          if ( &v24[(_QWORD)v19] != v19 )
          {
            *(_QWORD *)&v24[(_QWORD)v19] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != a2 );
        v21 = a1[1];
      }
      v32 = v17;
      if ( a2 != v21 )
      {
        v19 = a2 + 8;
        v25 = v17 - a2 + v18 + 16;
        do
        {
          *(_QWORD *)&v19[v17 - a2 + 8 + v18] = *((_QWORD *)v19 - 1);
          *(_QWORD *)&v19[v25] = 0LL;
          if ( &v19[v25] != v19 )
          {
            *(_QWORD *)&v19[v25] = *(_QWORD *)v19;
            *(_QWORD *)v19 = 0LL;
          }
          v19 += 16;
        }
        while ( v19 - 8 != v21 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<InputSite::AttachedInputObjectEntry>::_Destroy(v19, v32, &v17[v18 + 16]);
    std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v30, v17, v33);
    throw;
  }
  v26 = *a1;
  if ( *a1 )
  {
    v27 = a1[1];
    if ( v26 != v27 )
    {
      do
      {
        v28 = *((_QWORD *)v26 + 1);
        if ( v28 )
        {
          *((_QWORD *)v26 + 1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        v26 += 16;
      }
      while ( v26 != v27 );
      v26 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v26) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_47;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v26 - 1);
    if ( (unsigned __int64)&v26[-v16 - 8] <= 0x1F )
    {
      v26 = (char *)*((_QWORD *)v26 - 1);
LABEL_47:
      operator delete(v26, v15);
      goto LABEL_48;
    }
LABEL_49:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_48:
  *a1 = v17;
  a1[1] = &v17[16 * v8];
  a1[2] = &v17[v31];
  return (unsigned __int64)&(*a1)[v18];
}
