/*
 * XREFs of PiDqIrpCancel @ 0x14029F020
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     PiDqQueryUnlock @ 0x1405B66FC (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x1405B6724 (PiDqQueryLock.c)
 */

void __fastcall PiDqIrpCancel(__int64 a1, IRP *a2)
{
  char v3; // si
  _DWORD *FsContext2; // rbx

  v3 = 0;
  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  PiDqQueryLock(FsContext2);
  if ( *((_QWORD *)FsContext2 + 22) )
  {
    FsContext2[54] &= ~0x10u;
    v3 = 1;
    *((_QWORD *)FsContext2 + 22) = 0LL;
  }
  PiDqQueryUnlock(FsContext2);
  if ( v3 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
