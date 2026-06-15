/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x18010C3A0
 * Callers:
 *     ??1?$CAutoPtrList@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x18010736C (--1-$CAutoPtrList@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ.c)
 *     ??1CMonitorManager@@QEAA@XZ @ 0x1801073BC (--1CMonitorManager@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1801095C4 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004E008 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1801095C4 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 */

void __fastcall ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::FreeNode(
      (__int64)a1,
      v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
