/*
 * XREFs of LdrpLogDllState @ 0x1800255A8
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x1800253F0 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpAllocatePlaceHolder @ 0x18002AB70 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18002C944 (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x1800754B0 (ApiSetQueryApiSetPresence.c)
 *     LdrpCorProcessImports @ 0x180083A38 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (struct _PEB *)LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
