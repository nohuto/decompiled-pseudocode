/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180007230
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180007660 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800476D8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v4 = (void *)*((_QWORD *)this + 167);
  if ( v4 )
    RmpObjectRelease(v4);
  v5 = *((_QWORD *)this + 168);
  if ( v5 )
    TpReleaseTimer(v5);
  v6 = (__int64 **)((char *)this + 1312);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v9 = (__int64 *)v7[1];
    v10 = *v7;
    *v9 = *v7;
    *(_QWORD *)(v10 + 8) = v9;
    operator delete(v7);
  }
  *((_QWORD *)this + 166) = 0LL;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 40);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
