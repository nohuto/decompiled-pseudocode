/*
 * XREFs of CrmRegistrationNotify @ 0x180034BE0
 * Callers:
 *     CrmRegistrationReadyQueueAdd @ 0x180034A90 (CrmRegistrationReadyQueueAdd.c)
 *     CrmRegistrationReadyQueueRemove @ 0x180034D48 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     CrmLogRegistrationNotify @ 0x180034C68 (CrmLogRegistrationNotify.c)
 */

__int64 __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v3 = a3;
  if ( *(_DWORD *)(a2 + 104) || *(_DWORD *)(a2 + 108) )
  {
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
    v6 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 104), 0LL, &v9, 4LL, 0LL);
    *(_DWORD *)(a1 + 8) = 0;
    v7 = v6;
    RtlReleaseSRWLockExclusive(a1);
    v3 = v9;
  }
  else
  {
    v7 = 0;
  }
  return CrmLogRegistrationNotify(a1, v3, v7);
}
