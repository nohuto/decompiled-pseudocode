/*
 * XREFs of ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x180189B4C
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801BE7F8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x18018A220 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801C05C0 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendPropertyChanged(
        DiagnosticCallbacksManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int16 a6,
        const struct CExpressionValue *a7)
{
  int ValueSizeInBytes; // eax
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // edx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( DiagnosticCallbacksManager::TryGetProxyForPeer(this, a2) )
  {
    ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes(a7);
    v12 = *(_DWORD *)(v10 + 72);
    if ( v12 == 11 )
      v10 = *(_QWORD *)(v10 + 64);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64, int))(*(_QWORD *)v11 + 48LL))(
            v11,
            a3,
            a4,
            a5,
            a6,
            v12,
            v10,
            ValueSizeInBytes);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  return 0LL;
}
