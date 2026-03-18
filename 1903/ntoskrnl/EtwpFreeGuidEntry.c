/*
 * XREFs of EtwpFreeGuidEntry @ 0x1406E02A8
 * Callers:
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  void *v4; // rcx

  if ( *((_QWORD *)P + 50) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = KeGetCurrentThread();
    v2 = (char **)*((_QWORD *)P + 2);
    if ( v2[1] != P + 16 || (v3 = (PVOID *)*((_QWORD *)P + 3), *v3 != P + 16) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (char *)v3;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = 0LL;
    ExReleasePushLockEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((__int64 **)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1u);
  v4 = (void *)*((_QWORD *)P + 48);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4112LL));
  ExFreePoolWithTag(P, 0);
}
