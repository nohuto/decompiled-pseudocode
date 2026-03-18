/*
 * XREFs of ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEAI@Z @ 0x1C02604B4
 * Callers:
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0260E80 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 * Callees:
 *     ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x1C0260544 (-GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z @ 0x1C0260664 (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetAvailableIndex(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4,
        unsigned int *a5)
{
  DXGTRACKEDWORKLOAD *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r10
  struct COREDEVICEACCESS *v10; // r11
  int IndexHelper; // eax
  __int64 v12; // rcx
  __int64 v13; // rax

  LODWORD(v8) = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a5);
  if ( (int)v8 < 0 )
  {
    LODWORD(v8) = DXGTRACKEDWORKLOAD::ProcessActiveInstances(v7, a2, v10, v9);
    if ( (int)v8 >= 0 )
    {
      IndexHelper = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a5);
      v8 = IndexHelper;
      if ( IndexHelper < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = v8;
        WdLogEvent5_WdError(v13);
      }
    }
  }
  return (unsigned int)v8;
}
