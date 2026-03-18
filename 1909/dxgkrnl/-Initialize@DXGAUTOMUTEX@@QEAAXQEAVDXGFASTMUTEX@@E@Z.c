/*
 * XREFs of ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0023ED8
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0150794 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0206F98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C0230214 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOMUTEX::Initialize(DXGAUTOMUTEX *this, struct DXGFASTMUTEX *const a2, char a3)
{
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax

  *(_QWORD *)this = a2;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v5 + 24) = 681LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)this + 16LL) == CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
      *(_QWORD *)(v7 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v7);
    }
  }
}
