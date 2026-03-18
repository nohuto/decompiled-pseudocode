/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C0132E60
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 */

__int64 xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 120LL) + 16LL);
  result = *(unsigned int *)(v0 + 480);
  if ( (result & 1) == 0 && *(_QWORD *)(v0 + 776) )
  {
    if ( v0 == gptiCurrent )
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v7[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v7;
          v7[2] = 0LL;
          v7[1] = gspklGlobalActive;
          HMLockObject(gspklGlobalActive);
          ProcessWindowStation = GetProcessWindowStation(0LL, v2);
          xxxInternalActivateKeyboardLayout(ProcessWindowStation, gspklGlobalActive, 0LL, 0LL);
          return ThreadUnlock1(v5, v4, v6);
        }
      }
    }
    else
    {
      return PostEventMessageEx((struct tagTHREADINFO *)v0, gpqForeground, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
