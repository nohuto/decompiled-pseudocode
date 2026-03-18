/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00DEF5C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00DEF94 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMIsLegacyDevice @ 0x1C00F1568 (RIMIsLegacyDevice.c)
 *     RIMSearchHidTLCInfo @ 0x1C00F15C0 (RIMSearchHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _WORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v14,
    (struct _KTHREAD **)&gTLCInfoLock);
  v6 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  v9 = Win32AllocPoolZInit(0x30uLL, 0x70707352u);
  v10 = v9;
  if ( v9 )
  {
    v9[8] = a1;
    v9[9] = a2;
    v11 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v10 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v10 = v11;
    *(_QWORD *)(v11 + 8) = v10;
    v12 = qword_1C01A5F18;
    RawInputManagerObject::gHidRequestTable = v10;
    while ( (__int64 *)v12 != &qword_1C01A5F18 )
    {
      if ( *(_WORD *)(v12 + 16) == a1 )
      {
        *((_DWORD *)v10 + 8) = *(_DWORD *)(v12 + 20);
        break;
      }
      v12 = *(_QWORD *)v12;
    }
    v6 = v10;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xAu,
      (__int64)&WPP_88621c07d28f3d465a1ff7b54817319a_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v14);
  return v6;
}
