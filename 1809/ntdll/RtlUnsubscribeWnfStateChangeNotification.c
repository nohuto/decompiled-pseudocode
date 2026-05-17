/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x18005CAA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
}
