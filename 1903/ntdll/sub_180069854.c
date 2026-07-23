/*
 * XREFs of sub_180069854 @ 0x180069854
 * Callers:
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     ZwSetInformationVirtualMemory @ 0x18009F9D0 (ZwSetInformationVirtualMemory.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

__int64 __fastcall sub_180069854(__int64 a1)
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
  v2 = qword_180164FC8;
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
      v12 = qword_180165AC8;
      qword_180165AC8 = i - 160;
      v11 = *(_QWORD *)(v7 + 56);
      if ( (dword_18015FAB0 & 5) != 0 )
        sub_1800CE318(
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
        sub_18002507C(1, i - 160);
      if ( v11 )
        v8 = sub_180024FBC(v11, *(_QWORD *)(v7 + 48), 1);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      v9 = dword_18015FAB0;
      qword_180165AC8 = v12;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v8 )
      {
        if ( (v9 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1028,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v11,
            v7 + 72);
          v9 = dword_18015FAB0;
        }
        if ( (v9 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      sub_1800255A8(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = qword_180164FC8;
    }
  }
  *(_DWORD *)(v1 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
