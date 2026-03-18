/*
 * XREFs of PrepareForLogoff @ 0x1C0055280
 * Callers:
 *     <none>
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C0055318 (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 ProfileUserName; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 664LL);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 152) || *(_DWORD *)(v2 + 156) )
      {
        ProfileUserName = CreateProfileUserName(v5, 0LL, v0, v1);
        RegisterPerUserKeyboardIndicators(ProfileUserName);
        FreeProfileUserName(ProfileUserName, v5);
      }
    }
  }
  return 1LL;
}
