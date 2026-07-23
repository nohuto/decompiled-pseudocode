/*
 * XREFs of IopDeleteDriver @ 0x140710070
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     IoUnregisterPriorityCallback @ 0x140283D90 (IoUnregisterPriorityCallback.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 */

void __fastcall IopDeleteDriver(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rbx

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v2 )
  {
    do
    {
      v8 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v8;
    }
    while ( v8 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 38LL, 0LL, 0LL, 0LL);
  }
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = (void *)v4[4];
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    v4 = *(_QWORD **)(a1 + 48);
  }
  v6 = (void *)v4[6];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    v4 = *(_QWORD **)(a1 + 48);
  }
  v7 = (void *)v4[7];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
