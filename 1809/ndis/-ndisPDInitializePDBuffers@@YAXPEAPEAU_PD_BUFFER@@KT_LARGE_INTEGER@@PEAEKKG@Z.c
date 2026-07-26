/*
 * XREFs of ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1C0101770
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00FE5F0 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPDInitializePDBuffers(
        struct _PD_BUFFER **a1,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7)
{
  unsigned int i; // r11d
  __int64 v10; // rdx
  struct _PD_BUFFER *v11; // rcx

  for ( i = 0; i < a2; ++a1 )
  {
    v10 = a7 + (unsigned __int64)((a7 + a6 + 128) * i);
    v11 = (struct _PD_BUFFER *)&a4[v10];
    *(_DWORD *)&a4[v10 + 48] = a6;
    if ( a6 )
    {
      v11->Attributes = 1;
      v11->DataBufferVirtualAddress = (unsigned __int8 *)&v11[1].PDClientReserved;
      v11->DataBufferDmaLogicalAddress.QuadPart = v10 + a3.QuadPart + 128;
    }
    v11->PDClientContextSize = a7;
    if ( a7 )
      v11->PDClientContext = (char *)v11 - a7;
    *a1 = v11;
    ++i;
  }
}
