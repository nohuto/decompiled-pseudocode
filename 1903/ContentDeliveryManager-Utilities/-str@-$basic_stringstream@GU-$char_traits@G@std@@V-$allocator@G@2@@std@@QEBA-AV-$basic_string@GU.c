/*
 * XREFs of ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180041F24
 * Callers:
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18003DF18 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003EBD8 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180047D0C (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180031F20 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800333A0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // ecx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r8
  char *v7; // rdx
  void *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  char *v11; // rdx
  _QWORD v13[3]; // [rsp+28h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-9h]
  _QWORD v15[3]; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+17h]
  _QWORD v17[3]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+37h]

  v4 = *(_DWORD *)(a1 + 136);
  if ( (v4 & 2) != 0 || (v5 = *(unsigned __int64 **)(a1 + 88), !*v5) )
  {
    if ( (v4 & 4) != 0 || (v9 = **(_QWORD **)(a1 + 80)) == 0 )
    {
      a2[2] = 0LL;
      a2[3] = 7LL;
      *(_WORD *)a2 = 0;
      v18 = 7LL;
      v17[2] = 0LL;
      LOWORD(v17[0]) = 0;
      std::wstring::_Assign_rv(a2, v17);
      if ( v18 >= 8 )
      {
        v8 = (void *)v17[0];
        goto LABEL_13;
      }
    }
    else
    {
      v10 = 2LL * **(int **)(a1 + 104);
      v11 = **(char ***)(a1 + 48);
      v16 = 7LL;
      v15[2] = 0LL;
      LOWORD(v15[0]) = 0;
      std::wstring::assign(v15, v11, (v9 + v10 - (__int64)v11) >> 1);
      a2[3] = 7LL;
      a2[2] = 0LL;
      *(_WORD *)a2 = 0;
      std::wstring::_Assign_rv(a2, v15);
      if ( v16 >= 8 )
      {
        v8 = (void *)v15[0];
        goto LABEL_13;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 < *v5 )
      v6 = *v5;
    v7 = **(char ***)(a1 + 56);
    v14 = 7LL;
    v13[2] = 0LL;
    LOWORD(v13[0]) = 0;
    std::wstring::assign(v13, v7, (__int64)(v6 - (_QWORD)v7) >> 1);
    a2[3] = 7LL;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv(a2, v13);
    if ( v14 >= 8 )
    {
      v8 = (void *)v13[0];
LABEL_13:
      operator delete(v8);
    }
  }
  return a2;
}
