/*
 * XREFs of NdisAllocateMdl @ 0x1C0033410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PMDL __stdcall NdisAllocateMdl(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, UINT Length)
{
  PMDL result; // rax
  struct _MDL *v4; // rbx

  result = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  v4 = result;
  if ( result )
  {
    MmBuildMdlForNonPagedPool(result);
    result = v4;
    v4->Next = 0LL;
  }
  return result;
}
