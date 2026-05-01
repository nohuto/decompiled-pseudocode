/*
 * XREFs of ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1803AC820
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1803B133C (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x1803AC42C (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutOperationData(
        struct IAppLayoutOperation *a1,
        struct TabletModeTraceLogging::AppLayoutOperationData *a2)
{
  int AppLayoutData; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAppLayout *v11; // [rsp+30h] [rbp+8h] BYREF
  struct IAppLayout *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  AppLayoutData = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 40LL))(
                    a1,
                    &v12);
  v5 = AppLayoutData;
  if ( AppLayoutData >= 0 )
  {
    AppLayoutData = TabletModeTraceLogging::GetAppLayoutData(v12, a2);
    v5 = AppLayoutData;
    if ( AppLayoutData < 0 )
    {
      v6 = 433LL;
      goto LABEL_5;
    }
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 48LL))(
           a1,
           &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = TabletModeTraceLogging::GetAppLayoutData(
             v11,
             (struct TabletModeTraceLogging::AppLayoutOperationData *)((char *)a2 + 120));
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v8 = 437LL;
    }
    else
    {
      v8 = 436LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v7);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    goto LABEL_13;
  }
  v6 = 432LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)AppLayoutData);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v5;
}
