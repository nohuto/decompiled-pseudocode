/*
 * XREFs of CrmRegistrationAddActivity @ 0x18003307C
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180032FD4 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmRegistrationAddActivity(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rcx

  v2 = *(_DWORD *)(a2 + 52);
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = a1 + 56;
  *v5 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  return CrmLogRegistrationAddActivity(a1, v2);
}
