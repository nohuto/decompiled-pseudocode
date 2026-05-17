/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x1800063B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_18000645C(*(_QWORD *)(a1 + 24), a1, &v2);
}
