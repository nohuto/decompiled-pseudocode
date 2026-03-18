/*
 * XREFs of IopLogBlockedDriverEvent @ 0x140854334
 * Callers:
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140153FE8 (RtlStringCchCopyNW.c)
 *     IoWriteErrorLogEntry @ 0x140177180 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140298348 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall IopLogBlockedDriverEvent(__int64 a1, __int64 a2, int a3)
{
  _WORD *GenericErrorLogEntry; // rax
  void *v6; // rbx

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(176);
  v6 = GenericErrorLogEntry;
  if ( GenericErrorLogEntry )
  {
    *(_DWORD *)(GenericErrorLogEntry + 1) = 0x10000;
    *((_DWORD *)GenericErrorLogEntry + 3) = -1073740764;
    GenericErrorLogEntry[3] = 48;
    *((_DWORD *)GenericErrorLogEntry + 5) = a3;
    RtlStringCchCopyNW(GenericErrorLogEntry + 24, 0x40uLL, *(STRSAFE_PCNZWCH *)(a1 + 8), 0x3FuLL);
    IoWriteErrorLogEntry(v6);
  }
}
