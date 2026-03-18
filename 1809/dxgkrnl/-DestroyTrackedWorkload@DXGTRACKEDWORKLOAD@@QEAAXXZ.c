/*
 * XREFs of ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02602D4
 * Callers:
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00EF9F0 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0260160 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C026092C (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(DXGDEVICE **this)
{
  __int64 v2; // rax
  DXGDEVICE *v3; // rcx
  DXGDEVICE *v4; // rcx

  if ( *((_BYTE *)this + 72) )
  {
    if ( this[4] )
    {
      v2 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v2 + 24) = 742LL;
      WdLogEvent5_WdAssertion(v2);
    }
    DXGDEVICE::RemoveTrackedWorkloadFromList(this[2], (struct DXGTRACKEDWORKLOAD *)this);
    v3 = this[6];
    if ( v3 )
    {
      operator delete[](v3);
      this[6] = 0LL;
    }
    v4 = this[3];
    if ( v4 )
    {
      operator delete[](v4);
      this[3] = 0LL;
    }
    *((_BYTE *)this + 72) = 0;
  }
}
