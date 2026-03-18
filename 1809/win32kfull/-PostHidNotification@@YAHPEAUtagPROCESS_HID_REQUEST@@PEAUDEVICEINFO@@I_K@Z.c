/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0103E6C
 * Callers:
 *     PostDeviceNotification @ 0x1C0103C0C (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 */

_BOOL8 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _BOOL8 result; // rax

  v2 = *((_QWORD *)a1 + 4);
  result = 1;
  if ( v2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 4) != 0 )
    {
      v3 = *(_QWORD *)(v2 + 40);
      if ( *(char *)(v3 + 20) >= 0
        && *(char *)(v3 + 19) >= 0
        && !(unsigned int)PostInputMessage(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL), v2, 0xFEu) )
      {
        return 0;
      }
    }
  }
  return result;
}
