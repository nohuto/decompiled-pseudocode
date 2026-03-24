/*
 * XREFs of PiDqQueryRelease @ 0x1405900AC
 * Callers:
 *     PiDqObjectManagerUnregisterQuery @ 0x140590038 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqDispatch @ 0x140590640 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     McTemplateK0p @ 0x140288C30 (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x140590124 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140405846 & 0x40) != 0 )
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
