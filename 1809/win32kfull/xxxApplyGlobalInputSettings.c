/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C00CE784
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 */

__int64 xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL);
  result = *(unsigned int *)(v0 + 488);
  if ( (result & 1) == 0 && *(_QWORD *)(v0 + 784) )
  {
    if ( v0 == gptiCurrent )
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 440LL) )
        {
          v5[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v5;
          v5[1] = gspklGlobalActive;
          _InterlockedIncrement((volatile signed __int32 *)(gspklGlobalActive + 8LL));
          ProcessWindowStation = GetProcessWindowStation(0LL);
          xxxInternalActivateKeyboardLayout(ProcessWindowStation, gspklGlobalActive, 0LL, 0LL);
          return ThreadUnlock1(v4, v3);
        }
      }
    }
    else
    {
      return PostEventMessageEx((struct tagTHREADINFO *)v0, 0, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
