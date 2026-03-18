/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C010F280
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C010F234 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     Win32UnmapViewInSessionSpace @ 0x1C01D57CC (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall PROXYPORT::Close(PROXYPORT *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(v2 + 16) )
  {
    Win32UnmapViewInSessionSpace(*(_QWORD *)(v2 + 16));
    v2 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v2 + 8) )
  {
    ZwClose(*(HANDLE *)(v2 + 8));
    v2 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)v2 )
  {
    ObfDereferenceObject(*(PVOID *)v2);
    v2 = *(_QWORD *)this;
  }
  Win32FreePool(v2);
}
