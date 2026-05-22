/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18001FA54
 * Callers:
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001EE70 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F000 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F190 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F320 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F4B0 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F640 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F7D0 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v8; // rax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *result; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)(a3 + 16);
  v8 = v3;
  if ( (_QWORD *)(a3 + 16) != v3 )
  {
    v9 = (char *)(a3 + 24);
    do
    {
      *((_QWORD *)v9 - 3) = *v4;
      v10 = 0LL;
      if ( &v14 != v9 )
      {
        v10 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
      }
      v11 = *((_QWORD *)v9 - 2);
      *((_QWORD *)v9 - 2) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v4 += 2;
      v9 += 16;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD **)(a1 + 8);
    v8 = v3;
  }
  v12 = *(v3 - 1);
  if ( v12 )
  {
    *(v3 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v8 = *(_QWORD **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 2;
  result = a2;
  *a2 = a3;
  return result;
}
