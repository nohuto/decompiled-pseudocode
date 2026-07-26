/*
 * XREFs of ?NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z @ 0x1C00BF320
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDSetupBufferFromMemoryHandle(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v6; // eax
  __int64 v7; // rcx

  if ( (*(_BYTE *)(BugCheckParameter4 + 54) & 1) != 0
    || (v6 = *(_DWORD *)(BugCheckParameter3 + 24), a3 >= v6)
    || a4 > v6 - a3 )
  {
    ndisBugCheckEx(0x23uLL, 7uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_QWORD *)(BugCheckParameter4 + 32) = a3 + *(_QWORD *)(BugCheckParameter3 + 40);
  v7 = a3 + *(_QWORD *)(BugCheckParameter3 + 32);
  *(_DWORD *)(BugCheckParameter4 + 48) = a4;
  *(_QWORD *)(BugCheckParameter4 + 40) = v7;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  *(_DWORD *)(BugCheckParameter4 + 60) = 0;
}
