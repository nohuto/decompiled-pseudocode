/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013A8FC
 * Callers:
 *     _lambda_c13819b0d879b62a077923732e057450_::operator() @ 0x180067C78 (_lambda_c13819b0d879b62a077923732e057450_--operator().c)
 *     ?StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18013C050 (-StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4 (-PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // si
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  _QWORD *v6; // rbx
  const unsigned __int16 *v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v12; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v13 = v5;
  v6 = (_QWORD *)*((_QWORD *)this + 51);
  while ( 1 )
  {
    v6 = (_QWORD *)*v6;
    if ( v6 == *((_QWORD **)this + 51) )
      break;
    v12 = 0;
    v7 = (const unsigned __int16 *)(v6 + 2);
    if ( v6[5] >= 8uLL )
      v7 = *(const unsigned __int16 **)v7;
    v8 = AtmosCheck::PerformLicenseCheckInternalAppService(this, v7, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1661LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_13;
    }
    if ( v4 || v12 )
      v4 = 1;
  }
  if ( a2 )
    *a2 = v4;
  v9 = 0;
LABEL_13:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v9;
}
