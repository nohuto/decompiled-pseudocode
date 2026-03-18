/*
 * XREFs of PiSwDeviceFree @ 0x140780A24
 * Callers:
 *     PiSwDeviceDereference @ 0x1407809EC (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1405BAF5C (PnpFreeDevPropertyArray.c)
 *     PiSwUnlock @ 0x14071F644 (PiSwUnlock.c)
 *     PiSwLock @ 0x14071F670 (PiSwLock.c)
 *     PiSwFreeInterfaceList @ 0x140720698 (PiSwFreeInterfaceList.c)
 *     PiSwPnPInfoFree @ 0x140780AC0 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140780B2C (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x140780BE0 (PiSwPdoAssociationFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x14087089C (PiSwQueuedCreateInfoFree.c)
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
  __int64 v9; // rdx
  _QWORD *v10; // rcx

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
    if ( (_QWORD **)v7[1] != v6
      || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7)
      || (*v6 = v8, v8[1] = v6, PiSwLock(), v9 = v7[2], *(_QWORD **)(v9 + 8) != v7 + 2)
      || (v10 = (_QWORD *)v7[3], (_QWORD *)*v10 != v7 + 2) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    PiSwUnlock();
    PiSwPdoAssociationFree(v7);
  }
}
