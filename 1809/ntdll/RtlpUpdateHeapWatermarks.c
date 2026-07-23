/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x180088C44
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // rdx
  unsigned int v3; // eax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(a1 + 640);
    v1 = *(_DWORD *)(a1 + 648);
    if ( *(_DWORD *)(a1 + 640) > v1 )
    {
      v2 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 640) = 0;
      if ( v2 > *(_QWORD *)(a1 + 672) )
        *(_QWORD *)(a1 + 672) = v2;
      *(_QWORD *)(a1 + 680) = v2;
    }
    if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
    {
      v3 = 16;
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
        v3 = 256;
      if ( *(_DWORD *)(a1 + 644) > v3 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 648) = 2 * v1;
      *(_DWORD *)(a1 + 644) = 0;
      *(_DWORD *)(a1 + 652) = 0;
    }
  }
}
