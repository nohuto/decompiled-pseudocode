/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013F908
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E1520 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18006B0F8 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??9?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x18006B140 (--9-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18006BB54 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006BF18 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z @ 0x1800BD458 (-_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013F250 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  int CurrentEndpointsUnderLock; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  char v11; // r14
  __int64 v12; // rbx
  unsigned __int128 v13; // kr00_16
  __int64 v14; // r8
  const unsigned __int16 *v15; // rdx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  unsigned int v18; // r10d
  void (__fastcall ***v19)(_QWORD); // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  bool v22; // [rsp+38h] [rbp-59h] BYREF
  __int64 v23; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int128 v25; // [rsp+50h] [rbp-41h] BYREF
  __int64 v26; // [rsp+60h] [rbp-31h]
  __int64 v27; // [rsp+68h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  bool *v30; // [rsp+A8h] [rbp+17h]
  int v31; // [rsp+B0h] [rbp+1Fh]
  int v32; // [rsp+B4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v27 = -2LL;
  if ( !*((_BYTE *)this + 96) )
  {
    v4 = -2147418113;
    v5 = 1919LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v4);
    return v4;
  }
  if ( !*((_BYTE *)this + 216) )
  {
    v4 = -2147467259;
    v5 = 1920LL;
    goto LABEL_3;
  }
  v7 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
  if ( v7 == -1 )
  {
    v4 = -2147024809;
    v5 = 1925LL;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)this + 32 * v7 + 256) )
  {
    v4 = -2147024809;
    v5 = 1926LL;
    goto LABEL_3;
  }
  v25 = 0LL;
  v26 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v25);
  v9 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v11 = 0;
    v13 = v25;
    v23 = v13 >> 64;
    v12 = v13;
    v24 = v25;
    if ( std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>::operator!=(&v24, &v23) )
    {
      v23 = v14;
      do
      {
        v22 = 0;
        v15 = (const unsigned __int16 *)v12;
        if ( *(_QWORD *)(v12 + 24) >= 8uLL )
          v15 = *(const unsigned __int16 **)v12;
        CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v15, a2, &v22);
        v9 = CurrentEndpointsUnderLock;
        if ( CurrentEndpointsUnderLock < 0 )
        {
          v10 = 1937LL;
          goto LABEL_33;
        }
        if ( (unsigned int)dword_1801B54F0 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B54F0, 0LL) )
        {
          _TlgCreateAuto(&pDesc, a2);
          v30 = &v22;
          v31 = 1;
          v32 = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C453, v16, v17, 4u, &pData);
        }
        if ( v11 || v22 )
          v11 = 1;
        v12 += 32LL;
        v24 = v12;
      }
      while ( std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>::operator!=(&v24, &v23) );
      if ( v11 )
      {
        v19 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
        if ( v19 )
        {
          if ( v18 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B54F0, 0LL) )
            {
              _TlgCreateAuto(&pDesc, a2);
              TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C1E8, v20, v21, 3u, &pData);
              v19 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
            }
          }
          (**v19)(v19);
        }
      }
    }
    v9 = 0;
  }
  else
  {
    v10 = 1930LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
  }
  std::vector<std::wstring>::~vector<std::wstring>((__int64)&v25);
  return v9;
}
