/*
 * XREFs of xxxInitWindowStation @ 0x1C00B3FAC
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 * Callees:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0052AC4 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C0053A98 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C0053C74 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x1C00B4064 (FinalUserInit.c)
 *     SetKeyboardRate @ 0x1C00B42F0 (SetKeyboardRate.c)
 */

__int64 __fastcall xxxInitWindowStation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v11, a2, a3, a4);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL, 0LL, &guDdeSendTimeout, 0);
  SetKeyboardRate(v6, v5, v7, v8);
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !gbGreTextReady || (v9 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, -1)) != 0 )
  {
    SetMinMetrics(ProfileUserName, 0LL);
    v9 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v9 )
    {
      v9 = FinalUserInit();
      if ( v9 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v11);
  return v9;
}
