/*
 * XREFs of PipEnumerateCompleted @ 0x140707CA0
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PiSwFindChildren @ 0x1407007A0 (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PiSwGetChildPdo @ 0x14071F1B0 (PiSwGetChildPdo.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // rbx
  char v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  _QWORD *j; // rbx
  __int64 ChildPdo; // rax
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
  Children = (_QWORD **)PiSwFindChildren();
  v7 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v7; j = (_QWORD *)*j )
    {
      ChildPdo = PiSwGetChildPdo(a1[4], j);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v8 = (__int64 *)a1[1];
  v9 = 0;
  if ( v8 )
  {
    do
    {
      v14 = (__int64 *)*v8;
      if ( (*((_DWORD *)v8 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v8, 0x10000LL);
        LOBYTE(v15) = 1;
        PnpRequestDeviceRemoval(v8, v15, 24LL, 0LL);
        v9 = 1;
      }
      v8 = v14;
    }
    while ( v14 );
  }
  PipSetDevNodeState((__int64)a1, 776);
  if ( !v9 || a1 == IopRootDeviceNode )
    v10 = 0;
  else
    v10 = -1073741106;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v10;
}
