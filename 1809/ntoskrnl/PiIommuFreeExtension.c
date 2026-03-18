/*
 * XREFs of PiIommuFreeExtension @ 0x140763A00
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x1406F92C4 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140750558 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
