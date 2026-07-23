/*
 * XREFs of ExpIsDevicePathForRemovableMedia @ 0x14031D0D0
 * Callers:
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExpIsDevicePathForRemovableMedia(_BYTE *a1)
{
  char v1; // r8
  _BYTE *v2; // r11
  _BYTE *v3; // r10
  _BYTE *v4; // r9
  _BYTE *v5; // rdx
  char v6; // r8
  __int64 v7; // rcx
  char v8; // al

  v1 = *a1;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  if ( (*a1 & 0x7F) == 0x7F )
    return 0LL;
  do
  {
    v6 = v1 & 0x7F;
    if ( v6 == 1 )
    {
      if ( v5[1] == 4 )
      {
        v7 = *(_QWORD *)(v5 + 4) - ExpUnknownDeviceGuid;
        if ( !v7 )
          v7 = *(_QWORD *)(v5 + 12) - qword_140406590;
        if ( !v7 )
          v2 = v5;
      }
    }
    else if ( v6 == 4 )
    {
      v8 = v5[1];
      if ( v8 == 1 )
      {
        v3 = v5;
      }
      else if ( v8 == 4 )
      {
        v4 = v5;
      }
    }
    v5 += *((unsigned __int16 *)v5 + 1);
    v1 = *v5;
  }
  while ( (*v5 & 0x7F) != 0x7F );
  return v2 && !v3 && !v4;
}
