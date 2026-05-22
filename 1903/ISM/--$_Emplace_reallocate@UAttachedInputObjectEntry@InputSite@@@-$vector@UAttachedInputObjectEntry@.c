/*
 * XREFs of ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180006CE0
 * Callers:
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180006BD0 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800077C0 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800078F0 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007A20 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007B50 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007C80 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007DB0 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800081D0 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180008280 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000AE40 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DE40 (-OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r14
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  char *v18; // rdx
  char *v19; // r15
  __int64 v21; // rax
  size_t v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // r10
  _QWORD *v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // r10
  _QWORD *v31; // rcx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r13
  _QWORD *v35; // r8
  char *v36; // r13
  unsigned __int64 v37; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v37 = v11;
  v12 = 2 * v11;
  v13 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
  {
    v21 = -1LL;
    v13 = -1LL;
  }
  else
  {
    if ( v13 < 0x1000 )
    {
      if ( v13 )
        v14 = operator new(16 * v11);
      else
        v14 = 0LL;
      goto LABEL_9;
    }
    v21 = -1LL;
  }
  v22 = v13 + 39;
  if ( v13 + 39 >= v13 )
    goto LABEL_20;
  while ( 1 )
  {
    v22 = v21;
LABEL_20:
    v23 = operator new(v22);
    if ( v23 )
      break;
    v21 = _o__invalid_parameter_noinfo_noreturn(v24);
  }
  v14 = (_QWORD *)(((unsigned __int64)v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v14 - 1) = v23;
LABEL_9:
  v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)((char *)v14 + v15) = *a3;
  v16 = (_QWORD *)((char *)v14 + v15 + 8);
  v17 = a3 + 1;
  *v16 = 0LL;
  if ( v16 != a3 + 1 )
  {
    *v16 = *v17;
    *v17 = 0LL;
  }
  v18 = (char *)a1[1];
  if ( a2 == v18 )
  {
    if ( (char *)*a1 != v18 )
    {
      try
      {
        v27 = v14 + 1;
        v25 = *a1 - (_QWORD)v14;
        do
        {
          *(v27 - 1) = *(_QWORD *)((char *)v27 + v25 - 8);
          *v27 = 0LL;
          v26 = (_QWORD *)((char *)v27 + v25);
          if ( v27 != (_QWORD *)((char *)v27 + v25) )
          {
            *v27 = *v26;
            *v26 = 0LL;
          }
          v27 += 2;
        }
        while ( (char *)v27 + v25 - 8 != v18 );
      }
      catch ( ... )
      {
        std::vector<InputSite::AttachedInputObjectEntry>::_Destroy(v25, (char *)v14 + v15, (char *)v14 + v15 + 16);
        std::_Deallocate<16,0>(v14, 16 * v37);
        throw;
      }
    }
  }
  else
  {
    if ( (char *)*a1 != a2 )
    {
      v28 = v14 + 1;
      v29 = *a1 - (_QWORD)v14;
      do
      {
        *(v28 - 1) = *(_QWORD *)((char *)v28 + v29 - 8);
        *v28 = 0LL;
        v30 = (_QWORD *)((char *)v28 + v29);
        if ( v28 != (_QWORD *)((char *)v28 + v29) )
        {
          *v28 = *v30;
          *v30 = 0LL;
        }
        v28 += 2;
      }
      while ( (char *)v28 + v29 - 8 != a2 );
      v18 = (char *)a1[1];
    }
    if ( a2 != v18 )
    {
      v31 = (_QWORD *)((char *)v14 + v15 + 24);
      v32 = a2 - (char *)v14 - v15;
      v33 = v32 - 16;
      v34 = v32 - 24;
      do
      {
        *(v31 - 1) = *(_QWORD *)((char *)v31 + v34);
        *v31 = 0LL;
        v35 = (_QWORD *)((char *)v31 + v33);
        if ( v31 != (_QWORD *)((char *)v31 + v33) )
        {
          *v31 = *v35;
          *v35 = 0LL;
        }
        v31 += 2;
      }
      while ( (char *)v31 + v34 != v18 );
    }
  }
  v19 = (char *)*a1;
  if ( *a1 )
  {
    v36 = (char *)a1[1];
    if ( v19 != v36 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v19 + 1);
        v19 += 16;
      }
      while ( v19 != v36 );
      v19 = (char *)*a1;
    }
    std::_Deallocate<16,0>(v19, (a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = v14;
  a1[1] = &v14[2 * v8];
  a1[2] = &v14[v12];
  return v15 + *a1;
}
