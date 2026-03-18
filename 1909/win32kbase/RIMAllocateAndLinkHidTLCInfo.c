/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C005B68C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0158408 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0058F14 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0059610 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMSearchHidTLCInfo @ 0x1C005AFD4 (RIMSearchHidTLCInfo.c)
 *     RIMIsLegacyDevice @ 0x1C005B768 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _WORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // rax
  int v12; // edx
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  char v17; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v17,
    (struct _KTHREAD **)&gTLCInfoLock);
  v7 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = Win32AllocPoolZInit(0x30uLL, 1886417746LL);
  v13 = v11;
  if ( v11 )
  {
    v11[8] = a1;
    v11[9] = a2;
    v14 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v13 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v14 + 8) = v13;
    v15 = qword_1C02157A0;
    RawInputManagerObject::gHidRequestTable = v13;
    while ( (__int64 *)v15 != &qword_1C02157A0 )
    {
      if ( *(_WORD *)(v15 + 16) == a1 )
      {
        *((_DWORD *)v13 + 8) = *(_DWORD *)(v15 + 20);
        break;
      }
      v15 = *(_QWORD *)v15;
    }
    v7 = v13;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 10, (__int64)&WPP_b786ef741c243c25866d14a77461bb7d_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v17);
  return v7;
}
