/*
 * XREFs of ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180070728
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18007139C (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x1800723F0 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006EF18 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18006FFDC (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  char *v5; // rax
  __int64 *v6; // rax
  signed __int32 v7; // eax
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  wchar_t *v12; // [rsp+28h] [rbp-19h] BYREF
  __int128 v13; // [rsp+30h] [rbp-11h]
  __int64 v14; // [rsp+40h] [rbp-1h]
  __int64 *v15; // [rsp+48h] [rbp+7h]
  _BYTE *v16; // [rsp+50h] [rbp+Fh]
  __int64 v17; // [rsp+58h] [rbp+17h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp+27h] BYREF
  char *v19; // [rsp+80h] [rbp+3Fh]
  __int64 v20; // [rsp+88h] [rbp+47h]

  v14 = -2LL;
  v15 = a1;
  v20 = a3;
  v12 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
  v16 = v18;
  *(_QWORD *)&v13 = &v12;
  *((_QWORD *)&v13 + 1) = a3;
  v19 = 0LL;
  v5 = (char *)operator new(0x20uLL);
  if ( !v5 )
    std::_Xbad_alloc();
  *(_QWORD *)v5 = off_1800E0340;
  *(_OWORD *)(v5 + 8) = v13;
  v19 = v5;
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v17,
         a1);
  LOBYTE(v7) = Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(v6, (__int64)v18);
  v9 = (volatile signed __int32 *)a1[1];
  if ( v9 )
  {
    v7 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
    if ( v7 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      v7 = _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
      if ( v7 == 1 )
        LOBYTE(v7) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(_QWORD *)(a3 + 24);
  if ( v10 )
  {
    LOBYTE(v8) = v10 != a3;
    LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v8);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return v7;
}
