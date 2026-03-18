/*
 * XREFs of IsDWMGhostHandleGhostMsgPresent @ 0x140004064
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001040 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140004270 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDWMGhostHandleGhostMsgPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000B7E0 == 1 )
    return 1;
  if ( dword_14000B7E0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000B7E0 = 2 - (v1 != 0);
  return result;
}
