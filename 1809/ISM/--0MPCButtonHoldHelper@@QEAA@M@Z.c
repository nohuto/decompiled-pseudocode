/*
 * XREFs of ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180102B34
 * Callers:
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1800F2810 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1800FA160 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180102CA4 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

MPCButtonHoldHelper *__fastcall MPCButtonHoldHelper::MPCButtonHoldHelper(
        MPCButtonHoldHelper *this,
        float a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int64 v5; // rcx
  float v6; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &MPCButtonHoldHelper::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 < 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcbuttonholdhelper.cpp",
      a4);
    JUMPOUT(0x180102BDALL);
  }
  QueryPerformanceFrequency(&Frequency);
  v5 = 0LL;
  v6 = (float)(int)Frequency.LowPart * a2;
  if ( v6 >= 9.223372e18 )
  {
    v6 = v6 - 9.223372e18;
    if ( v6 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  *((_QWORD *)this + 3) = v5 + (unsigned int)(int)v6;
  return this;
}
