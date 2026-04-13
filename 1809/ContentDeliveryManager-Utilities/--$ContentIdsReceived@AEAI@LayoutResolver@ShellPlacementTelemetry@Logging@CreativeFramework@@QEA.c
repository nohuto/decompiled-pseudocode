/*
 * XREFs of ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800A1500
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024AD4 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
        __int64 a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v4 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v9 = 0;
    v7 = a2;
    v8 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_18016587D, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
