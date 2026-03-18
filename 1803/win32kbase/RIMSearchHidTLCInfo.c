/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C00F15C0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00DEF5C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00DEF94 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMIsLegacyDevice @ 0x1C00F1568 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v8; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, (struct _KTHREAD **)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( (unsigned int)RIMIsLegacyDevice(*((unsigned __int16 *)i + 8), *((unsigned __int16 *)i + 9)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_9;
  }
  i = 0LL;
LABEL_9:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
  return i;
}
