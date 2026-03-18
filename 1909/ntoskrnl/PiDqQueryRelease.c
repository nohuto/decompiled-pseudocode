/*
 * XREFs of PiDqQueryRelease @ 0x1405B6370
 * Callers:
 *     PiDqObjectManagerUnregisterQuery @ 0x1405B62FC (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqDispatch @ 0x1405B6900 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     McTemplateK0p @ 0x14029EB00 (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_14042BDBA & 0x40) != 0 )
      McTemplateK0p((__int64)P, &KMPnPEvt_DevQuery_QueryStop, *((const GUID **)P + 3), P);
    PiDqQueryFreeActiveData(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
