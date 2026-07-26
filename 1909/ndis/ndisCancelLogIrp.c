/*
 * XREFs of ndisCancelLogIrp @ 0x1C0094B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCancelLogIrp(__int64 a1, _IRP *a2)
{
  KSPIN_LOCK *v3; // rbx
  KIRQL v4; // al

  v3 = (KSPIN_LOCK *)*((_QWORD *)a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 1);
  v4 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
  *(_QWORD *)(v3[117] + 16) = 0LL;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741248;
  v3[65] = 0LL;
  KeReleaseSpinLock(v3 + 12, v4);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  IofCompleteRequest(a2, 2);
}
