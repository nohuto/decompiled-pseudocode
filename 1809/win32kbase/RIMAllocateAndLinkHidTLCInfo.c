/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00521C8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0052208 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 *     RIMIsLegacyDevice @ 0x1C0090990 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v16; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v16,
    (struct _KTHREAD **)&gTLCInfoLock);
  v7 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = Win32AllocPoolZInit(0x30uLL, 0x70707352u);
  v12 = v11;
  if ( v11 )
  {
    v11[8] = a1;
    v11[9] = a2;
    v13 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v12 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v12 = v13;
    *(_QWORD *)(v13 + 8) = v12;
    v14 = qword_1C01D0C40;
    RawInputManagerObject::gHidRequestTable = v12;
    while ( (__int64 *)v14 != &qword_1C01D0C40 )
    {
      if ( *(_WORD *)(v14 + 16) == a1 )
      {
        *((_DWORD *)v12 + 8) = *(_DWORD *)(v14 + 20);
        break;
      }
      v14 = *(_QWORD *)v14;
    }
    v7 = v12;
  }
  else
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_f7aa4f214c0a3db1af512d5ff42910d7_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v16);
  return v7;
}
