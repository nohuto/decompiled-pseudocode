/*
 * XREFs of ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18006AAF4
 * Callers:
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18006A9B8 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013F864 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013FDB8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009ED0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180043548 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x180069BF8 (--$_Emplace_reallocate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetCurrentEndpointsUnderLock(__int64 a1, __int64 *a2)
{
  const char *v4; // r9
  _QWORD *v5; // rbx
  _WORD *v6; // rdx
  __int64 v7; // rdx
  __int64 result; // rax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)(a1 + 56), lpCriticalSection);
  v5 = *(_QWORD **)(a1 + 456);
  try
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v5;
      if ( v5 == *(_QWORD **)(a1 + 456) )
        break;
      v6 = v5 + 2;
      if ( v5[5] >= 8uLL )
        v6 = *(_WORD **)v6;
      std::wstring::wstring(&v10, v6);
      v7 = a2[1];
      if ( a2[2] == v7 )
      {
        std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(a2, v7, (__int64)&v10);
      }
      else
      {
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 24) = 0LL;
        *(_OWORD *)v7 = v10;
        *(_OWORD *)(v7 + 16) = v11;
        *(_QWORD *)&v11 = 0LL;
        *((_QWORD *)&v11 + 1) = 7LL;
        LOWORD(v10) = 0;
        a2[1] += 32LL;
      }
      std::wstring::~wstring((__int64)&v10);
    }
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F6,
                           (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           v4);
  }
  return result;
}
