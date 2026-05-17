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
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     LdrpFreeReplacedModule @ 0x1800864F8 (LdrpFreeReplacedModule.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  __int64 result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v23 = 0LL;
  result = LdrpFastpthReloadedDll(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v12 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, (__int64)&v23, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        LdrpProcessWork(*(_QWORD *)(v23 + 176), v15);
      }
      else if ( v14 != -1073741267 && v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    v19 = v23;
    if ( v23 )
    {
      v20 = LdrpHandleReplacedModule();
      *a7 = v20;
      if ( v23 != v20 )
      {
        LdrpFreeReplacedModule();
        v23 = *a7;
      }
      if ( *(_QWORD *)(v23 + 176) )
        LdrpCondenseGraph(*(_QWORD *)(v23 + 152));
      if ( *v12 >= 0 )
      {
        v21 = LdrpPrepareModuleForExecution(v23, v12);
        *v12 = v21;
        if ( v21 >= 0 )
        {
          v22 = LdrpBuildForwarderLink(a6, v23);
          *v12 = v22;
          if ( v22 >= 0 && !LdrInitState )
            LdrpPinModule(v23);
        }
      }
      result = LdrpFreeLoadContextOfNode(*(_QWORD *)(v23 + 152), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx(v23, 0LL);
        result = LdrpDereferenceModule(v23);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = LdrpDropLastInProgressCount(v19, v16, v17, v18);
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v12);
  return result;
}
