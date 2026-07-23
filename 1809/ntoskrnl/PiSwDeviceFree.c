/*
 * XREFs of PiSwDeviceFree @ 0x1406D9EA8
 * Callers:
 *     PiSwDeviceDereference @ 0x1406D9CB0 (PiSwDeviceDereference.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x1406D95A8 (PiSwFreeInterfaceList.c)
 *     PiSwPnPInfoFree @ 0x1406D9F44 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x1406D9FB0 (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x1406DA104 (PiSwPdoAssociationFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140837120 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rdx
  _QWORD **v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(char **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList((_QWORD **)(a1 + 184));
  v6 = (_QWORD **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_16;
    v8 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7
      || (*v6 = v8,
          v8[1] = v6,
          CurrentThread = KeGetCurrentThread(),
          --CurrentThread->KernelApcDisable,
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u),
          v10 = v7[2],
          *(_QWORD **)(v10 + 8) != v7 + 2)
      || (v11 = (_QWORD *)v7[3], (_QWORD *)*v11 != v7 + 2) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiSwPdoAssociationFree(v7);
  }
}
