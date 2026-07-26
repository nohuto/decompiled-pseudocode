/*
 * XREFs of ?NdisQueryBufferSafe@@YAXPEAU_MDL@@PEAPEAXPEAIW4_MM_PAGE_PRIORITY@@@Z @ 0x1C00911B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisQueryBufferSafe(struct _MDL *a1, void **a2, unsigned int *a3, enum _MM_PAGE_PRIORITY a4)
{
  PVOID MappedSystemVa; // rax

  if ( a2 )
  {
    if ( (a1->MdlFlags & 5) != 0 )
      MappedSystemVa = a1->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(a1, 0, MmCached, 0LL, 0, a4 | 0x40000000u);
    *a2 = MappedSystemVa;
  }
  *a3 = a1->ByteCount;
}
