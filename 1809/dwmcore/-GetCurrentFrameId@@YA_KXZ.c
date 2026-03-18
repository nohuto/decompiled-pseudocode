/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x18009750C
 * Callers:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180097560 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GetCurrentFrameId(void)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)&g_pComposition )
    return *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL);
  return result;
}
