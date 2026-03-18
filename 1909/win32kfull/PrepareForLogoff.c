/*
 * XREFs of PrepareForLogoff @ 0x1C0117D40
 * Callers:
 *     <none>
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C0117DFC (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // rcx
  __int64 ProfileUserName; // rbx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 664LL);
    if ( v0 )
    {
      if ( *(_DWORD *)(v0 + 152) || *(_DWORD *)(v0 + 156) )
      {
        memset(v3, 0, 24);
        ProfileUserName = CreateProfileUserName(v3);
        RegisterPerUserKeyboardIndicators(ProfileUserName);
        FreeProfileUserName(ProfileUserName, v3);
      }
    }
  }
  return 1LL;
}
