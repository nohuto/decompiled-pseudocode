/*
 * XREFs of LockProcessByClientId @ 0x1C00BC244
 * Callers:
 *     UserFindBaseWindowHandle @ 0x1C00BC61C (UserFindBaseWindowHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0131880 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C006C4D4 (LockProcessByClientIdEx.c)
 */

NTSTATUS __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS result; // eax
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return -1073741823;
  }
  return result;
}
