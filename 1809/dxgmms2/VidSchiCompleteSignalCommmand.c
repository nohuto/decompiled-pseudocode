/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C0015EB0
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  char v7; // bp
  _QWORD *v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  unsigned int i; // esi
  struct _KEVENT *v13; // rcx

  v3 = *(_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a2 + 792);
  v6 = 0;
  v7 = a3;
  v9 = *(_QWORD **)(v3 + 104);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 800) = *(_QWORD *)(a2 + 800);
    v10 = *(_QWORD *)(a2 + 800);
    if ( !v10 )
    {
LABEL_16:
      *(_QWORD *)(a2 + 792) = 0LL;
      *(_QWORD *)(a2 + 800) = 0LL;
      goto LABEL_6;
    }
LABEL_15:
    *(_QWORD *)(v10 + 792) = *(_QWORD *)(a2 + 792);
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a2 + 800);
  if ( v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a2 + 272);
  if ( (v11 & 2) != 0 )
  {
    v13 = *(struct _KEVENT **)(a2 + 536);
    if ( (v11 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[63])(v13);
    }
    else
    {
      KeSetEvent(v13, 0, 0);
      ObfDereferenceObject(*(PVOID *)(a2 + 536));
    }
    *(_QWORD *)(a2 + 536) = 0LL;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a2 + 276); ++i )
      VidSchiCompleteSignalSyncObject(a1, *(_QWORD *)(a2 + 8LL * i + 280), a3, (_QWORD *)(a2 + 536 + 8LL * i), v7);
  }
LABEL_6:
  *(_DWORD *)(a2 + 80) |= 4u;
  if ( (*(_DWORD *)(a2 + 272) & 2) == 0 && *(_DWORD *)(a2 + 276) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(char **)(a2 + 8LL * v6++ + 280));
    while ( v6 < *(_DWORD *)(a2 + 276) );
  }
  VidSchiCheckPendingDeviceCommand(v9);
}
