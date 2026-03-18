/*
 * XREFs of ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01A0FF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     zzzPostInertiaMessage @ 0x1C01FDEA4 (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaPTPTimerProc(struct tagWND *a1, __int64 a2)
{
  struct DEVICEINFO *v2; // rax
  struct CPTPProcessor *Processor; // rax
  __int64 v4; // [rsp+D0h] [rbp-18h]

  LOBYTE(a2) = 19;
  v2 = (struct DEVICEINFO *)HMValidateHandleNoSecure((unsigned __int64)ghdevTouchpad, a2);
  Processor = CPTPProcessorFactory::GetProcessor(v2);
  if ( Processor )
  {
    v4 = *((_QWORD *)Processor + 48);
    EtwTraceTouchpadStopInertiaQueued();
    if ( (v4 & 1) != 0 )
      zzzPostInertiaMessage(0x23Bu, 1);
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
