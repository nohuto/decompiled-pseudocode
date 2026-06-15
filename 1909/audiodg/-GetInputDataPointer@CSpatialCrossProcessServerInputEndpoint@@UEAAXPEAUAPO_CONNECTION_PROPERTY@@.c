/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058DB4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x140059F2C (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A158 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C268 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D6E0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  char IsRunning; // al
  const GUID *v8; // r9
  UINT32 u32ValidFrameCount; // ebp
  __int16 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int ObjectsAvailableForProcessing; // eax
  bool v15; // zf
  int v16; // eax

  v3 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1064);
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((__int64)this, (__int64)a2, (__int64)v3, 5, a2->u32ValidFrameCount, a2->u32BufferFlags, 0);
  IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning(v3);
  CSpatialCrossProcessEndpointTraceLogger::LogGetInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 664),
    a2,
    IsRunning,
    v8);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 21) + 52LL), u32ValidFrameCount);
  *((_BYTE *)this + 73) = (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)v3) & 0x10) != 0;
  v10 = u32ValidFrameCount * *(_WORD *)(*((_QWORD *)this - 111) + 12LL);
  (*(void (__fastcall **)(__int64, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v11,
    a3,
    u32ValidFrameCount);
  if ( u32ValidFrameCount )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(v3) )
    {
      *((_DWORD *)this + 20) = 2;
      a2->u32BufferFlags = BUFFER_VALID;
      ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                        (const struct ControlData **)v3,
                                        (unsigned int *)this + 16,
                                        (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
      if ( ObjectsAvailableForProcessing < 0 )
      {
        if ( ObjectsAvailableForProcessing != -2005139358 )
          SpatialCPTraceLoggingErrorHelper(
            "CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer",
            330,
            ObjectsAvailableForProcessing);
      }
      else
      {
        CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
          (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 664),
          "Server",
          *((_DWORD *)this + 16),
          *((_DWORD *)this + 17));
        *((_BYTE *)this + 72) = 1;
      }
      goto LABEL_17;
    }
    v15 = *((_DWORD *)this + 20) == 2;
    *((_DWORD *)this + 20) = v15;
    if ( v15 )
    {
      v16 = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
              (const struct ControlData **)v3,
              (unsigned int *)this + 16,
              (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = v16;
      if ( v16 >= 0 )
      {
        CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
          (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 664),
          "Server",
          *((_DWORD *)this + 16),
          *((_DWORD *)this + 17));
        *((_BYTE *)this + 72) = 1;
      }
    }
  }
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v13, v12, (__int64)v3, 23, 0, u32ValidFrameCount, 101);
  a2->u32BufferFlags = BUFFER_SILENT;
  *((_DWORD *)this + 19) = 0;
LABEL_17:
  a2->pBuffer = *((_QWORD *)this - 119);
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v13, v12, (__int64)v3, 6, v10, v10, 0);
}
