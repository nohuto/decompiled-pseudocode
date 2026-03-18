/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C001993C
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F3C04 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(PROXYPORT *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 CurrentProcess; // rax

  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)(v3 + 16) )
  {
    MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 16));
    v3 = *(_QWORD *)this;
  }
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v3, a2);
    MmUnmapViewOfSection(CurrentProcess, v4);
    v3 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v3 + 8) )
  {
    ZwClose(*(HANDLE *)(v3 + 8));
    v3 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)v3 )
  {
    ObfDereferenceObject(*(PVOID *)v3);
    v3 = *(_QWORD *)this;
  }
  Win32FreePool(v3);
}
