/*
 * XREFs of RtlFileMapFree @ 0x1400F51C4
 * Callers:
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     AslpFileGetChecksumAttributes @ 0x1408ED7A0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 */

void *__fastcall RtlFileMapFree(_QWORD *a1)
{
  void *v2; // rcx
  void *result; // rax
  void *v4; // rcx
  void *v5; // rdx

  if ( a1 )
  {
    v2 = (void *)a1[5];
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *((_BYTE *)a1 + 48) && *a1 )
      ZwClose((HANDLE)*a1);
    if ( *((_BYTE *)a1 + 49) )
    {
      v4 = (void *)a1[1];
      if ( v4 )
        ZwClose(v4);
    }
    if ( *((_BYTE *)a1 + 50) )
    {
      v5 = (void *)a1[3];
      if ( v5 )
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
    }
    return memset(a1, 0, 0x38uLL);
  }
  return result;
}
