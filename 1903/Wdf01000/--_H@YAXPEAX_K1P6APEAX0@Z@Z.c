/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002E8E0
 * Callers:
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C00453C4 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C005BF44 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00662D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C006ED08 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0073000 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C00772CC (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall `vector constructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void *(__fastcall *__f)(void *))
{
  do
  {
    __f(__t);
    __t += __s;
    --__n;
  }
  while ( __n );
}
