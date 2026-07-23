/*
 * XREFs of PopPluginNotifyIdleState @ 0x1402DA838
 * Callers:
 *     PopPluginComponentIdleState @ 0x1401765F4 (PopPluginComponentIdleState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140176A90 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PopPluginNotifyIdleState(__int64 *a1, int a2, int a3, char a4)
{
  char v4; // di
  __int64 v5; // r10
  char v7; // al
  char v8; // cl
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  char v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+31h] [rbp-17h]

  v4 = a2;
  v5 = a1[8];
  v10 = a1[9];
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v5 + 96))(19LL, &v10);
  v8 = v14;
  if ( !v7 )
    v8 = 1;
  v14 = v8;
  if ( !v8 )
  {
    PopFxAddLogEntry(a1[6], v4, 18, 0LL);
    return v14;
  }
  return v8;
}
