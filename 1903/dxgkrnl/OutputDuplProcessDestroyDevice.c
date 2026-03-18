/*
 * XREFs of OutputDuplProcessDestroyDevice @ 0x1C0122084
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121B54 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0230240 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0122734 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C013D588 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall OutputDuplProcessDestroyDevice(__int64 a1, void *a2)
{
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  if ( a1 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *(ADAPTER_DISPLAY **)(a1 + 2552),
      lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_,
      a2);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1, (__int64)a2);
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessDestroyDevice(RemoteOutputDuplMgr, (struct DXGDEVICE *)a2);
}
