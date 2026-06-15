/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800225F0
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180023D90 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800227B0 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180022874 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180022920 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x1800230E0 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // r13
  struct CPickerHostContext *v8; // rdx
  PickerHostContextManager **v9; // r14
  PickerHostContextManager *v10; // rsi
  HANDLE ProcessHeap; // rax
  CPickerHostContext *v12; // rax
  __int64 v13; // rcx
  CPickerHostContext *v14; // rdi
  int v15; // edi
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-A8h] BYREF
  int v20; // [rsp+30h] [rbp-78h]
  CPickerHostContext *v21; // [rsp+38h] [rbp-70h]
  _QWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-50h] BYREF
  char v25; // [rsp+60h] [rbp-48h]

  v22[1] = -2LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = a5;
  v10 = *a5;
  if ( *a5 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v8) )
    goto LABEL_12;
  ProcessHeap = GetProcessHeap();
  v12 = (CPickerHostContext *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v14 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x30uLL);
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_DWORD *)v14 + 10) = 10;
  }
  else
  {
    v14 = 0LL;
  }
  v21 = v14;
  v10 = v14;
  v22[0] = v14;
  if ( v14 )
  {
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v13, v22);
    }
    catch ( ATL::CAtlException *v23 )
    {
      v18 = &v19;
      v17 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v17;
      v15 = v20;
      if ( v20 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v21, (unsigned int)v18);
        goto LABEL_13;
      }
      v9 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      v10 = (PickerHostContextManager *)v22[0];
      v14 = v21;
    }
    *v9 = v14;
LABEL_12:
    v15 = CPickerHostContext::AddHostedAppInteractivityNotification(v10, a1, v7, v6, v5);
LABEL_13:
    if ( v15 >= 0 )
      goto LABEL_19;
    goto LABEL_14;
  }
  v15 = -2147024882;
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v15);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 87, v15);
LABEL_19:
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v15;
}
