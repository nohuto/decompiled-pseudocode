/*
 * XREFs of PiSwBusRelationRemove @ 0x1406D8D74
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1406D8B6C (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1406D9130 (PiSwCloseDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiSwDeviceDereference @ 0x1406D8A30 (PiSwDeviceDereference.c)
 */

void __fastcall PiSwBusRelationRemove(char *P)
{
  char *v1; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  _QWORD *v5; // rdx
  void *v6; // rdi

  v1 = P + 96;
  v3 = *((_QWORD *)P + 12);
  if ( *(char **)(v3 + 8) != P + 96 || (v4 = (char **)*((_QWORD *)P + 13), *v4 != v1) )
    __fastfail(3u);
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD *)*((_QWORD *)P + 14);
  if ( (_QWORD *)v5[2] == v5 + 2 )
  {
    v6 = (void *)v5[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v5);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x57706E50u);
  }
  *((_QWORD *)P + 14) = 0LL;
  PiSwDeviceDereference(P);
}
