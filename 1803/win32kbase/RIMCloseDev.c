/*
 * XREFs of RIMCloseDev @ 0x1C00F74C0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimOnPnpQueryRemove @ 0x1C00FD3E8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveComplete @ 0x1C00FD584 (rimOnPnpRemoveComplete.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    ZwCancelIoFile(v3, &IoStatusBlock);
    v4 = ZwClose(*(HANDLE *)(a1 + 224));
    v5 = *(void **)(a1 + 232);
    v2 = v4;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_DWORD *)(a1 + 184) &= 0xFFFFFF3F;
  }
  return v2;
}
