/*
 * XREFs of ObCreateObject @ 0x14068E010
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     ObpCreateDirectoryObject @ 0x14068DDFC (ObpCreateDirectoryObject.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x1407837D0 (PopEtEnergyTrackerCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082C810 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140906780 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140917914 (ExpProfileCreate.c)
 *     CmpCreateRegistryRoot @ 0x140A0E368 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A1EFF8 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
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
