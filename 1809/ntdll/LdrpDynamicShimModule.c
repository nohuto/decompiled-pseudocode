/*
 * XREFs of LdrpDynamicShimModule @ 0x18002AF68
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1800705F8 (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 */

__int64 __fastcall LdrpDynamicShimModule(_QWORD *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  char v5; // al
  _WORD *i; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int (__fastcall *v10)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_180162710;
  v3 = 0;
  if ( dword_180162710 && g_pShimmedModuleList )
  {
    dword_180162710 = 0;
    v3 = LdrpGetProcApphelpCheckModule(&v10);
    if ( v3 >= 0 )
    {
      for ( i = g_pShimmedModuleList; *i; i += v7 + 1 )
      {
        if ( !v10(i, 0LL, 1LL) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( i[v7] );
      }
      v8 = MEMORY[0x7FFE0330];
      v9 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(a1, v9 ^ v8);
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
    else
    {
      v5 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2957,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v5 = LdrpDebugFlags;
      }
      if ( (v5 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( g_pShimmedModuleList && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0LL;
    g_pShimmedModuleListLength = 0LL;
  }
  result = (unsigned int)v3;
  dword_180162710 = v1;
  return result;
}
