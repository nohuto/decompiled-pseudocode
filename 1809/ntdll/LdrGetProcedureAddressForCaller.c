/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x1800094D0
 * Callers:
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x180070B10 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC18 (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x1800830B0 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D8BF0 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DBB54 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DC9E8 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18002B1F4 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180035F48 (RtlValidateUserCallTarget.c)
 *     LdrpReportError @ 0x180077180 (LdrpReportError.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  __int64 v6; // rsi
  bool v7; // zf
  PANSI_STRING v8; // rbx
  int v10; // r15d
  size_t Length; // rsi
  unsigned int v12; // edi
  char *Heap; // r12
  _QWORD *v15; // r13
  __int64 locked; // rax
  _QWORD *v17; // rdi
  NTSTATUS v18; // edi
  int v19; // ebx
  char v20; // al
  unsigned __int64 Root; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG v25; // r14d
  __int64 v26; // rcx
  PVOID *v27; // rbx
  unsigned __int64 v28; // rbx
  char *v29; // rax
  unsigned __int64 v30; // rbx
  PVOID *v31; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+30h] [rbp-D0h]
  char v33[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h]
  ULONG v36; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h]
  char v38[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID *v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  char v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v42; // [rsp+68h] [rbp-98h]
  char v43; // [rsp+70h] [rbp-90h] BYREF
  ULONG Flagsa; // [rsp+170h] [rbp+70h]

  v6 = 0LL;
  v7 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v8 = ProcedureName;
  v42 = ProcedureAddress;
  v36 = ProcedureNumber;
  v10 = 9;
  v39 = Callback;
  v34 = 0LL;
  v32 = 0;
  if ( v7 || (v37 = 6, LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread) )
    v37 = 9;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v12 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1) || (Heap = ProcedureName->Buffer, Heap[Length]) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = &v43;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return -1073741670;
        v32 = 1;
      }
      memmove(Heap, v8->Buffer, Length);
      v6 = 0LL;
      Heap[v12 - 1] = 0;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    Heap = 0LL;
  }
  LOBYTE(ProcedureName) = 1;
  v15 = 0LL;
  locked = LdrpObtainLockedEnclave(DllHandle, ProcedureName);
  v17 = (_QWORD *)locked;
  if ( locked )
  {
    v19 = *(_DWORD *)(locked + 60);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(locked + 16));
    if ( v19 == 2 )
    {
      v15 = v17;
      v18 = 0;
    }
    else
    {
      LdrpDereferenceEnclave(v17);
      v18 = -1073741515;
    }
  }
  else
  {
    v18 = -1073741515;
  }
  if ( v18 < 0 )
  {
    v10 = v35;
    while ( 1 )
    {
      if ( DllHandle )
      {
        if ( DllHandle == (PVOID)LdrpSystemDllBase )
        {
          v6 = LdrpNtDllDataTableEntry;
          v10 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
          v35 = v10;
        }
        else
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
            Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
          while ( Root )
          {
            v22 = *(_QWORD *)(Root - 152);
            if ( (unsigned __int64)DllHandle < v22 )
            {
              v23 = *(_QWORD *)Root;
            }
            else
            {
              if ( (unsigned __int64)DllHandle <= v22 )
              {
                v24 = *(_QWORD *)(Root - 48);
                v6 = Root - 200;
                if ( *(_DWORD *)(v24 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v24 - 56LL) & 0x20) == 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
                  v24 = *(_QWORD *)(v6 + 152);
                }
                v10 = *(_DWORD *)(v24 + 56);
                v35 = v10;
                break;
              }
              v23 = *(_QWORD *)(Root + 8);
            }
            if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v23 )
              Root ^= v23;
            else
              Root = v23;
          }
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        }
      }
      v18 = -1073741515;
      if ( !v6 )
        break;
      v18 = 0;
      v10 = v35;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v35 >= v37 )
        break;
      LdrpDereferenceModule((PVOID)v6);
      if ( v35 < 0 )
      {
        v18 = -1073741811;
        v6 = 0LL;
        goto LABEL_74;
      }
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount();
      v6 = 0LL;
    }
    v20 = 1;
  }
  else
  {
    v6 = v15[13];
    v20 = 3;
  }
  if ( !v6 )
  {
LABEL_74:
    v25 = v36;
    goto LABEL_75;
  }
  v25 = v36;
  v18 = LdrpResolveProcedureAddress((_QWORD *)v6, Heap, v36, v20, (unsigned __int64 *)&v34);
  if ( v18 >= 0 )
  {
    if ( v10 == 7
      && !Flagsa
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v26 = *(_QWORD *)(v6 + 152);
      v33[0] = 0;
      v18 = LdrpInitializeGraphRecurse(v26, 0LL, v33);
    }
    if ( v18 >= 0 )
    {
      if ( !v15 )
      {
        v27 = v39;
        if ( AvrfpAPILookupCallbacksEnabled )
          AVrfCallAPILookupCallback((_DWORD)v39, *(_QWORD *)(v6 + 48), (_DWORD)v34, 0, (__int64)&v34);
        if ( g_ShimsEnabled )
        {
          v31 = v27;
          v28 = (unsigned __int64)v34;
          v40 = 0LL;
          ((void (__fastcall *)(unsigned __int64 *, __int64, char *, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v40,
            v6,
            v34,
            0LL,
            v31);
          if ( v40 )
            v28 = v40;
          v34 = (char *)v28;
        }
      }
    }
    else
    {
      v34 = 0LL;
    }
  }
  if ( v18 == -1073741515 || v18 == -1073741502 )
    v18 = -1073741702;
  if ( v15 )
  {
    LdrpDereferenceEnclave(v15);
LABEL_75:
    if ( v15 && v18 >= 0 )
      v34 += *(_QWORD *)(v6 + 184) - *(_QWORD *)(v6 + 48);
    goto LABEL_78;
  }
  LdrpDereferenceModule((PVOID)v6);
LABEL_78:
  if ( v18 == -1073741702 )
  {
    v29 = (char *)v25;
    v18 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v29 = Heap;
    Heap = v29;
    LdrpReportError(0LL, v29, (unsigned int)v18);
  }
  if ( v32 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !UseWOW64 && v18 >= 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v30 = (unsigned __int64)v34;
      if ( (unsigned int)RtlValidateUserCallTarget(v34, v38) != 1 && (v38[0] & 0x10) != 0 )
      {
        v18 = RtlGuardGrantSuppressedCallAccess(v30, 4LL, v41);
        if ( v18 < 0 )
          __fastfail(0x2Eu);
      }
    }
  }
  *v42 = v34;
  return v18;
}
