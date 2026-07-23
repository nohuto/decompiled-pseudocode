/*
 * XREFs of PiSwInterfaceFree @ 0x140836FC0
 * Callers:
 *     PiSwFreeInterfaceList @ 0x1406D95A8 (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x1407555DC (PiSwInterfaceCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
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
