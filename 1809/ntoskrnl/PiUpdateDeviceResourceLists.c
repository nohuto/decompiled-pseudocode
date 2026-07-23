/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x140842898
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1406EAEE4 (PiProcessQueryDeviceState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpCopyResourceList @ 0x14083BC64 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083C220 (IopQueryBusResourceUpdateInterface.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(__int64 a1)
{
  PVOID v2; // rsi
  PVOID v3; // rdi
  __int64 result; // rax
  void (__fastcall **v5)(_QWORD); // r14
  int v6; // ebx
  void *v7; // rcx
  void *v8; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  void *v10; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  result = IopQueryBusResourceUpdateInterface(*(PDEVICE_OBJECT *)(a1 + 32), (USHORT **)&P);
  if ( (int)result < 0 )
    return result;
  v5 = (void (__fastcall **)(_QWORD))P;
  v6 = (*((__int64 (__fastcall **)(_QWORD, void **, void **))P + 4))(*((_QWORD *)P + 1), &Src, &v10);
  if ( v6 >= 0 )
  {
    if ( !Src || !v10 )
    {
LABEL_13:
      v6 = 0;
      goto LABEL_14;
    }
    v2 = PnpCopyResourceList(Src);
    if ( v2 )
    {
      v3 = PnpCopyResourceList(v10);
      if ( v3 )
      {
        ExAcquireFastMutex(&PiResourceListLock);
        v7 = *(void **)(a1 + 416);
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        v8 = *(void **)(a1 + 424);
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(a1 + 416) = v2;
        *(_QWORD *)(a1 + 424) = v3;
        KeReleaseGuardedMutex(&PiResourceListLock);
        goto LABEL_13;
      }
    }
    v6 = -1073741670;
  }
LABEL_14:
  v5[3](v5[1]);
  ExFreePoolWithTag(v5, 0);
  if ( v6 < 0 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v6;
}
