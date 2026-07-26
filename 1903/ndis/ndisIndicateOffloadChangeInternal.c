/*
 * XREFs of ndisIndicateOffloadChangeInternal @ 0x1C0039798
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0039830 (ndisMergeOffloadCapsAndRegistry.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisIndicateOffloadChangeInternal(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 result; // rax
  size_t v6; // rdi
  unsigned __int16 v7; // ax

  result = 112LL;
  if ( a3 >= 0x70 && *a2 == 0xA7 && *((_WORD *)a2 + 1) >= 0x70u && a2[1] )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 4096) + 1LL) = 1;
    ndisMergeOffloadCapsAndRegistry();
    v6 = 216LL;
    memset((void *)(*(_QWORD *)(a1 + 4096) + 224LL), 0, 0xD8uLL);
    v7 = *((_WORD *)a2 + 1);
    if ( v7 < 0xD8u )
      v6 = v7;
    return (__int64)memmove((void *)(*(_QWORD *)(a1 + 4096) + 224LL), a2, v6);
  }
  return result;
}
