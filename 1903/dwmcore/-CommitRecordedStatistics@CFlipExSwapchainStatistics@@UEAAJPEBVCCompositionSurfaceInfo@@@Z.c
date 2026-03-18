/*
 * XREFs of ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJPEBVCCompositionSurfaceInfo@@@Z @ 0x180022300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::CommitRecordedStatistics(
        CFlipExSwapchainStatistics *this,
        const struct CCompositionSurfaceInfo *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = *((unsigned int *)this + 3);
  v7 = *((unsigned int *)this + 2);
  v8 = *((_QWORD *)a2 + 4);
  v12 = v5;
  v9 = NtSetCompositionSurfaceBufferUsage(v8, &v12, v7, v6);
  if ( v9 < 0 )
  {
    v4 = v9 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9 | 0x10000000, 0x6Cu, 0LL);
  }
  return v4;
}
