/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180062F94
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180062F70 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180063180 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18000CDEC (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180012314 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x180058B0C (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180062EE8 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  unsigned int v2; // edi
  const struct _TlgProvider_t *v3; // rcx
  UCHAR v4; // dl
  HANDLE ProcessHandle; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v6; // [rsp+40h] [rbp-21h] BYREF
  ExecutionModel::ExternalResourceSet *v7; // [rsp+48h] [rbp-19h] BYREF
  struct _GUID v8; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF
  struct _GUID *v11; // [rsp+98h] [rbp+37h]
  int v12; // [rsp+A0h] [rbp+3Fh]
  int v13; // [rsp+A4h] [rbp+43h]

  ProcessHandle = 0LL;
  if ( *((_DWORD *)this + 350) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
    {
      pDesc.Reserved = 0;
      v13 = 0;
      pDesc.Ptr = (ULONGLONG)&v7;
      v11 = (struct _GUID *)&v6;
      v7 = this;
      pDesc.Size = 8;
      v6 = v2;
      v12 = 4;
      TlgWrite(v3, &unk_180087AA5, 0LL, 0LL, 4u, &pData);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1472) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
      }
      else if ( RmpSystemOpenProcess(&ProcessHandle, 0x1001u, v2) >= 0
             && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
      {
        if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v4, 0LL) )
        {
          if ( *((_QWORD *)this + 182) )
          {
            HampSystemQueryProcessAppSessionGuid(ProcessHandle, &v8);
            if ( dword_18009B0B0 > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
              {
                TlgCreateWsz(&pDesc, (LPCWSTR)(*((_QWORD *)this + 182) + 88LL));
                v13 = 0;
                v11 = &v8;
                v12 = 16;
                TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087A55, 0LL, 0LL, 4u, &pData);
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
