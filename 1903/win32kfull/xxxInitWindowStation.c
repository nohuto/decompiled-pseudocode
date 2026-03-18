/*
 * XREFs of xxxInitWindowStation @ 0x1C00E04A8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 * Callees:
 *     SetKeyboardRate @ 0x1C00E0414 (SetKeyboardRate.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00E35EC (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C00E4424 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E463C (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E4788 (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v9, 0, 24);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v9);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL);
  SetKeyboardRate();
  NlsKbdInitializePerSystem(v2, v1);
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized(v4, v3) || (v5 = xxxSetWindowNCMetrics(ProfileUserName, 0LL)) != 0 )
  {
    SetMinMetrics(ProfileUserName);
    v5 = SetIconMetrics(ProfileUserName);
    if ( v5 )
    {
      v5 = FinalUserInit(v7, v6);
      if ( v5 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v9);
  return v5;
}
