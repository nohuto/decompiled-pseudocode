/*
 * XREFs of ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x180057F98
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800582A8 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18001473C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBatchOptimizer::AppendEntryToLayer(
        CBatchOptimizer *this,
        int a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx

  v6 = a2;
  v9 = *a5;
  v10 = 520LL * *((int *)this + v6 + 12);
  if ( !*a5 )
    goto LABEL_2;
  if ( *(_DWORD *)((char *)this + v10 + 100) )
  {
    *a5 = 0LL;
    v15 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v9;
LABEL_17:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    goto LABEL_2;
  }
  if ( *(_QWORD *)((char *)this + v10 + 112) )
    goto LABEL_2;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 72LL))(*a5) & 0x10000) != 0 )
  {
    v14 = *a5;
    *a5 = 0LL;
    v15 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v14;
    goto LABEL_17;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_3;
  if ( !*((_DWORD *)this + 130 * *((int *)this + v6 + 11) + 26) )
    *((_BYTE *)this + 4240) = 1;
LABEL_2:
  if ( !(_DWORD)v6 || *(_DWORD *)((char *)this + v10 + 100) != 20 )
  {
LABEL_3:
    if ( *(_DWORD *)((char *)this + v10 + 96) != 20 )
      goto LABEL_4;
  }
  CBatchOptimizer::ContinueLayer(this, v6);
LABEL_4:
  v11 = (char *)this + 520 * *((int *)this + v6 + 12);
  v12 = *((unsigned int *)v11 + 24);
  *((_DWORD *)v11 + 24) = v12 + 1;
  result = *a4;
  *a4 = 0LL;
  *(_QWORD *)&v11[8 * v12 + 120] = result;
  if ( (_DWORD)v6 )
  {
    result = 2LL * *((unsigned int *)v11 + 25);
    *(_OWORD *)&v11[16 * *((unsigned int *)v11 + 25) + 280] = *a3;
  }
  ++*((_DWORD *)v11 + 25);
  return result;
}
