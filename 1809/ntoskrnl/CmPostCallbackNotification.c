/*
 * XREFs of CmPostCallbackNotification @ 0x1405D2A94
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, int a2, int a3, int a4, __int64 a5)
{
  return CmPostCallbackNotificationEx(a1, a2, a3, a4, 0LL, a5);
}
