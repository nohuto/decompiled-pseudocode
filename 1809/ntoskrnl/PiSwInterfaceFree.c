/*
 * XREFs of PiSwInterfaceFree @ 0x140835D80
 * Callers:
 *     PiSwFreeInterfaceList @ 0x1406D8328 (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x14075440C (PiSwInterfaceCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140595490 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
