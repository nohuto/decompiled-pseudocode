/*
 * XREFs of EtwpFreeGuidEntry @ 0x1405C1920
 * Callers:
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
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
    EtwpUnreferenceGuidEntry(*((PVOID *)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1LL);
  v4 = (void *)*((_QWORD *)P + 48);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4112LL));
  ExFreePoolWithTag(P, 0);
}
