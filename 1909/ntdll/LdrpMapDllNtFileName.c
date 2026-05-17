/*
 * XREFs of LdrpMapDllNtFileName @ 0x18002D3B4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18002E4A8 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800709A8 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpCheckForRetryLoading @ 0x18002D594 (LdrpCheckForRetryLoading.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x1800833C0 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x18008C170 (LdrpSetModuleSigningLevel.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenFile @ 0x18009D4F0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x18009FAA0 (NtRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CC040 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CF550 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 v5; // r12
  ULONG v6; // eax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  int i; // esi
  NTSTATUS v11; // eax
  int v12; // r9d
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // r8d
  int v19; // r9d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h]
  _QWORD v26[2]; // [rsp+58h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  char v29; // [rsp+100h] [rbp+67h] BYREF
  UNICODE_STRING *v30; // [rsp+108h] [rbp+6Fh]
  char v31; // [rsp+110h] [rbp+77h] BYREF
  char v32; // [rsp+118h] [rbp+7Fh] BYREF

  v30 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  v25 = *(_QWORD *)(a1 + 168);
  if ( !(unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
  {
    v5 = v3 + 72;
    LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = a2;
    v6 = 64;
    if ( !LdrpUseImpersonatedDeviceMap )
      v6 = 2112;
    ObjectAttributes.Attributes = v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(2112LL) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v8 = 2147353476LL;
    v9 = 2147353477LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = (unsigned int)RtlGetCurrentServiceSessionId(v8)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v19) = -1;
        LOBYTE(v18) = -1;
        LdrpLogEtwEvent(5253, -1, v18, v19, 0LL, 0LL);
      }
    }
    for ( i = 0; ; i = 1 )
    {
      v11 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v13 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v13 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 )
        break;
      if ( i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        return (unsigned int)v13;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( LdrpAuditIntegrityContinuity )
    {
      v13 = LdrpValidateIntegrityContinuity(a1, FileHandle);
      if ( v13 < 0 )
      {
        if ( LdrpEnforceIntegrityContinuity )
          goto LABEL_21;
      }
    }
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) != 0 && (NtCurrentPeb()->BitField & 0x10) == 0 )
    {
      LOBYTE(v12) = 8;
      v13 = LdrpSetModuleSigningLevel((_DWORD)FileHandle, *(_QWORD *)(a1 + 56), (unsigned int)&v31, v12, (__int64)&v29);
      if ( v13 < 0 )
        goto LABEL_21;
    }
    v14 = NtCreateSection(&Handle, 13LL, 0LL);
    v13 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740702 || (unsigned int)(v14 + 1073740674) <= 1 )
      {
        v13 = LdrAppxHandleIntegrityFailure((unsigned int)v14);
      }
      else if ( v14 != -1073741801 && v14 != -1073741670 && v14 != -1073741523 )
      {
        v26[0] = v5;
        v26[1] = v14;
        if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v26, 1, &v32) >= 0 && LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
      }
      LdrpLogError((unsigned int)v13, 5253LL, 0LL, v5);
      goto LABEL_21;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v16) )
        v9 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
      {
        LOBYTE(v22) = -1;
        LOBYTE(v21) = -1;
        LdrpLogEtwEvent(5254, -1, v21, v22, 0LL, 0LL);
      }
    }
    if ( !UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
        goto LABEL_19;
      v13 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
                                                                  LdrpSaferIsDllAllowedRoutine,
                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              FileHandle,
              v30);
      if ( v13 == -1073741275 )
        v13 = 0;
    }
    if ( v13 < 0 )
    {
LABEL_20:
      NtClose(Handle);
LABEL_21:
      NtClose(FileHandle);
      return (unsigned int)v13;
    }
LABEL_19:
    v13 = LdrpMapDllWithSectionHandle(a1);
    if ( v25 && v13 >= 0 )
    {
      *(_QWORD *)(a1 + 176) = FileHandle;
      *(_QWORD *)(a1 + 24) = Handle;
      return (unsigned int)v13;
    }
    goto LABEL_20;
  }
  return 3221226029LL;
}
