/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180084E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a1[13] )
    return 3221227288LL;
  a1[13] = a2;
  a1[14] = a3;
  return sub_18000645C(a1[3], (__int64)a1, &v4);
}
