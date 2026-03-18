/*
 * XREFs of ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x180155BA0
 * Callers:
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x1801553C4 (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x180155470 (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x180155598 (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801556AC (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

struct ICompObjectDiagnosticsRootProxy *__fastcall DiagnosticCallbacksManager::TryGetProxyForPeer(
        DiagnosticCallbacksManager *this,
        unsigned int a2)
{
  __int64 *v2; // r9
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = (__int64 *)*((_QWORD *)this + 21);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
    v3 = v2;
  if ( v3 == v2 )
    return 0LL;
  else
    return (struct ICompObjectDiagnosticsRootProxy *)v3[5];
}
