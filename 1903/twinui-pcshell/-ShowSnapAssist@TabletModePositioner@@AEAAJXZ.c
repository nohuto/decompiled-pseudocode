/*
 * XREFs of ?ShowSnapAssist@TabletModePositioner@@AEAAJXZ @ 0x1803B0B74
 * Callers:
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1803B0AF0 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::ShowSnapAssist(IUnknown **this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  HRESULT v4; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v4 = IUnknown_QueryService(
           this[2],
           &GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33,
           &GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33,
           &v8);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(void *, void *, IUnknown *))(*(_QWORD *)v8 + 24LL))(v8, ppvOut, this[31]);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v5 = 2935LL;
    }
    else
    {
      v5 = 2933LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB72,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
  return v3;
}
