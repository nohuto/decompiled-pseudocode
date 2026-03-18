/*
 * XREFs of PnpDereferenceNotify @ 0x1406FF0F8
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 *     PnpProcessDeferredRegistrations @ 0x14058BF08 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A574 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x140825D04 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID **P)
{
  PVOID *v3; // rax
  PVOID *v4; // rcx
  PVOID *v5; // rcx
  PVOID *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(P[6]);
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v5 = P[11];
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        P[11] = 0LL;
      }
    }
    v6 = P[3];
    if ( v6 )
    {
      ZwClose(v6);
      P[3] = 0LL;
    }
    ExDeleteResourceLite((PERESOURCE)P[9]);
    ExFreePoolWithTag(P[9], 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
