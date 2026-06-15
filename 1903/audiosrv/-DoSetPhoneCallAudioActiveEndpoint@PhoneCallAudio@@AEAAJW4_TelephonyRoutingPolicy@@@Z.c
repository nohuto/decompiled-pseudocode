/*
 * XREFs of ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180127CE8
 * Callers:
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180128DF0 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180128EB0 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A1AC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18012BD9C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18012C1E8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // ebx
  char v8; // si
  __int64 v9; // r8
  struct IAudioProcess *v10; // rdx
  int updated; // eax
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-E0h] BYREF
  char v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h]
  __int64 v17; // [rsp+38h] [rbp-C8h]
  char v18; // [rsp+40h] [rbp-C0h]
  _DWORD v19[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[268]; // [rsp+64h] [rbp-9Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v16 = -2LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !a2 )
  {
    v7 = 4;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v5 = v4 - 4;
  if ( !v5 )
  {
    v7 = 5;
LABEL_10:
    *(_DWORD *)(a1 + 76) = v7;
    goto LABEL_11;
  }
  if ( v5 != 2 )
  {
    v6 = -2147024809;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 76) = 2;
  v7 = 2;
LABEL_11:
  memset_0(v20, 0, 0x100uLL);
  v19[0] = 2;
  v19[3] = v7;
  v19[2] = 3;
  v8 = 1;
  v19[4] = 1;
  v19[1] = 2;
  v17 = a1;
  v18 = 1;
  v9 = *(_QWORD *)(a1 + 152);
  v10 = *(struct IAudioProcess **)(a1 + 136);
  if ( v9 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(
                g_DynamicAudioEndpointManager,
                v10,
                v9,
                (struct _DynamicRoutingRule *)v19);
    v6 = updated;
    if ( updated < 0 )
    {
      v12 = 370LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
  }
  else
  {
    updated = DynamicAudioEndpointManager::AddRule(
                g_DynamicAudioEndpointManager,
                v10,
                (struct _DynamicRoutingRule *)v19,
                (__int64 *)(a1 + 152));
    v6 = updated;
    if ( updated < 0 )
    {
      v12 = 374LL;
      goto LABEL_16;
    }
  }
  v6 = 0;
  v8 = 0;
LABEL_18:
  if ( v8 )
  {
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(a1 + 136),
      *(_QWORD *)(a1 + 152));
    *(_QWORD *)(a1 + 152) = 0LL;
  }
LABEL_20:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
