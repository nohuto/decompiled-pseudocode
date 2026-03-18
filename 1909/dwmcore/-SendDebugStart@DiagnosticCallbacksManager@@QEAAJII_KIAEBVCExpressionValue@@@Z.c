/*
 * XREFs of ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x180189A38
 * Callers:
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801BE2B8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x18018A220 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801C05C0 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendDebugStart(
        DiagnosticCallbacksManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        const struct CExpressionValue *a6)
{
  int ValueSizeInBytes; // eax
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // ecx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( DiagnosticCallbacksManager::TryGetProxyForPeer(this, a2) )
  {
    ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes(a6);
    v11 = *(_DWORD *)(v9 + 72);
    if ( v11 == 11 )
      v9 = *(_QWORD *)(v9 + 64);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, __int64, int))(*(_QWORD *)v10 + 32LL))(
            v10,
            a3,
            a4,
            a5,
            v11,
            v9,
            ValueSizeInBytes);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  return 0LL;
}
