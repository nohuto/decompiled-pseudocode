/*
 * XREFs of ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18009FD40 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 *     ??0AlpcPort@@AEAA@XZ @ 0x18009FE48 (--0AlpcPort@@AEAA@XZ.c)
 *     ??1AlpcPort@@UEAA@XZ @ 0x18009FF0C (--1AlpcPort@@UEAA@XZ.c)
 *     ?InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800A11EC (-InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?InitializeWaitHandle@AlpcPort@@AEAAJXZ @ 0x1800A1288 (-InitializeWaitHandle@AlpcPort@@AEAAJXZ.c)
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800A132C (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::CreateServerPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4, AlpcPort **a5)
{
  AlpcPort *v5; // rax
  unsigned __int64 v6; // rdx
  AlpcPort *v7; // rdi
  signed int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag0 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  signed int LastError; // eax
  _QWORD *v15; // rsi
  char *v16; // r14
  DWORD v17; // ebx
  int Port; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PSECURITY_DESCRIPTOR v22; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-E0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor_8[2]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v25; // [rsp+40h] [rbp-C8h]
  _QWORD v26[4]; // [rsp+48h] [rbp-C0h]
  _BYTE v27[192]; // [rsp+68h] [rbp-A0h] BYREF

  *a5 = 0LL;
  v5 = (AlpcPort *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v7 = AlpcPort::AlpcPort(v5);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
    return (unsigned int)v8;
  }
  v8 = AlpcPort::InitializeSectionListEntryPool(v7, v6);
  if ( v8 < 0 )
  {
LABEL_20:
    AlpcPort::~AlpcPort(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x1D0);
    return (unsigned int)v8;
  }
  AlpcPortString::AlpcPortString(v27, &qword_18014F038, 1LL);
  SecurityDescriptor = 0LL;
  *(_OWORD *)SecurityDescriptor_8 = *(_OWORD *)&AlpcPort::ServerObjectAttributes.Length;
  v26[0] = 0LL;
  v25 = v27;
  *(_OWORD *)&v26[1] = unk_180144C90;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;WD)(A;;0x001F0001;;;AC)(A;;0x001F0001;;;SY)(A;;0x00020001;;;BA)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v11, v10, v12, v13);
LABEL_10:
    v8 = LastError;
    goto LABEL_18;
  }
  v15 = (_QWORD *)((char *)v7 + 8);
  v26[1] = SecurityDescriptor;
  v16 = (char *)*((_QWORD *)v7 + 1);
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v17 = GetLastError();
    CloseHandle(v16);
    SetLastError(v17);
  }
  *v15 = 0LL;
  Port = NtAlpcCreatePort((char *)v7 + 8, SecurityDescriptor_8, &AlpcPort::ServerRejectSectionsAlpcAttributes);
  if ( Port < 0 )
  {
    LastError = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)Port, v19, v20, v21);
    goto LABEL_10;
  }
  if ( ((*v15 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = Port | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(Port | 0x90000000));
    goto LABEL_18;
  }
  v8 = AlpcPort::InitializeWaitHandle(v7);
  if ( v8 < 0 )
  {
LABEL_18:
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
    goto LABEL_20;
  }
  v22 = SecurityDescriptor;
  *a5 = v7;
  if ( v22 )
    LocalFree(v22);
  return 0LL;
}
