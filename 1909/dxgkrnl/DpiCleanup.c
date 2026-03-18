/*
 * XREFs of DpiCleanup @ 0x1C029E194
 * Callers:
 *     DpiDriverUnload @ 0x1C029E4E0 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x1C029E500 (DpiUnInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0p @ 0x1C00356F4 (McTemplateK0p.c)
 *     DpiDxgkDdiUnload @ 0x1C0052580 (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2, const GUID *a3)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  const GUID *v12; // r8
  const GUID *v13; // r8
  _QWORD *v14; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      &EventEnterDpiDriverUnload,
      a3,
      ClientIdentificationAddress);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v8 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(v8 + 8), *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( a2 )
      DpiDxgkDdiUnload(v8, v11, v12);
    RtlFreeUnicodeString((PUNICODE_STRING)(v8 + 40));
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v14[3] = 275LL;
    v14[4] = 21LL;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventEnterDpiDriverUnload,
        v13,
        ClientIdentificationAddress);
  }
}
