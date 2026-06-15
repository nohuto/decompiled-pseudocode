/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x1800210C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CE68 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18001EE70 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001F360 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  CHostedAppInteractivityManager *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = PickerHostContextManager::s_PickerHostContextList;
  if ( PickerHostContextManager::s_PickerHostContextList )
  {
    while ( *(CPickerHostContext **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = 0LL;
  }
  if ( v3 )
  {
    if ( v3 == PickerHostContextManager::s_PickerHostContextList )
    {
      PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v3;
    }
    else
    {
      v2 = *(CHostedAppInteractivityManager **)(v3 + 8);
      *(_QWORD *)v2 = *(_QWORD *)v3;
    }
    if ( v3 == qword_18004D2E8 )
    {
      qword_18004D2E8 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v2 = *(CHostedAppInteractivityManager **)v3;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    }
    *(_QWORD *)v3 = qword_18004D300;
    qword_18004D300 = v3;
    if ( !--qword_18004D2F0 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
    v4 = *(_QWORD **)this;
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v5 + 12) = 0;
      if ( v6 )
      {
        v7 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
               v2,
               *(const unsigned __int16 **)v5,
               *(_QWORD *)(v5 + 16),
               *(_DWORD *)(v5 + 8),
               0);
        if ( v7 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v7);
          }
          AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 288, v7);
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
