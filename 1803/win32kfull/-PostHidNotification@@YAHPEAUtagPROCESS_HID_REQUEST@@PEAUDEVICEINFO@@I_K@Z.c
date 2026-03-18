/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0057DEC
 * Callers:
 *     PostDeviceNotification @ 0x1C005A518 (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( !v3 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 )
    return 1LL;
  LOBYTE(v2) = (unsigned int)PostInputMessage(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL), v3, 0xFEu) != 0;
  return v2;
}
