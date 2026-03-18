/*
 * XREFs of IopLogBlockedDriverEvent @ 0x140853A34
 * Callers:
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140154688 (RtlStringCchCopyNW.c)
 *     IoWriteErrorLogEntry @ 0x140177870 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1402980A8 (IoAllocateGenericErrorLogEntry.c)
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
