/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180070054
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18006FEC0 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180070260 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180031080 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18003C8AC (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800656D4 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x18006FE40 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  unsigned int v2; // edi
  const struct _TlgProvider_t *v3; // rcx
  UCHAR v4; // dl
  HANDLE ProcessHandle; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v6; // [rsp+40h] [rbp-31h] BYREF
  __int64 v7; // [rsp+48h] [rbp-29h] BYREF
  struct _GUID v8; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  struct _GUID *v11; // [rsp+98h] [rbp+27h]
  int v12; // [rsp+A0h] [rbp+2Fh]
  int v13; // [rsp+A4h] [rbp+33h]
  __int64 *v14; // [rsp+A8h] [rbp+37h]
  int v15; // [rsp+B0h] [rbp+3Fh]
  int v16; // [rsp+B4h] [rbp+43h]

  ProcessHandle = 0LL;
  if ( *((_DWORD *)this + 320) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      pDesc.Reserved = 0;
      v13 = 0;
      pDesc.Ptr = (ULONGLONG)&v7;
      v11 = (struct _GUID *)&v6;
      v7 = (__int64)this;
      pDesc.Size = 8;
      v6 = v2;
      v12 = 4;
      TlgWrite(v3, &unk_1800957AD, 0LL, 0LL, 4u, &pData);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1352) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
      }
      else if ( RmpSystemOpenProcess(&ProcessHandle, 0x1001u, v2) >= 0
             && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
      {
        if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v4, 0LL) )
        {
          if ( *((_QWORD *)this + 167) )
          {
            HampSystemQueryProcessAppSessionGuid(ProcessHandle, &v8);
            if ( hProvider > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
              {
                TlgCreateWsz(&pDesc, (LPCWSTR)(*((_QWORD *)this + 167) + 88LL));
                v13 = 0;
                v16 = 0;
                v14 = &v7;
                v11 = &v8;
                v12 = 16;
                v7 = 0x1000000LL;
                v15 = 8;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009574D, 0LL, 0LL, 5u, &pData);
              }
            }
          }
        }
      }
    }
    if ( ProcessHandle )
      CloseHandle(ProcessHandle);
  }
}
