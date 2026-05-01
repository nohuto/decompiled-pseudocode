/*
 * XREFs of CrmRegistrationCleanup @ 0x18007064C
 * Callers:
 *     CrmSrvRegister @ 0x18003B978 (CrmSrvRegister.c)
 *     CrmGlobalsCleanup @ 0x1800701AC (CrmGlobalsCleanup.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800703D4 (CrmGlobalsRegistrationsDeleteRoutine.c)
 *     CrmSrvUnregister @ 0x1800704B4 (CrmSrvUnregister.c)
 * Callees:
 *     CrmActivityCleanup @ 0x1800067E4 (CrmActivityCleanup.c)
 *     CrmRegistrationRemoveActivity @ 0x1800068DC (CrmRegistrationRemoveActivity.c)
 *     CrmGlobalsRegistrationRemove @ 0x18007026C (CrmGlobalsRegistrationRemove.c)
 */

TLG_STATUS __fastcall CrmRegistrationCleanup(__int64 a1, int a2)
{
  __int64 **v3; // rdi
  __int64 *v4; // rsi

  if ( a2 && *(_QWORD *)(a1 + 48) != -1LL )
    CrmGlobalsRegistrationRemove(a1);
  v3 = (__int64 **)(a1 + 56);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    CrmRegistrationRemoveActivity(a1, *v3, 0);
    CrmActivityCleanup((__int64)v4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return CrmLogRegistrationStop(*(_QWORD *)(a1 + 16));
}
