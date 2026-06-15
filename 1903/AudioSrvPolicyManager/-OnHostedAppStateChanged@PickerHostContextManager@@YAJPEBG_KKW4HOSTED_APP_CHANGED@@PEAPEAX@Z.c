/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001ECBC
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180020420 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18001EE70 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18001EF34 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001EFE0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x18001F790 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r13
  struct CPickerHostContext *v9; // rdx
  PickerHostContextManager **v10; // rsi
  CPickerHostContext *v11; // rdi
  HANDLE ProcessHeap; // rax
  CPickerHostContext *v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  int v20; // [rsp+30h] [rbp-68h]
  CPickerHostContext *v21[2]; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  char v24; // [rsp+58h] [rbp-40h]

  v21[1] = (CPickerHostContext *)-2LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = a5;
  v11 = *a5;
  if ( *a5 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v9) )
    goto LABEL_13;
  ProcessHeap = GetProcessHeap();
  v13 = (CPickerHostContext *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v11 = v13;
  if ( v13 )
  {
    *((_QWORD *)v13 + 5) = 10LL;
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    v21[0] = v13;
  }
  else
  {
    v11 = 0LL;
    v21[0] = 0LL;
    v13 = 0LL;
  }
  if ( v13 )
  {
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v14, v21);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v18 = &v19;
      v17 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v17;
      v15 = v20;
      if ( v20 < 0 )
      {
        if ( v21[0] )
          CPickerHostContext::`scalar deleting destructor'(v21[0], (unsigned int)v18);
LABEL_14:
        if ( v15 >= 0 )
          goto LABEL_20;
        goto LABEL_15;
      }
      v10 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      v8 = a1;
      v11 = v21[0];
    }
    *v10 = v11;
LABEL_13:
    v15 = CPickerHostContext::AddHostedAppInteractivityNotification(v11, v8, v7, v6, v5);
    goto LABEL_14;
  }
  v15 = -2147024882;
LABEL_15:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v15);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 87, v15);
LABEL_20:
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v15;
}
