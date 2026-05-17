/*
 * XREFs of LdrpDereferenceModule @ 0x1800099F8
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     LdrFindEntryForAddress @ 0x180034C60 (LdrFindEntryForAddress.c)
 *     LdrGetDllFullName @ 0x18003F4B0 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     LdrGetDllHandleByMapping @ 0x180076EB0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007B6C0 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007BF90 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpFreeReplacedModule @ 0x1800864F8 (LdrpFreeReplacedModule.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CFE50 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CFF90 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D0430 (LdrSetImplicitPathOptions.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800D0A78 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     LdrpUnmapModule @ 0x180076B98 (LdrpUnmapModule.c)
 *     LdrpDestroyNode @ 0x180080A3C (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x1800818BC (LdrpReleaseTlsEntry.c)
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
