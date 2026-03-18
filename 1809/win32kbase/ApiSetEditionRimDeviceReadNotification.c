/*
 * XREFs of ApiSetEditionRimDeviceReadNotification @ 0x1C01634A8
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionRimDeviceReadNotification(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  result = IsEditionRimDeviceReadNotificationSupported();
  if ( (int)result >= 0 )
    return EditionRimDeviceReadNotification(a1, a2, a3, a4);
  return result;
}
