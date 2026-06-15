/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013DEDC
 * Callers:
 *     wil::details::lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___::_lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___ @ 0x18006B078 (wil--details--lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___--_lambda_call__lambda_cc44.c)
 *     wil::details::lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___::_lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___ @ 0x18006B0B8 (wil--details--lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___--_lambda_call__lambda_f9b2.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006BD50 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006BF18 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  unsigned __int64 v2; // rcx
  _DWORD *i; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rdx
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h]

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v2 = *((_QWORD *)this + 73);
  for ( i = (_DWORD *)*((_QWORD *)this + 72); i != (_DWORD *)v2 && CurrentThreadId != *i; ++i )
    ;
  if ( i != (_DWORD *)v2 )
  {
    v4 = i + 1;
    v5 = 0LL;
    v6 = (v2 - (unsigned __int64)(i + 1) + 3) >> 2;
    if ( (unsigned __int64)(i + 1) > v2 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( CurrentThreadId != *v4 )
          *i++ = *v4;
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  v7 = (_DWORD *)*((_QWORD *)this + 73);
  if ( i != v7 )
  {
    memmove_0(i, v7, 0LL);
    *((_QWORD *)this + 73) = i;
  }
  return 0LL;
}
