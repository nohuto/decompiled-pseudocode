/*
 * XREFs of ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18002E284
 * Callers:
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180096C58 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180042CD8 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(
        CPartitionVerticalBlankScheduler *this,
        enum ParallelModePolicy *a2)
{
  struct CDisplay *v3; // rbx
  int CurrentDisplaySet; // eax
  unsigned int v5; // ecx
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802C0180, 2u, CurrentDisplaySet, 0xB27u, 0LL);
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
