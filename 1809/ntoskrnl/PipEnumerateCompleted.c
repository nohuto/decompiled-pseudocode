/*
 * XREFs of PipEnumerateCompleted @ 0x1406E60B0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiSwGetChildPdo @ 0x1406DA138 (PiSwGetChildPdo.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E62BC (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     PiSwFindChildren @ 0x1406E93BC (PiSwFindChildren.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 *v9; // rbx
  char v10; // bp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  _QWORD *j; // rbx
  PDEVICE_OBJECT ChildPdo; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = (_QWORD *)a1[1];
  if ( a1[66] )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = (_DWORD *)a1[66];
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(a1[66] + 8 * i + 8));
      v3 = (_DWORD *)a1[66];
    }
    ExFreePoolWithTag(v3, 0);
    a1[66] = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren(a1 + 5);
  v8 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v8; j = (_QWORD *)*j )
    {
      ChildPdo = PiSwGetChildPdo(a1[4], (__int64)j, v7);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v9 = (__int64 *)a1[1];
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v15 = (__int64 *)*v9;
      if ( (*((_DWORD *)v9 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v9, 0x10000LL);
        LOBYTE(v16) = 1;
        PnpRequestDeviceRemoval(v9, v16, 24LL);
        v10 = 1;
      }
      v9 = v15;
    }
    while ( v15 );
  }
  PipSetDevNodeState((__int64)a1, 776);
  if ( !v10 || a1 == (_QWORD *)IopRootDeviceNode )
    v11 = 0;
  else
    v11 = -1073741106;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(IopRootDeviceNode + 48), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(IopRootDeviceNode + 48), 20LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v11;
}
