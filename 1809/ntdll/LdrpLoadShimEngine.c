/*
 * XREFs of LdrpLoadShimEngine @ 0x1800703EC
 * Callers:
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2560 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1800705F8 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x180070688 (LdrpInitializeShimDllDependencies.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  unsigned __int64 v7; // rdx
  int Dll; // ecx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // ebx
  char v13; // al
  char v14; // al
  __int64 i; // rax
  __int64 v16; // [rsp+30h] [rbp-89h]
  __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19[15]; // [rsp+60h] [rbp-59h] BYREF
  char v20; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v19);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((__int64)&DestinationString, (int)v19, 1, (__int64)&v17);
    if ( Dll < 0 )
    {
      v13 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v16) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2267,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v16);
        v13 = LdrpDebugFlags;
      }
      if ( (v13 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v17 + 104) |= 0x100u;
      LdrpPinModule(v17, v7, v9, v10);
      v11 = v17;
      if ( *(_DWORD *)(*(_QWORD *)(v17 + 152) + 56LL) == 7 )
      {
        v12 = LdrpInitializeNode(*(_QWORD *)(v17 + 152));
        if ( v12 < 0 )
        {
          v14 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v16) = v12;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2293,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v16);
            v14 = LdrpDebugFlags;
          }
          if ( (v14 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v12);
          ZwTerminateProcess(-1LL, (unsigned int)v12);
          break;
        }
        v11 = v17;
      }
      v3(*(_QWORD *)(v11 + 48));
      LdrpDereferenceModule(v17);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v20 )
    RtlReleasePath(v19[0]);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801653D0; (__int64 *)i != &qword_1801653D0; i = *(_QWORD *)i )
    {
      v17 = i;
      *(_BYTE *)(i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_1801653D0;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_1801653D0 )
      break;
    v17 = (__int64)v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
