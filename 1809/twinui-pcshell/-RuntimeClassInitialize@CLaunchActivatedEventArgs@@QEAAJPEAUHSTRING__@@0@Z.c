/*
 * XREFs of ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180062124
 * Callers:
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x18006207C (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@W_ea_18006207C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180062184 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::RuntimeClassInitialize(
        CLaunchActivatedEventArgs *this,
        HSTRING a2,
        HSTRING a3)
{
  int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v8; // [rsp+38h] [rbp+10h] BYREF
  HSTRING v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = Windows::Internal::String::Initialize((CLaunchActivatedEventArgs *)((char *)this + 272), &v8);
  if ( v4 < 0 )
  {
    v6 = 37LL;
  }
  else
  {
    v4 = Windows::Internal::String::Initialize((CLaunchActivatedEventArgs *)((char *)this + 280), &v9);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
