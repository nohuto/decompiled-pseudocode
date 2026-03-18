/*
 * XREFs of ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404
 * Callers:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017688 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0024098 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00C8C80 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01160D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0120A60 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01446B4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0148A80 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0246E74 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C00429DC (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0247258 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C0247550 (-DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *a2, PERESOURCE **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGHWQUEUE *v15; // rcx
  struct DXGHWQUEUE **v16; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v6 + 24) = 431LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 104)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 432LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 433LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v14 + 24) = 436LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 185LL) )
    DXGCONTEXT::DestroyHwQueueOnHost(this, a2);
  DXGHWQUEUE::DestroyCoreState(a2, a3);
  v15 = *(struct DXGHWQUEUE **)a2;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v16 = (struct DXGHWQUEUE **)*((_QWORD *)a2 + 1), *v16 != a2) )
  {
    __fastfail(3u);
  }
  *v16 = v15;
  *((_QWORD *)v15 + 1) = v16;
  DXGHWQUEUE::`scalar deleting destructor'(a2);
}
