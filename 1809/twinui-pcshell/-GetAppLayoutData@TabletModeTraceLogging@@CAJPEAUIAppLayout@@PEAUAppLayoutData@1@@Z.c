/*
 * XREFs of ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x18034695C
 * Callers:
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x180346D40 (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x180346A30 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 *     ?GetAppLayoutItems@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAPEAUIAppLayoutItem@@1@Z @ 0x180346C60 (-GetAppLayoutItems@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAPEAUIAppLayoutItem@@1@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutData(
        struct IAppLayout *a1,
        struct TabletModeTraceLogging::AppLayoutData *a2)
{
  int AppLayoutItems; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAppLayoutItem *v9; // [rsp+30h] [rbp+8h] BYREF
  struct IAppLayoutItem *v10; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a1 + 24LL))(a1);
  v10 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItems(a1, &v10, &v9);
  v5 = AppLayoutItems;
  if ( AppLayoutItems >= 0 )
  {
    AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItemData(
                       v10,
                       (struct TabletModeTraceLogging::AppLayoutData *)((char *)a2 + 40));
    v5 = AppLayoutItems;
    if ( AppLayoutItems >= 0 )
    {
      if ( !v9
        || (AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItemData(
                               v9,
                               (struct TabletModeTraceLogging::AppLayoutData *)((char *)a2 + 80)),
            v5 = AppLayoutItems,
            AppLayoutItems >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v6 = 452LL;
    }
    else
    {
      v6 = 449LL;
    }
  }
  else
  {
    v6 = 448LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)AppLayoutItems);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v5;
}
