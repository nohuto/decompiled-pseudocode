/*
 * XREFs of LdrpLogDllState @ 0x180026314
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     LdrpAllocatePlaceHolder @ 0x180026CE4 (LdrpAllocatePlaceHolder.c)
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     ApiSetQueryApiSetPresence @ 0x180028AE0 (ApiSetQueryApiSetPresence.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     LdrpCorProcessImports @ 0x180087A14 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  _DWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = (unsigned int *)NtCurrentPeb();
  v7 = (_DWORD *)*((_QWORD *)result + 18);
  if ( v7 && *v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    v8 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v9 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (unsigned int *)LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
