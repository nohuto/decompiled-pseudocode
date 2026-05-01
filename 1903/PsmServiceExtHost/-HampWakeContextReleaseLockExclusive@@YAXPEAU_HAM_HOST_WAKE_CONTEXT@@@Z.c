/*
 * XREFs of ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013644
 * Callers:
 *     ?HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180012600 (-HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800135F4 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180039FB0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003E7A0 (-HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B7EC (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B838 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampWakeContextReleaseLockExclusive(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  _QWORD *Value; // rax

  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)Value & 0x800LL) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[12]-- == 1LL )
      *Value &= ~0x800uLL;
  }
  *((_DWORD *)a1 + 12) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 40);
}
