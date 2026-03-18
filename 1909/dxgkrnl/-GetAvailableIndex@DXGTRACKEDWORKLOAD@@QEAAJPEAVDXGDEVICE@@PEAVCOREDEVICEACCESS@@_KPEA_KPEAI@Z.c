/*
 * XREFs of ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAI@Z @ 0x1C0297720
 * Callers:
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0298360 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 * Callees:
 *     ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x1C02977C0 (-GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02978FC (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetAvailableIndex(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  DXGTRACKEDWORKLOAD *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r10
  struct COREDEVICEACCESS *v11; // r11
  int IndexHelper; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax

  LODWORD(v9) = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
  if ( (int)v9 < 0 )
  {
    LODWORD(v9) = DXGTRACKEDWORKLOAD::ProcessActiveInstances(v8, a2, v11, v10, a5);
    if ( (int)v9 >= 0 )
    {
      IndexHelper = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
      v9 = IndexHelper;
      if ( IndexHelper < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
        v16[3] = this;
        v16[4] = v9;
        v16[5] = 966LL;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  return (unsigned int)v9;
}
