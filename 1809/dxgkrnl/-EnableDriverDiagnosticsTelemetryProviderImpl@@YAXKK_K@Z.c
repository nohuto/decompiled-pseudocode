/*
 * XREFs of ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C00B389C
 * Callers:
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B3860 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_D.c)
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B3880 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDriverDiagnosticsTelemetryProviderImpl(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // r10
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]

  v3 = (unsigned int)a1;
  if ( a2 == 1 )
  {
    Global = DXGGLOBAL::GetGlobal(a1);
    v9 = 0LL;
    v10 = 0LL;
    if ( !(_DWORD)v3 )
    {
      v7 = a3 & 3;
      LODWORD(v10) = -4;
LABEL_6:
      *((_DWORD *)Global + v3 + 5080) = v7;
      HIDWORD(v10) = v3;
      LODWORD(v9) = 1 << v3;
      HIDWORD(v9) = v7;
      DXGGLOBAL::IterateAdaptersWithCallback(Global, UpdateDiagnosticAdapterCallback, &v9, 2LL);
      return;
    }
    if ( (_DWORD)v3 == 1 )
    {
      v7 = a3 & 1;
      LODWORD(v10) = -2;
      goto LABEL_6;
    }
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = 380LL;
    WdLogEvent5_WdError(v8);
  }
}
