/*
 * XREFs of TS_RegisterAudioProtocolNotification @ 0x180027420
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180023290 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800253E0 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

__int64 __fastcall TS_RegisterAudioProtocolNotification(void *a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  struct AUDIOPROTOCOLNOTIFY *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    *a2 = 0LL;
    v3 = RpcClientProcessSessionId(a1, &v5, &v6);
    if ( !v3 )
    {
      v3 = TsSessionIdAddNotify(v6, v5, &v7);
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
