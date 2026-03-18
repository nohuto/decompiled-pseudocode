/*
 * XREFs of PiIommuFreeExtension @ 0x14078C840
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x140716614 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140778194 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 v1; // al
  void *v3; // rcx

  v1 = *(_BYTE *)(BugCheckParameter2 + 16);
  if ( (v1 & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, v1, 0x1001uLL);
  v3 = *(void **)BugCheckParameter2;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x64706E50u);
    *(_QWORD *)BugCheckParameter2 = 0LL;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x64706E50u);
}
