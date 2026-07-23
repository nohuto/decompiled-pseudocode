/*
 * XREFs of sub_18001B678 @ 0x18001B678
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     LdrFindEntryForAddress @ 0x180054D40 (LdrFindEntryForAddress.c)
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     LdrDisableThreadCalloutsForDll @ 0x180076F20 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByName @ 0x180077240 (LdrGetDllHandleByName.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_1800CD828 @ 0x1800CD828 (sub_1800CD828.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CE670 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE7B0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CEC40 (LdrSetImplicitPathOptions.c)
 *     sub_1800CF288 @ 0x1800CF288 (sub_1800CF288.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18006C7D4 @ 0x18006C7D4 (sub_18006C7D4.c)
 *     sub_180070218 @ 0x180070218 (sub_180070218.c)
 *     sub_18007DDBC @ 0x18007DDBC (sub_18007DDBC.c)
 */

int __fastcall sub_18001B678(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&stru_1801660B0);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v3[1] != BaseAddress + 160 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v4 != BaseAddress + 160) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&stru_1801660B0);
        if ( *((_WORD *)BaseAddress + 55) )
          sub_18007DDBC(BaseAddress, 0LL);
        sub_180070218(BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          sub_18002E1A4(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(HeapHandle, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = sub_18006C7D4(v5);
      }
    }
  }
  return (int)v1;
}
