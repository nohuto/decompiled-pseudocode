/*
 * XREFs of LdrpLoadDllInternal @ 0x180026788
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x180026AA0 (LdrpBuildForwarderLink.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpFreeLoadContextOfNode @ 0x180028BA4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x180028D18 (LdrpHandleReplacedModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     LdrpCondenseGraph @ 0x180028FB0 (LdrpCondenseGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  int result; // eax
  int *v10; // rbx
  char v11; // di
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rcx
  PVOID v18; // rax
  int v19; // eax
  int v20; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = LdrpFastpthReloadedDll(a1);
  if ( result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v11 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v10 = a8;
      v12 = LdrpFindOrPrepareLoadingModule(a1, a5, (__int64)&BaseAddress, (__int64)a8);
      if ( v12 == -1073741515 )
      {
        LOBYTE(v13) = 1;
        LdrpProcessWork(*((_QWORD *)BaseAddress + 22), v13);
      }
      else if ( v12 != -1073741267 && v12 < 0 )
      {
        *a8 = v12;
      }
    }
    else
    {
      v10 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    v17 = BaseAddress;
    if ( BaseAddress )
    {
      v18 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v18;
      if ( BaseAddress != v18 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress + 19));
      if ( *v10 >= 0 )
      {
        v19 = LdrpPrepareModuleForExecution(BaseAddress, v10);
        *v10 = v19;
        if ( v19 >= 0 )
        {
          v20 = LdrpBuildForwarderLink(a6, BaseAddress);
          *v10 = v20;
          if ( v20 >= 0 && !LdrInitState )
            LdrpPinModule(BaseAddress);
        }
      }
      result = LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress + 19), v10);
      if ( *v10 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        result = LdrpDereferenceModule((char *)BaseAddress);
      }
    }
    else
    {
      *v10 = -1073741801;
    }
    if ( !v11 )
      result = LdrpDropLastInProgressCount(v17, v14, v15, v16);
  }
  else
  {
    v10 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v10);
  return result;
}
