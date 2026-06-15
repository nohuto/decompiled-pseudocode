/*
 * XREFs of ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV?$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18013A9D4
 * Callers:
 *     ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4 (-PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800AE3F8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1?$function@$$A6AJPEBG@Z@wistd@@QEAA@XZ @ 0x1800AF8AC (--1-$function@$$A6AJPEBG@Z@wistd@@QEAA@XZ.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013A46C (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z.c)
 *     ?IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z @ 0x18013A5EC (-IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckHelper(
        const unsigned __int16 **this,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 v7; // rdi
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rcx
  int v14; // r12d
  AtmosCheck *v15; // rcx
  _QWORD v17[3]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-60h] BYREF

  v17[1] = -2LL;
  v7 = a3;
  v17[2] = a4;
  if ( *((_BYTE *)this + 552) )
  {
    if ( (unsigned int)dword_1801B1580 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0LL) )
      TlgWrite(v10, &unk_180178171, v11, v12, 2u, &pData);
  }
  else
  {
    v17[0] = a2;
    v13 = *(_QWORD *)(a4 + 104);
    if ( !v13 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v17);
    if ( AtmosCheck::IsPerformLicenseCheck((AtmosCheck *)this, v14) )
      AtmosCheck::IsLicenseValidForSubtype(v15, this[4 * v7 + 27], a2, (int *)(a5 + 8 * v7 + 4), (bool *)(a5 + 8 * v7));
    if ( v14 != *(_DWORD *)(a5 + 8 * v7 + 4) )
      *a6 = 1;
  }
  return wistd::function<long (unsigned short const *)>::~function<long (unsigned short const *)>(a4, (__int64)a2);
}
