/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14067912C
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x1400F2A34 (PspWow64SetupUserProcessAddressSpace.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     PspWritePebAffinityInfo @ 0x14066DFD0 (PspWritePebAffinityInfo.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406795CC (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     PspCopyAndFixupParameters @ 0x140679DE4 (PspCopyAndFixupParameters.c)
 *     PspLocateInPEManifest @ 0x14068C3A8 (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x1406CE490 (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4)
{
  _BYTE *v5; // r15
  unsigned int *v6; // rbp
  int v9; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  int inited; // ebx
  ULONG_PTR v16; // rdx
  __int64 result; // rax
  unsigned int ProcessNtdllType; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  _BYTE v21[24]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = *(unsigned int **)(a4 + 208);
  v9 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = v6 + 8;
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = v21;
    result = PspGetStandardHandleList(a1, v21);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v6[2];
  v13 = v12 & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
  {
    v12 |= 0x8000u;
    v6[2] = v12;
  }
  if ( !v6[259] )
    v6[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1040) )
    v6[2] = v12 | 0x20000000;
  KiStackAttachProcess(a2, 0LL, a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest(a2, a4), inited >= 0) )
  {
    v16 = *v6 + *((_QWORD *)v6 + 126);
    RegionSize = v16;
    if ( !v13 )
    {
      if ( v16 < 0x20000 )
        v16 = 0x20000LL;
      RegionSize = v16;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    inited = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 216), 0LL, &RegionSize, 0x3000u, 4u);
    if ( inited >= 0 )
    {
      inited = PspCopyAndFixupParameters(a1, v5, a4);
      if ( inited >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          inited = PspPrepareSystemDllInitBlock(0LL, a4);
        if ( inited >= 0 )
        {
          inited = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( inited >= 0 )
          {
            if ( a2[1].ActiveProcessors.Bitmap[7] )
            {
              ProcessNtdllType = PsWow64GetProcessNtdllType(a2);
              inited = PspPrepareSystemDllInitBlock(ProcessNtdllType, a4);
            }
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)a2);
              inited = MmMapApiSetView(a2);
              if ( inited >= 0 )
                inited = PspMapSiloSharedDataView(a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0LL);
  return (unsigned int)inited;
}
