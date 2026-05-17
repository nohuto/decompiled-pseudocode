/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18001AEC0
 * Callers:
 *     CsrClientConnectToServer @ 0x18004BC20 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x1800699A0 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x18007EBB0 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6C30 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800D9A64 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DA8F4 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800552BC (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x1800557FC (RtlValidateUserCallTarget.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800D8A90 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  const void **v6; // rbx
  bool v7; // zf
  int v9; // r15d
  size_t v10; // rsi
  unsigned int v11; // edi
  char *Heap; // r14
  __int64 v13; // r12
  __int64 locked; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // edi
  int v20; // eax
  unsigned int v21; // r13d
  __int64 v22; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-E0h]
  char v29; // [rsp+30h] [rbp-D0h]
  char v30[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+44h] [rbp-BCh]
  int v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+4Ch] [rbp-B4h]
  char v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  char v39[8]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-90h]
  char v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+180h] [rbp+80h]

  v31 = 0LL;
  v6 = a2;
  v7 = (a5 & 1) == 0;
  v42 = a5 & 1;
  v9 = 9;
  v40 = a4;
  v35 = a3;
  v37 = a6;
  v29 = 0;
  if ( v7 || (v34 = 6, !(unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock)) )
    v34 = 9;
  if ( v6 )
  {
    v10 = *(unsigned __int16 *)v6;
    v11 = v10 + 1;
    if ( *((unsigned __int16 *)v6 + 1) < (unsigned int)(v10 + 1) || (Heap = (char *)v6[1], Heap[v10]) )
    {
      if ( v11 <= 0x80 )
      {
        Heap = &v41;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v11);
        if ( !Heap )
          return 3221225626LL;
        v29 = 1;
      }
      memmove(Heap, v6[1], v10);
      Heap[(unsigned int)v10] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  LOBYTE(a2) = 1;
  v33 = 1;
  v13 = 0LL;
  locked = LdrpObtainLockedEnclave(a1, a2);
  v15 = locked;
  if ( !locked )
    goto LABEL_7;
  if ( *(_DWORD *)(locked + 56) != 16 || *(_DWORD *)(locked + 64) != 2 )
  {
    RtlLeaveCriticalSection(locked + 16);
    LdrpDereferenceEnclave(v15);
LABEL_7:
    v9 = v32;
    while ( 1 )
    {
      v16 = 0LL;
      if ( !a1 )
        break;
      if ( a1 == LdrpSystemDllBase )
      {
        v16 = LdrpNtDllDataTableEntry;
        v9 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
        v32 = v9;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v17 = LdrpModuleBaseAddressIndex;
        if ( (qword_1801662E0 & 1) != 0 && LdrpModuleBaseAddressIndex )
          v17 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
        while ( v17 )
        {
          if ( a1 >= *(_QWORD *)(v17 - 152) )
          {
            if ( a1 <= *(_QWORD *)(v17 - 152) )
            {
              v16 = v17 - 200;
              v24 = *(_QWORD *)(v17 - 200 + 152);
              if ( *(_DWORD *)(v24 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v24 - 56LL) & 0x20) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v16 + 276));
                v24 = *(_QWORD *)(v16 + 152);
              }
              v9 = *(_DWORD *)(v24 + 56);
              v32 = v9;
              break;
            }
            v18 = *(_QWORD *)(v17 + 8);
          }
          else
          {
            v18 = *(_QWORD *)v17;
          }
          if ( (qword_1801662E0 & 1) != 0 && v18 )
            v17 ^= v18;
          else
            v17 = v18;
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      }
      if ( !v16 )
        break;
      v19 = 0;
      v9 = v32;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v32 >= v34 )
        goto LABEL_28;
      LdrpDereferenceModule(v16);
      if ( v32 < 0 )
      {
        v16 = 0LL;
        v19 = -1073741811;
        goto LABEL_28;
      }
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount();
    }
    v19 = -1073741515;
LABEL_28:
    v20 = v33;
    goto LABEL_29;
  }
  RtlLeaveCriticalSection(locked + 16);
  v16 = *(_QWORD *)(v15 + 112);
  v19 = 0;
  v13 = v15;
  v20 = 3;
LABEL_29:
  v21 = v35;
  if ( v16 )
  {
    v19 = LdrpResolveProcedureAddress(v16, (_DWORD)Heap, v35, v20, (__int64)&v31);
    if ( v19 >= 0 )
    {
      if ( v9 == 7
        && !v42
        && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
        && !(unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
      {
        v27 = *(_QWORD *)(v16 + 152);
        v30[0] = 0;
        v19 = LdrpInitializeGraphRecurse(v27, 0LL, v30);
      }
      if ( v19 < 0 )
      {
        v31 = 0LL;
      }
      else if ( !v13 )
      {
        v22 = v37;
        if ( AvrfpAPILookupCallbacksEnabled )
          AVrfCallAPILookupCallback(v37, *(_QWORD *)(v16 + 48), v31, 0, (__int64)&v31);
        if ( g_ShimsEnabled )
        {
          v38 = 0LL;
          v28 = v22;
          v26 = v31;
          ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v38,
            v16,
            v31,
            0LL,
            v28);
          if ( v38 )
            v26 = v38;
          v31 = v26;
        }
      }
    }
    if ( v19 == -1073741515 || v19 == -1073741502 )
      v19 = -1073741702;
    if ( v13 )
      LdrpDereferenceEnclave(v13);
    else
      LdrpDereferenceModule(v16);
  }
  if ( v13 && v19 >= 0 )
    v31 += *(_QWORD *)(v16 + 184) - *(_QWORD *)(v16 + 48);
  if ( v19 == -1073741702 )
  {
    v25 = v21;
    v19 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v25 = (unsigned __int64)Heap;
    Heap = (char *)v25;
    LdrpReportError(0LL, v25, (unsigned int)v19);
  }
  if ( v29 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( !UseWOW64
    && v19 >= 0
    && LdrControlFlowGuardEnforcedWithExportSuppression()
    && (unsigned int)RtlValidateUserCallTarget(v31, v36) != 1
    && (v36[0] & 0x10) != 0 )
  {
    v19 = RtlGuardGrantSuppressedCallAccess(v31, 4LL, v39);
    if ( v19 < 0 )
      __fastfail(0x2Eu);
  }
  *v40 = v31;
  return (unsigned int)v19;
}
