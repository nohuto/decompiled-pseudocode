/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140061860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x14005AD44 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x14005BFEC (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005C218 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005E2B8 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005F760 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  char IsRunning; // al
  const GUID *v8; // r9
  unsigned __int64 u32ValidFrameCount; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int8 v16; // r8
  bool v17; // zf
  int ObjectsAvailableForProcessing; // eax

  v3 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1096);
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 1096,
    (unsigned __int8)a3,
    5u,
    a2->u32ValidFrameCount,
    a2->u32BufferFlags,
    0LL);
  IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning(v3);
  CSpatialCrossProcessEndpointTraceLogger::LogGetInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 712),
    a2,
    IsRunning,
    v8);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( (_DWORD)u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 27) + 52LL), u32ValidFrameCount);
  *((_BYTE *)this + 73) = (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)v3) & 0x10) != 0;
  v10 = u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this - 118) + 12LL);
  (*(void (__fastcall **)(__int64, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v11,
    a3,
    (unsigned int)u32ValidFrameCount);
  if ( !(_DWORD)u32ValidFrameCount )
    goto LABEL_12;
  if ( !CSpatialCrossProcessBaseEndpoint::IsRunning(v3) )
  {
    v17 = *((_DWORD *)this + 20) == 2;
    *((_DWORD *)this + 20) = v17;
    if ( v17 )
    {
      ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                        (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)v3,
                                        (unsigned int *)this + 16,
                                        (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
      if ( ObjectsAvailableForProcessing >= 0 )
      {
        CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
          (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 712),
          "Server",
          *((_DWORD *)this + 16),
          *((_DWORD *)this + 17));
        *((_BYTE *)this + 72) = 1;
      }
    }
LABEL_12:
    AEWMILOG_DATA(v12, v3, v13, 0x17u, 0LL, u32ValidFrameCount, 0x65uLL);
    a2->u32BufferFlags = BUFFER_SILENT;
    *((_DWORD *)this + 19) = 0;
    goto LABEL_13;
  }
  *((_DWORD *)this + 20) = 2;
  a2->u32BufferFlags = BUFFER_VALID;
  v14 = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
          (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)v3,
          (unsigned int *)this + 16,
          (unsigned int *)this + 17);
  *((_DWORD *)this + 19) = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -2005139358 )
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer", 329, v14);
  }
  else
  {
    CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
      (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 712),
      "Server",
      *((_DWORD *)this + 16),
      *((_DWORD *)this + 17));
    *((_BYTE *)this + 72) = 1;
  }
LABEL_13:
  a2->pBuffer = *((_QWORD *)this - 126);
  AEWMILOG_DATA(v15, v3, v16, 6u, v10, v10, 0LL);
}
