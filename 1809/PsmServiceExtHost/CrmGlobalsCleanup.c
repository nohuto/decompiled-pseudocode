/*
 * XREFs of CrmGlobalsCleanup @ 0x1800701AC
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055538 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800702C4 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 */

ULONG CrmGlobalsCleanup()
{
  char *v0; // rdx
  __int64 v1; // rbx
  ULONG result; // eax

  v0 = (char *)P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_18009BCA0 )
    {
      while ( 1 )
      {
        CrmRegistrationCleanup(&v0[144 * v1], 1LL);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_18009BCA0 )
          break;
        v0 = (char *)P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( qword_18009BCA8 )
  {
    CrmRegistrationCleanup(qword_18009BCA8, 1LL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_18009BCA8);
  }
  CrmGlobalsRegistrationRemoveAll();
  result = EventUnregister(qword_18009B148);
  qword_18009B148 = 0LL;
  dword_18009B128 = 0;
  return result;
}
