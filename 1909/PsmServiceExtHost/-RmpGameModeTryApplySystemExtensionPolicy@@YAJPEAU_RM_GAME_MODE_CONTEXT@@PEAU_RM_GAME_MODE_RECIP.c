/*
 * XREFs of ?RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006CDF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18007372C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplySystemExtensionPolicy(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( *((_DWORD *)a2 + 26) )
    return 255LL;
  RmpSystemNotifyGameModeExtensionStateChange(*((void **)a2 + 5), 1u);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v5 = *((_DWORD *)a2 + 27);
      v10 = 0;
      v6 = v5;
      v8 = &v6;
      v9 = 4;
      TlgWrite(v4, &unk_18009475B, 0LL, 0LL, 3u, &pData);
    }
  }
  return 0LL;
}
