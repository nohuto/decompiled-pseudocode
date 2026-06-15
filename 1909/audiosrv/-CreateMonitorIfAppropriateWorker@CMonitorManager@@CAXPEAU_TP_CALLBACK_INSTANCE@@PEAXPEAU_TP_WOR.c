/*
 * XREFs of ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801081A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801083F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 */

void __fastcall CMonitorManager::CreateMonitorIfAppropriateWorker(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager **Context,
        PTP_WORK Work)
{
  CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(Context[1], (struct IMMDevice *)*Context);
  CreateMonitorContext::`scalar deleting destructor'((CreateMonitorContext *)Context);
}
