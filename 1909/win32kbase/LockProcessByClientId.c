/*
 * XREFs of LockProcessByClientId @ 0x1C00999E0
 * Callers:
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C0099954 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     UserFindBaseWindowHandle @ 0x1C011D4C4 (UserFindBaseWindowHandle.c)
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C017EB08 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C0099C68 (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( (int)result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return 3221225473LL;
  }
  return result;
}
