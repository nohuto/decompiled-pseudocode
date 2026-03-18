/*
 * XREFs of xxxInitWindowStation @ 0x1C0080104
 * Callers:
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 * Callees:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0057AD0 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     SetKeyboardRate @ 0x1C00806E0 (SetKeyboardRate.c)
 *     SetIconMetrics @ 0x1C013CCA0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C013CEB8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C013D004 (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v12, 0, 24);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v12);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL);
  SetKeyboardRate(v2, v1, v3);
  NlsKbdInitializePerSystem(v5, v4);
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized(v7, v6) || (v8 = xxxSetWindowNCMetrics(ProfileUserName, 0LL)) != 0 )
  {
    SetMinMetrics(ProfileUserName);
    v8 = SetIconMetrics(ProfileUserName);
    if ( v8 )
    {
      v8 = FinalUserInit(v10, v9);
      if ( v8 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v12);
  return v8;
}
