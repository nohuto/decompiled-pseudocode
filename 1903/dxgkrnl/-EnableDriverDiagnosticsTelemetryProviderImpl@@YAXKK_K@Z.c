/*
 * XREFs of ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C028C230
 * Callers:
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C028C090 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DE.c)
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C028C0B0 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDriverDiagnosticsTelemetryProviderImpl(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGGLOBAL *Global; // r10
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v3 = (unsigned int)a1;
  if ( (_DWORD)a2 == 1 )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    v11 = 0LL;
    v12 = 0LL;
    if ( !(_DWORD)v3 )
    {
      v9 = a3 & 3;
      LODWORD(v12) = -4;
LABEL_6:
      *((_DWORD *)Global + v3 + 75997) = v9;
      HIDWORD(v12) = v3;
      LODWORD(v11) = 1 << v3;
      HIDWORD(v11) = v9;
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64)UpdateDiagnosticAdapterCallback,
        (__int64)&v11,
        2);
      return;
    }
    if ( (_DWORD)v3 == 1 )
    {
      v9 = a3 & 1;
      LODWORD(v12) = -2;
      goto LABEL_6;
    }
    v10 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v10 + 24) = 378LL;
    WdLogEvent5_WdError(v10);
  }
}
