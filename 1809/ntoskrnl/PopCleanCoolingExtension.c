/*
 * XREFs of PopCleanCoolingExtension @ 0x14086751C
 * Callers:
 *     PopAssociateThermalRequest @ 0x140745A68 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408676CC (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *((_BYTE *)P + 64) )
    ((void (__fastcall *)(_QWORD))P[14])(P[12]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
