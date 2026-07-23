/*
 * XREFs of sub_180107184 @ 0x180107184
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x1800A0F00 (RtlCompareMemoryUlong.c)
 */

_BOOL8 __fastcall sub_180107184(__int64 a1)
{
  int v1; // edi
  unsigned int v3; // eax
  int v4; // edi
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( *(_WORD *)a1 == 1
    && *(_WORD *)(a1 + 2) == 80
    && !*(_DWORD *)(a1 + 4)
    && RtlCompareMemoryUlong((PVOID)(a1 + 48), 0x20uLL, 0) == 32
    && !*(_DWORD *)(a1 + 8)
    && (unsigned int)(v1 - 1) <= 0xE
    && (v1 & 2) == 0
    && *(_DWORD *)(a1 + 16) == -1
    && RtlCompareMemoryUlong((PVOID)(a1 + 32), 0x10uLL, 0) == 16 )
  {
    v3 = v1 & 0xFFFFFFF3;
    if ( !*(_QWORD *)(a1 + 24) || !v3 )
    {
      v4 = v1 & 0xC;
      if ( v4 != 8 && (v4 == 0 || v3 == 0) )
        return 1;
    }
  }
  return result;
}
