/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x140874740
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140145FD8 (PoFxActivateDevice.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 */

__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (_QWORD *)a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = 0LL;
  ObfReferenceObjectWithTag(v2, 0x65706E50u);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    v5 = -1073741738;
  }
  else
  {
    PoFxActivateDevice(a1[2]);
    *(_DWORD *)(v3 + 704) |= 0x40u;
    PipClearDevNodeFlags(v3, 256);
    PipSetDevNodeFlags(v3, 1024);
    PipClearDevNodeProblem(v3);
    if ( *(_DWORD *)(v3 + 300) == 776 )
    {
      if ( a1[4] )
        PipClearDevNodeFlags(v3, 2048);
      else
        PipSetDevNodeFlags(v3, 2048);
      PnpReallocateResources(v3);
      v4 = a1[5];
      LODWORD(v7) = 3;
      BYTE4(v7) = PnPBootDriversInitialized;
      ObfReferenceObject(*((PVOID *)IopRootDeviceNode + 4));
      v5 = PipProcessDevNodeTree((__int64)IopRootDeviceNode, (__int64)a1, (__int64)&v7, 0, 0, v4 != 0, 0);
      if ( v5 < 0 )
        v5 = 0;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  if ( (*(_DWORD *)(v3 + 704) & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v3 + 32));
    *(_DWORD *)(v3 + 704) &= ~0x40u;
  }
  ObfDereferenceObjectWithTag((PVOID)a1[2], 0x65706E50u);
  return (unsigned int)v5;
}
