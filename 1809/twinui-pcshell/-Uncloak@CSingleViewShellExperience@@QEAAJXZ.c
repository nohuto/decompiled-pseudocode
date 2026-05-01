/*
 * XREFs of ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180018080
 * Callers:
 *     ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18001B510 (-Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180081140 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x180018328 (--$-0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QE.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800183E4 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005CF04 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Uncloak(HSTRING *this)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-170h] BYREF
  _BYTE v10[320]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v9[1] = -2LL;
  *(_QWORD *)v8 = WindowsGetStringRawBuffer(this[2], 0LL);
  v9[0] = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::Uncloak::Uncloak(v10, v2, v9, v8);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v4 = -2147024809;
    v6 = 2147942487LL;
    v7 = 992LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v6,
      v8[0]);
    goto LABEL_5;
  }
  v3 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 32LL))(this[11], this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 993LL;
LABEL_9:
    v6 = (unsigned int)v3;
    goto LABEL_10;
  }
  v3 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 40LL))(this[10]);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 994LL;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 40LL))(this[11], this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
  v4 = 0;
LABEL_5:
  SingleViewExperienceTelemetry::Uncloak::~Uncloak((SingleViewExperienceTelemetry::Uncloak *)v10);
  return v4;
}
