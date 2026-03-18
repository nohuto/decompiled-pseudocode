/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x1800CA470
 * Callers:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18006495C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1800CA3A0 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EAFA0 (-ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z.c)
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z @ 0x1800EB174 (-UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z.c)
 *     ?UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800EB21C (-UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GetCurrentFrameId(void)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((_QWORD *)g_pComposition + 48);
  return result;
}
