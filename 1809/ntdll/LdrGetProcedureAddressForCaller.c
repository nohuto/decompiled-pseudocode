/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x1800094D0
 * Callers:
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x180070B10 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x1800830A0 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
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
 *     LdrpReportError @ 0x180077170 (LdrpReportError.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // rsi
  bool v7; // zf
  const void **v8; // rbx
  int v10; // r15d
  size_t v11; // rsi
  unsigned int v12; // edi
  char *Heap; // r12
  __int64 v15; // r13
  __int64 locked; // rax
  __int64 v17; // rdi
  int v18; // edi
  int v19; // ebx
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  char *v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+30h] [rbp-D0h]
  char v33[7]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h]
  int v36; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h]
  char v38[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  char v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-98h]
  char v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+170h] [rbp+70h]

  v6 = 0LL;
  v7 = (a5 & 1) == 0;
  v44 = a5 & 1;
  v8 = a2;
  v42 = a4;
  v36 = a3;
  v10 = 9;
  v39 = a6;
  v34 = 0LL;
  v32 = 0;
  if ( v7 || (v37 = 6, (void *)qword_18015F4D0 != NtCurrentTeb()->ClientId.UniqueThread) )
    v37 = 9;
  if ( a2 )
  {
    v11 = *(unsigned __int16 *)a2;
    v12 = v11 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v11 + 1) || (Heap = (char *)a2[1], Heap[v11]) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = &v43;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v12);
        if ( !Heap )
          return 3221225626LL;
        v32 = 1;
      }
      memmove(Heap, v8[1], v11);
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
  LOBYTE(a2) = 1;
  v15 = 0LL;
  locked = LdrpObtainLockedEnclave(a1, a2);
  v17 = locked;
  if ( locked )
  {
    v19 = *(_DWORD *)(locked + 60);
    RtlLeaveCriticalSection(locked + 16);
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
      if ( a1 )
      {
        if ( a1 == LdrpSystemDllBase )
        {
          v6 = LdrpNtDllDataTableEntry;
          v10 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
          v35 = v10;
        }
        else
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          v21 = LdrpModuleBaseAddressIndex;
          if ( (qword_1801662C0 & 1) != 0 && LdrpModuleBaseAddressIndex )
            v21 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
          while ( v21 )
          {
            v22 = *(_QWORD *)(v21 - 152);
            if ( a1 < v22 )
            {
              v23 = *(_QWORD *)v21;
            }
            else
            {
              if ( a1 <= v22 )
              {
                v24 = *(_QWORD *)(v21 - 48);
                v6 = v21 - 200;
                if ( *(_DWORD *)(v24 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v24 - 56LL) & 0x20) == 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
                  v24 = *(_QWORD *)(v6 + 152);
                }
                v10 = *(_DWORD *)(v24 + 56);
                v35 = v10;
                break;
              }
              v23 = *(_QWORD *)(v21 + 8);
            }
            if ( (qword_1801662C0 & 1) != 0 && v23 )
              v21 ^= v23;
            else
              v21 = v23;
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
      LdrpDereferenceModule(v6);
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
    v6 = *(_QWORD *)(v15 + 104);
    v20 = 3;
  }
  if ( !v6 )
  {
LABEL_74:
    v25 = v36;
    goto LABEL_75;
  }
  v25 = v36;
  v18 = LdrpResolveProcedureAddress(v6, Heap, v36, v20, &v34);
  if ( v18 >= 0 )
  {
    if ( v10 == 7
      && !v44
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && (void *)qword_18015F4D0 != NtCurrentTeb()->ClientId.UniqueThread )
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
          AVrfCallAPILookupCallback(v39, *(_QWORD *)(v6 + 48), v34, 0, (__int64)&v34);
        if ( g_ShimsEnabled )
        {
          v31 = v27;
          v28 = v34;
          v40 = 0LL;
          ((void (__fastcall *)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v40,
            v6,
            v34,
            0LL,
            v31);
          if ( v40 )
            v28 = v40;
          v34 = v28;
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
  LdrpDereferenceModule(v6);
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( !UseWOW64 && v18 >= 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v30 = v34;
      if ( (unsigned int)RtlValidateUserCallTarget(v34, v38) != 1 && (v38[0] & 0x10) != 0 )
      {
        v18 = RtlGuardGrantSuppressedCallAccess(v30, 4LL, v41);
        if ( v18 < 0 )
          __fastfail(0x2Eu);
      }
    }
  }
  *v42 = v34;
  return (unsigned int)v18;
}
