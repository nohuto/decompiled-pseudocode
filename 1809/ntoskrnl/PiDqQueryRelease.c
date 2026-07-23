/*
 * XREFs of PiDqQueryRelease @ 0x1405910AC
 * Callers:
 *     PiDqObjectManagerUnregisterQuery @ 0x140591038 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqDispatch @ 0x140591640 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     McTemplateK0p @ 0x140288E20 (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140406846 & 0x40) != 0 )
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
