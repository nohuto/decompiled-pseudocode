/*
 * XREFs of LdrpInitializeNode @ 0x180069AA4
 * Callers:
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A0180 (ZwSetInformationVirtualMemory.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rbx
  char v8; // r13
  char v9; // al
  __int64 v11; // [rsp+48h] [rbp-F0h]
  __int64 v12; // [rsp+70h] [rbp-C8h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-88h] BYREF
  int v15; // [rsp+B8h] [rbp-80h]
  _BYTE v16[56]; // [rsp+C0h] [rbp-78h] BYREF
  int VmInformation; // [rsp+158h] [rbp+20h] BYREF

  v1 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = LdrpImageEntry;
  v3 = (__int64 **)qword_1801653F8;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_1801653F0 )
        __fastfail(3u);
      *v4 = (__int64)&qword_1801653F0;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_1801653F8 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      VmInformation = 1;
      VirtualAddresses.VirtualAddress = *(PVOID *)(v7 + 48);
      VirtualAddresses.NumberOfBytes = 4096LL;
      ZwSetInformationVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        VmImageHotPatchInformation,
        1uLL,
        &VirtualAddresses,
        &VmInformation,
        4u);
      v12 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v11 = *(_QWORD *)(v7 + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          976,
          (unsigned int)"LdrpInitializeNode",
          2,
          (__int64)"Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v7 + 56),
          v7 + 72);
      v8 = 1;
      v14 = 72LL;
      v15 = 1;
      memset(v16, 0, sizeof(v16));
      RtlActivateActivationContextUnsafeFast((__int64)&v14, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        LdrpCallTlsInitializers(1, i - 160);
      if ( v11 )
        v8 = LdrpCallInitRoutine(v11, *(_QWORD *)(v7 + 48), 1);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      v9 = LdrpDebugFlags;
      LdrpCurrentDllInitializer = v12;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v8 )
      {
        if ( (v9 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1028,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v11,
            v7 + 72);
          v9 = LdrpDebugFlags;
        }
        if ( (v9 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = LdrpImageEntry;
    }
  }
  *(_DWORD *)(v1 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
