/*
 * XREFs of PnpDereferenceNotify @ 0x140735A08
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x14066C59C (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x140876298 (PipKsrNotifyDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
