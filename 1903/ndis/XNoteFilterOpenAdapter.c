/*
 * XREFs of XNoteFilterOpenAdapter @ 0x1C0026E74
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BF38 (-XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall XNoteFilterOpenAdapter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rbx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(a1->BindListLock, &LockState, 0);
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    a2->FilterNextOpen = a1->OpenList;
    a1->OpenList = a2;
  }
  else
  {
    XSetupFrameTypeInFilter(a1, a2);
  }
  ++a1->NumOpens;
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
