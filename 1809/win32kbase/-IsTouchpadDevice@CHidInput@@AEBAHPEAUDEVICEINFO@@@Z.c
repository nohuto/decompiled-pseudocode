/*
 * XREFs of ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C014C900
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C014CC40 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CD70 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHidInput::IsTouchpadDevice(CHidInput *this, struct DEVICEINFO *a2)
{
  __int64 v2; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 60);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
