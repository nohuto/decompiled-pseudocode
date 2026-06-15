/*
 * XREFs of ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x1800147D0
 * Callers:
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x18001E6E4 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedReality.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180015A88 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange(
        CProcess *this,
        struct IMixedRealitySpatialAudioFormatPolicyChange *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  _QWORD *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMixedRealitySpatialAudioFormatPolicyChange *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 744);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 744));
  try
  {
    v6 = (_QWORD *)*((_QWORD *)this + 100);
    if ( *((_QWORD **)this + 101) == v6 )
    {
      std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        (char *)this + 792,
        v6,
        &v9);
    }
    else
    {
      *v6 = a2;
      *((_QWORD *)this + 100) += 8LL;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12B3,
                           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v5);
  }
  return result;
}
