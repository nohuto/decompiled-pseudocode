/*
 * XREFs of ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18008C4F4
 * Callers:
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CC97C (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802925D8, 2u, CurrentDisplaySet, 0xB2Bu);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v9, &v10);
    v3 = v10;
    if ( PrimaryDisplay >= 0 && IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)v10 + 75)) )
      *(_DWORD *)a2 = CCommonRegistryData::m_parallelModePolicy;
  }
  if ( v9 )
    CDisplaySet::Release(v9);
  if ( v3 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v3 + 8LL))(v3);
  return v6;
}
