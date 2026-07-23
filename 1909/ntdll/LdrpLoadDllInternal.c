/*
 * XREFs of LdrpLoadDllInternal @ 0x180022378
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpBuildForwarderLink @ 0x1800222E4 (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x1800225E4 (LdrpFastpthReloadedDll.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpPinModule @ 0x18002EB1C (LdrpPinModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180064FC4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x180065134 (LdrpHandleReplacedModule.c)
 *     LdrpCondenseGraph @ 0x18006C8A4 (LdrpCondenseGraph.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
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
  PVOID v14; // rax
  int v15; // eax
  int v16; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
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
    if ( BaseAddress )
    {
      v14 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v14;
      if ( BaseAddress != v14 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress + 19));
      if ( *v10 >= 0 )
      {
        v15 = LdrpPrepareModuleForExecution(BaseAddress, v10);
        *v10 = v15;
        if ( v15 >= 0 )
        {
          v16 = LdrpBuildForwarderLink(a6, (__int64)BaseAddress);
          *v10 = v16;
          if ( v16 >= 0 && !LdrInitState )
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
      result = LdrpDropLastInProgressCount();
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
             (__int64)"Status: 0x%08lx\n",
             *v10);
  return result;
}
