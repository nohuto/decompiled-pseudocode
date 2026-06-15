/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013F3B4
 * Callers:
 *     _lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator() @ 0x18006B744 (_lambda_fb23503d9b3566a26ea1a9c0ca33164d_--operator().c)
 *     ?StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18013FFA0 (-StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18006B0F8 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??9?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x18006B140 (--9-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18006BB54 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006BD50 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // di
  int CurrentEndpointsUnderLock; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const unsigned __int16 *v9; // r9
  const unsigned __int16 *v10; // r14
  __int128 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int128 v15; // [rsp+80h] [rbp+40h] BYREF

  v4 = 0;
  v12 = 0LL;
  v13 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v12);
  v6 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock < 0 )
  {
    v7 = 1895LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
    goto LABEL_15;
  }
  v15 = v12;
  if ( std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>::operator!=(
         &v15,
         (_QWORD *)&v15 + 1) )
  {
    *((_QWORD *)&v15 + 1) = v8;
    while ( 1 )
    {
      LOBYTE(v15) = 0;
      v10 = v9;
      if ( *((_QWORD *)v9 + 3) >= 8uLL )
        v9 = *(const unsigned __int16 **)v9;
      CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForEndpoint(this, v9, (bool *)&v15);
      v6 = CurrentEndpointsUnderLock;
      if ( CurrentEndpointsUnderLock < 0 )
        break;
      if ( v4 || (_BYTE)v15 )
        v4 = 1;
      *(_QWORD *)&v15 = v10 + 16;
      if ( !std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::wstring>>>::operator!=(
              &v15,
              (_QWORD *)&v15 + 1) )
        goto LABEL_12;
    }
    v7 = 1901LL;
    goto LABEL_17;
  }
LABEL_12:
  if ( a2 )
    *a2 = v4;
  v6 = 0;
LABEL_15:
  std::vector<std::wstring>::~vector<std::wstring>((__int64)&v12);
  return v6;
}
