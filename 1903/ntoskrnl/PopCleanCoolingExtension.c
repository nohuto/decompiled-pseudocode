/*
 * XREFs of PopCleanCoolingExtension @ 0x1408A3A0C
 * Callers:
 *     PopAssociateThermalRequest @ 0x14075AB90 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
