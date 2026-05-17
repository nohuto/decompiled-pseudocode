/*
 * XREFs of LdrpDereferenceModule @ 0x18001B678
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x180021908 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800225E4 (LdrpFastpthReloadedDll.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     LdrpUnloadNode @ 0x18002ECFC (LdrpUnloadNode.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     LdrFindEntryForAddress @ 0x180054DE0 (LdrFindEntryForAddress.c)
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800773A0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByName @ 0x1800776C0 (LdrGetDllHandleByName.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CD8E8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CE730 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE870 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CED00 (LdrSetImplicitPathOptions.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800CF348 (LdrpHandleUnprotectedDelayLoad.c)
 *     AVrfCallAPILookupCallback @ 0x1800D8A90 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpDestroyNode @ 0x18006CA24 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180070468 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007E45C (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || (v4 = *(_QWORD **)(a1 + 168), *v4 != a1 + 160) )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        if ( (unsigned __int64)(*(_QWORD *)(a1 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext();
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v6 == v5 )
          return LdrpDestroyNode(v5);
      }
    }
  }
  return result;
}
