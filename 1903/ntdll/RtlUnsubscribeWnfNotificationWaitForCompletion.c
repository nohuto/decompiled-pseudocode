/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 * Callees:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_180007424 @ 0x180007424 (sub_180007424.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)a1 + 11) = &v2;
  sub_18000645C(*((PVOID *)a1 + 3), a1);
  do
  {
    if ( byte_180165408 )
      break;
    sub_180007424((unsigned int)&v2, (unsigned int)&v3, 4, 0, dword_180163B6C);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
