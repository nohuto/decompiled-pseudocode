/*
 * XREFs of ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x1800AE808
 * Callers:
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180073B44 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180052034 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(
        CPartitionVerticalBlankScheduler *this,
        enum ParallelModePolicy *a2)
{
  struct CDisplay *v3; // rbx
  signed int CurrentDisplaySet; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  int PrimaryDisplay; // eax
  CDisplaySet *v9; // [rsp+40h] [rbp+8h] BYREF
  struct CDisplay *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  *(_DWORD *)a2 = 1;
  v3 = 0LL;
  v10 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v9);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BE2C0, 2u, CurrentDisplaySet, 0xB27u, 0LL);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v9, &v10);
    v3 = v10;
    if ( PrimaryDisplay >= 0 && IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)v10 + 73)) )
      *(_DWORD *)a2 = CCommonRegistryData::m_parallelModePolicy;
  }
  if ( v9 )
    CDisplaySet::Release(v9);
  if ( v3 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v3 + 8LL))(v3);
  return v6;
}
