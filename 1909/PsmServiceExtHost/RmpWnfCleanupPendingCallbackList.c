/*
 * XREFs of RmpWnfCleanupPendingCallbackList @ 0x18000CBB4
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CAC8 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180067DF0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x18003DE88 (CempListRemoveHeadAndClear.c)
 */

BOOLEAN __fastcall RmpWnfCleanupPendingCallbackList(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  BOOLEAN result; // al
  void *v6; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  RtlAcquireSRWLockExclusive(P + 3);
  v2 = (_QWORD *)*P;
  if ( (_QWORD *)*P != P )
  {
    v8 = (_QWORD *)P[1];
    v7 = v2;
    v2[1] = &v7;
    *v8 = &v7;
    P[1] = P;
    *P = P;
    while ( v7 != &v7 )
    {
      v6 = (void *)CempListRemoveHeadAndClear(&v7);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
  }
  v3 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v3);
  v4 = *((_BYTE *)P + 32);
  result = RtlReleaseSRWLockExclusive(P + 3);
  if ( !v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
