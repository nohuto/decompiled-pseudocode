/*
 * XREFs of xxxInitWindowStation @ 0x1C00EBBA8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 * Callees:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00BEA70 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C00BEFB0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00BF1B8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00BF2F4 (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x1C00EBC78 (FinalUserInit.c)
 *     SetKeyboardRate @ 0x1C00EBF50 (SetKeyboardRate.c)
 */

__int64 __fastcall xxxInitWindowStation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v15, a2, a3, a4);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL);
  SetKeyboardRate(v6, v5, v7, v8);
  NlsKbdInitializePerSystem(v10, v9);
  xxxLoadSomeStrings();
  if ( !gbGreTextReady || (v13 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, -1)) != 0 )
  {
    SetMinMetrics(ProfileUserName, 0LL);
    v13 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v13 )
    {
      v13 = FinalUserInit(v12, v11);
      if ( v13 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v15);
  return v13;
}
