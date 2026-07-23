/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1408883D8
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1408885FC (PspDeleteSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     EtwDeleteSiloState @ 0x1408BA4E0 (EtwDeleteSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DC8C0 (ExpWnfDeleteScopeInstances.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _KEVENT *v11; // rcx

  v2 = (void *)*((_QWORD *)P + 123);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 123) = 0LL;
  }
  if ( *(_QWORD *)P )
    ObfDereferenceDeviceMap(*(PVOID *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D7uLL, 0LL);
  if ( *((_QWORD *)P + 113) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 113), 2LL);
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 113), 0LL);
    ExFreePoolWithTag(*((PVOID *)P + 113), 0x20666E57u);
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)P + 114) )
    ZwClose(*((HANDLE *)P + 114));
  if ( *((_QWORD *)P + 115) )
    ZwClose(*((HANDLE *)P + 115));
  v5 = (void *)*((_QWORD *)P + 108);
  if ( v5 )
  {
    EtwDeleteSiloState(v5);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 136) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(P + 1080));
    *((_QWORD *)P + 136) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 128);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)P + 128) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 129);
  if ( v7 )
  {
    MmUnmapViewInSystemSpace(v7);
    *((_QWORD *)P + 129) = 0LL;
  }
  v8 = (void *)*((_QWORD *)P + 127);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x6C537350u);
    *((_QWORD *)P + 127) = 0LL;
  }
  if ( *((_QWORD *)P + 141) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)P + 140));
    v9 = (void *)*((_QWORD *)P + 141);
    *((_QWORD *)P + 140) = 0LL;
    ObfDereferenceObject(v9);
    *((_QWORD *)P + 141) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 131);
  if ( v10 )
  {
    ZwClose(v10);
    *((_QWORD *)P + 131) = 0LL;
  }
  v11 = (struct _KEVENT *)*((_QWORD *)P + 139);
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 139), 0x65446953u);
    *((_QWORD *)P + 139) = 0LL;
  }
  if ( P[1041] )
    ExFreePoolWithTag(*((PVOID *)P + 132), 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
