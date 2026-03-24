/*
 * XREFs of PiSwFreeInterfaceList @ 0x1406D8308
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PiSwProcessRemove @ 0x1406D8B4C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D8C08 (PiSwDeviceFree.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x140835D60 (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PiSwInterfaceFree(v2);
  }
}
