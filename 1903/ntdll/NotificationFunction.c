/*
 * XREFs of NotificationFunction @ 0x180088B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NotificationFunction(int a1, PCLDR_DLL_NOTIFICATION_DATA a2, PVOID a3)
{
  if ( a1 == 1 )
    sub_180088B88(a2, a2, a3);
  else
    sub_180088C38(a2, a2, a3);
}
