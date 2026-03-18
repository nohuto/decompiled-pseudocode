/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C0090924
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00521C8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0052208 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMIsLegacyDevice @ 0x1C0090990 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9, (struct _KTHREAD **)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( (unsigned int)RIMIsLegacyDevice(*((unsigned __int16 *)i + 8), *((unsigned __int16 *)i + 9)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9);
  return i;
}
