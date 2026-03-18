/*
 * XREFs of ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00E0C5C
 * Callers:
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C006CE5C (RtlStringCchPrintfW.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?IsSupported@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00E0EB0 (-IsSupported@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00E0F04 (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall DispBroker::DispBrokerClient::EnsureConnected(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  NTSTATUS result; // eax
  void **v6; // rdi
  unsigned int CurrentProcessSessionId; // eax
  const wchar_t *v8; // r8
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DispBroker::DispBrokerClientHandle *PoolWithTag; // rbx
  __int64 v13; // r8
  HANDLE v14; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v16[3]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v19[10]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[56]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t SourceString[56]; // [rsp+170h] [rbp+70h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(DispBroker::DispBrokerClient::s_pSessionLock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( DispBroker::DispBrokerClient::IsValid((DispBroker::DispBrokerClient *)this) )
    return 0;
  v6 = this + 2;
  DispBroker::DispBrokerClientReference::Assign(this + 2, 0LL);
  if ( !DispBroker::DispBrokerClient::IsSupported((DispBroker::DispBrokerClient *)this) )
    return -1073741637;
  memset(pszDest, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  result = RtlStringCchPrintfW(pszDest, 0x36uLL, L"\\Sessions\\%d", CurrentProcessSessionId);
  if ( result >= 0 )
  {
    v8 = L"%s\\BaseNamedObjects\\DispBrokerPort";
    if ( !*((_BYTE *)this + 8) )
      v8 = L"%s\\Windows\\DispBrokerPort";
    result = RtlStringCchPrintfW(SourceString, 0x36uLL, v8, pszDest);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      memset(v16, 0, sizeof(v16));
      LODWORD(v16[0]) = 48;
      *((_QWORD *)&v16[0] + 1) = 0LL;
      DWORD2(v16[1]) = 512;
      *(_QWORD *)&v16[1] = 0LL;
      v16[2] = 0LL;
      memset(v19, 0, 0x48uLL);
      v19[2] = 0xFFFFLL;
      LODWORD(v19[0]) = 0x100000;
      v17 = -2000000LL;
      Handle = 0LL;
      v9 = ZwAlpcConnectPort(&Handle, &DestinationString, v16, v19, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v9 < 0 || !Handle )
        return v9;
      PoolWithTag = (struct DispBroker::DispBrokerClientHandle *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x44535042u);
      if ( PoolWithTag )
      {
        v14 = Handle;
        *(_DWORD *)PoolWithTag = 1;
        *((_QWORD *)PoolWithTag + 1) = v14;
        if ( !v14 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
      }
      else
      {
        PoolWithTag = 0LL;
      }
      DispBroker::DispBrokerClientReference::Assign(v6, PoolWithTag);
      if ( *v6 )
      {
        return v9;
      }
      else
      {
        NtClose(Handle);
        return -1073741801;
      }
    }
  }
  return result;
}
