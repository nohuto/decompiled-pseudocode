/*
 * XREFs of ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006D300
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18007372C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplySystemExtensionPolicy(struct _RM_GAME_MODE_CONTEXT *a1, void **a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  RmpSystemNotifyGameModeExtensionStateChange(a2[5], 0);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v4 = *((_DWORD *)a2 + 27);
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      v8 = 4;
      TlgWrite(v3, &unk_18009464B, 0LL, 0LL, 3u, &pData);
    }
  }
}
