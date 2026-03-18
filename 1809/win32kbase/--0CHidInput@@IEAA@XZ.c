/*
 * XREFs of ??0CHidInput@@IEAA@XZ @ 0x1C0006160
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C0005AF0 (CHidInput_CreateInstance.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0006AE8 (RtlStringCchPrintfA.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C0007640 (--0CBaseInput@@IEAA@K@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

CHidInput *__fastcall CHidInput::CHidInput(CHidInput *this)
{
  int v2; // eax
  int v3; // edx
  _DWORD v5[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  char v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+50h] [rbp-28h] BYREF

  CBaseInput::CBaseInput(this, 0x3Cu);
  *((_DWORD *)this + 280) = 0;
  v6 = 0LL;
  v5[1] = 0;
  *(_QWORD *)this = &CHidInput::`vftable';
  v8 = 16;
  v5[0] = 48;
  pszDest[0] = 0;
  v7 = 0;
  v5[2] = 4096;
  v5[3] = 819;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%ws", L"CHidInput");
  v2 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v5, (char *)this + 1048);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(gBaseLog, v3, 3, 10, (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids, v2);
    *((_QWORD *)this + 131) = gBaseLog;
  }
  return this;
}
