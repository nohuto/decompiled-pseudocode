/*
 * XREFs of PiSendTargetDeviceRemoveCompleteNotification @ 0x1406F1534
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PiSendTargetDeviceRemoveCompleteNotification(int a1, _QWORD **a2, unsigned int a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  if ( a3 )
  {
    v4 = a3;
    do
    {
      v6 = *a2;
      if ( *a2 )
        v7 = *(_QWORD *)(v6[39] + 40LL);
      else
        v7 = 0LL;
      if ( a1 || !v7 || (result = *(unsigned int *)(v7 + 704), (result & 2) == 0) )
        result = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_COMPLETE, v6, 0LL, 0LL);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
