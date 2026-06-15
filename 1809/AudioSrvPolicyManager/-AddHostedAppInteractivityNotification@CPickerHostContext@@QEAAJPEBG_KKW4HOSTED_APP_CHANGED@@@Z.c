/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180022920
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800225F0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180022A3C (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180022CB0 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 */

__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  int HostedAppInteractivity; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  BOOL v11; // r8d
  int v12; // edx
  struct CHostedAppInteractivity *v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(a1, a2, a3, a4, &v14);
  if ( HostedAppInteractivity >= 0 )
  {
    if ( a5 == 1 )
    {
      v10 = *((unsigned int *)v14 + 3);
      *((_DWORD *)v14 + 3) = 0;
      v12 = v10 != 0;
      v11 = 0;
LABEL_11:
      if ( v12 )
        HostedAppInteractivity = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
                                   (CHostedAppInteractivityManager *)v10,
                                   a2,
                                   a3,
                                   a4,
                                   v11);
LABEL_13:
      if ( HostedAppInteractivity >= 0 )
        return (unsigned int)HostedAppInteractivity;
      goto LABEL_14;
    }
    if ( (unsigned int)(a5 - 2) > 1 )
      goto LABEL_13;
    v9 = *((_DWORD *)v14 + 3);
    if ( a5 == 2 )
    {
      v10 = v9 + 1;
    }
    else
    {
      v10 = v9;
      if ( !v9 )
      {
LABEL_9:
        v11 = v10 != 0;
        v12 = v11 ^ (v9 != 0);
        goto LABEL_11;
      }
      v10 = v9 - 1;
    }
    *((_DWORD *)v14 + 3) = v10;
    goto LABEL_9;
  }
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids,
      HostedAppInteractivity);
  }
  AudPolicyLogError("CPickerHostContext::AddHostedAppInteractivityNotification", 205, HostedAppInteractivity);
  return (unsigned int)HostedAppInteractivity;
}
