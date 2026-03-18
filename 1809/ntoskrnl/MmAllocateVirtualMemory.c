/*
 * XREFs of MmAllocateVirtualMemory @ 0x140675BC0
 * Callers:
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     NtAllocateVirtualMemoryEx @ 0x140675B60 (NtAllocateVirtualMemoryEx.c)
 *     WbAllocateMemoryBlock @ 0x14068FD80 (WbAllocateMemoryBlock.c)
 * Callees:
 *     MiAllocateVirtualMemoryCommon @ 0x140675D10 (MiAllocateVirtualMemoryCommon.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140675EB8 (MiCaptureAllocateMapExtendedParameters.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        int a1,
        unsigned __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        volatile void *Address,
        int a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 *v13; // rbx
  __int64 v15; // rcx
  int MapExtendedParameters; // ecx
  __int64 v18; // [rsp+68h] [rbp-60h] BYREF
  __int64 v19; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v20[64]; // [rsp+80h] [rbp-48h] BYREF

  v13 = (__int64 *)a2;
  if ( a8 )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a2 = *(_QWORD *)a2;
    v15 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  v18 = *v13;
  v19 = *a3;
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, v20);
  if ( MapExtendedParameters >= 0 )
  {
    MapExtendedParameters = MiAllocateVirtualMemoryCommon(
                              a1,
                              (unsigned int)&v18,
                              0,
                              (unsigned int)&v19,
                              a4,
                              a5,
                              (__int64)v20,
                              a8,
                              a9,
                              a10,
                              a11);
    if ( MapExtendedParameters >= 0 )
    {
      *v13 = v18;
      *a3 = v19;
    }
  }
  return (unsigned int)MapExtendedParameters;
}
