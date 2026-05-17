/*
 * XREFs of LdrpProcessWork @ 0x180070CEC
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x180070C60 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180071558 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 *     LdrpReportError @ 0x180077170 (LdrpReportError.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  char v8; // bl

  result = *(_QWORD *)(a1 + 40);
  if ( *(int *)result < 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    result = LdrpSnapModule(a1);
    v5 = result;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v5 = LdrpMapDllRetry(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
        v6 = LdrpMapDllFullPath(a1);
      else
        v6 = LdrpMapDllSearchPath(a1);
      v5 = v6;
    }
    result = v5 + 0x80000000;
    if ( (int)result < 0 || v5 == -1073741267 )
      goto LABEL_21;
    result = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1846,
        (unsigned int)"LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        v5);
      result = (unsigned int)LdrpDebugFlags;
    }
    if ( (result & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      LdrpLogLoadFailureEtwEvent(
        a1,
        (*(_DWORD *)(a1 + 48) + 72) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        -1073741515,
        (unsigned int)&LoadFailure,
        0);
      result = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(result + 104) & 0x20) != 0 )
        result = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)result = v5;
  }
LABEL_21:
  if ( !a2 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v7 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v8 = 1, v7 != 1) )
      v8 = 0;
    result = RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( v8 )
      return ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return result;
}
