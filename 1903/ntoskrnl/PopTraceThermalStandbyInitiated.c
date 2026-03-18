/*
 * XREFs of PopTraceThermalStandbyInitiated @ 0x1402FF78C
 * Callers:
 *     PopThermalCsEntry @ 0x1402F7F04 (PopThermalCsEntry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PopTraceThermalStandbyInitiated()
{
  unsigned __int8 v0; // r9
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v5 = 0;
      v1 = v0;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&pCallbackContext, &unk_1403904EC, 0LL, 0LL, 3u, &pData);
    }
  }
}
