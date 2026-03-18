/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C011A750
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C011A704 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(PROXYPORT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax

  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)(v5 + 16) )
  {
    MmUnsecureVirtualMemory(*(HANDLE *)(v5 + 16));
    v5 = *(_QWORD *)this;
  }
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
  {
    CurrentProcess = PsGetCurrentProcess(v5, a2, a3, a4);
    MmUnmapViewOfSection(CurrentProcess, v6);
    v5 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    ZwClose(*(HANDLE *)(v5 + 8));
    v5 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)v5 )
  {
    ObfDereferenceObject(*(PVOID *)v5);
    v5 = *(_QWORD *)this;
  }
  Win32FreePool(v5);
}
