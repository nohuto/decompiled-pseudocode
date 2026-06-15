/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001F10C
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001EFF0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180015518 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001F254 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CHostedAppInteractivity **a5)
{
  int Instance; // ebx
  _QWORD *v10; // rsi
  struct CHostedAppInteractivity *v11; // rdi
  LPVOID *v12; // rdi
  __int64 result; // rax
  ATL::CAtlException *v14; // rbx
  struct CHostedAppInteractivity *v15[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+8h]

  v15[1] = (struct CHostedAppInteractivity *)-2LL;
  Instance = 0;
  v15[0] = 0LL;
  v10 = *(_QWORD **)this;
  while ( v10 )
  {
    v11 = (struct CHostedAppInteractivity *)v10[2];
    v10 = (_QWORD *)*v10;
    v15[0] = v11;
    if ( *((_DWORD *)v11 + 2) == a4 && *((_QWORD *)v11 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v11, a2) )
      goto LABEL_10;
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, a4, v15);
  if ( Instance < 0 )
    goto LABEL_11;
  try
  {
    Instance = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (__int64 *)this,
      v15);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v14 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v17 = *(_DWORD *)v14;
    Instance = *(_DWORD *)v14;
    if ( v17 >= 0 )
      goto LABEL_9;
LABEL_11:
    v12 = (LPVOID *)v15[0];
LABEL_12:
    if ( v12 )
    {
      if ( *v12 )
      {
        CoTaskMemFree(*v12);
        *v12 = 0LL;
      }
      operator delete(v12, (const struct std::nothrow_t *)0x18);
    }
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, Instance);
      }
      AudPolicyLogError("CPickerHostContext::GetHostedAppInteractivity", 254, Instance);
    }
    result = (unsigned int)Instance;
  }
LABEL_9:
  v11 = v15[0];
LABEL_10:
  *a5 = v11;
  v12 = 0LL;
  goto LABEL_12;
}
