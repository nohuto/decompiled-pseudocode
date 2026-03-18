/*
 * XREFs of ObCreateObject @ 0x140681580
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x140785B30 (PopEtEnergyTrackerCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082BF10 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A1F1D8 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
