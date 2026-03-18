/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C00059F8 (InputUnInitialize.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0050190 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0052240 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     rimDeviceResetApc @ 0x1C0092A20 (rimDeviceResetApc.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C01256D8 (rimDoVirtRimDevChange.c)
 *     RIMVirtProcessHidRawInput @ 0x1C0128AE0 (RIMVirtProcessHidRawInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C012FEAC (RIMApplyPTPConfigRemedy.c)
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C014FE10 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     <none>
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2, unsigned int a3)
{
  int v3; // ebx

  v3 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( (int)IsEnterEditionCritSupported() >= 0 )
      v3 = EnterEditionCrit(a3);
    *((_DWORD *)this + 1) = v3;
  }
  return this;
}
