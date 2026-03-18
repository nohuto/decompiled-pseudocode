/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x1C0094E70
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0035C20 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh @ 0x1C00EA950 (McTemplateK0qqqqh.c)
 */

void __fastcall EtwTraceIdleActionExpiration(char a1, char a2)
{
  char v4; // bl
  char LastInputTime; // al
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
    && (qword_1C01C3310 & 0x2000000000008000LL) != 0
    && (qword_1C01C3318 & 0x2000000000008000LL) == qword_1C01C3318 )
  {
    v4 = gProtocolType == 0;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LastInputTime = CInputGlobals::GetLastInputTime(gpInputGlobals);
      McTemplateK0qqqqh(v7, v6, v8, v9, a1, a2, LastInputTime, v4);
    }
  }
}
