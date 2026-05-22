/*
 * XREFs of ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022670
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800164BC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800227D8 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002283C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180022888 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x1800229BC (--0AlpcPort@@AEAA@_N@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800D3F68 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800D4510 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800D6CAC (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::CreateServerPort(__int64 a1, __int64 a2, __int64 a3, AlpcPort **a4)
{
  AlpcPort *v5; // rax
  int v6; // edx
  AlpcPort *v7; // rbx
  signed int v8; // edi
  wil::details::in1diag0 *v9; // rcx
  int Port; // eax
  int v11; // edx
  PSECURITY_DESCRIPTOR v12; // rcx
  signed int LastError; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v16[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h]
  _BYTE v18[192]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  v5 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v7 = AlpcPort::AlpcPort(v5, 0);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v6);
    return 2147942414LL;
  }
  v8 = SipcPort::InitializeSectionState(v7, 0);
  if ( v8 < 0 )
    goto LABEL_19;
  AlpcPortString::AlpcPortString(v18, &xmmword_180181898, 1LL);
  SecurityDescriptor = 0LL;
  v16[0] = *(_OWORD *)&AlpcPort::ServerObjectAttributes.Length;
  v16[1] = (unsigned __int64)v18;
  v17 = unk_1801FA020;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;WD)(A;;0x001F0001;;;AC)(A;;0x001F0001;;;SY)(A;;0x00020001;;;BA)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v9);
LABEL_15:
    v8 = LastError;
    goto LABEL_17;
  }
  *(_QWORD *)&v17 = SecurityDescriptor;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)v7 + 56,
    0LL);
  Port = NtAlpcCreatePort((char *)v7 + 56, v16, &AlpcPort::ServerPortAlpcAttributes);
  if ( Port < 0 )
  {
    LastError = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)Port, v11);
    goto LABEL_15;
  }
  if ( ((*((_QWORD *)v7 + 7) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = Port | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(Port | 0x90000000), v11);
LABEL_17:
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
LABEL_19:
    AlpcPort::`scalar deleting destructor'(v7, 1u);
    return (unsigned int)v8;
  }
  v12 = SecurityDescriptor;
  *a4 = v7;
  if ( v12 )
    LocalFree(v12);
  return 0LL;
}
