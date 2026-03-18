/*
 * XREFs of ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C6954
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00DFD70 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01D82DC (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FE630 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGALLOCATION *a2,
        PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rbx
  char v6; // bl

  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 232), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)a2);
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  v6 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v6 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 11);
  if ( v6 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
}
