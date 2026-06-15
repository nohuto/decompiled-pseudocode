/*
 * XREFs of TS_RegisterAudioProtocolNotification @ 0x18002AD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_180028B58 @ 0x180028B58 (sub_180028B58.c)
 */

__int64 __fastcall TS_RegisterAudioProtocolNotification(void *a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  DWORD SessionId; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    *a2 = 0LL;
    v3 = sub_18002633C(a1, &v5, &SessionId);
    if ( !v3 )
    {
      v3 = sub_180028B58(SessionId, v5, &v7);
      if ( !v3 )
        *a2 = v7;
    }
  }
  else
  {
    return 87;
  }
  return v3;
}
