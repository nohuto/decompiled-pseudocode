/*
 * XREFs of ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z @ 0x18028ABB8
 * Callers:
 *     ??$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z @ 0x180286018 (--$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010820 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18027C31C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(XamlSwitcherTelemetry *this, int a2)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rbx
  enum _TABLETMODESTATE *v4; // rdx
  TabletModeHelpers *v5; // rcx
  int IsTabletMode; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *p_IsTabletMode; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]
  int v14; // [rsp+A8h] [rbp+10h] BYREF

  v14 = a2;
  v2 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x400000000000uLL) )
    {
      v10 = 0;
      v8 = &v14;
      v9 = 4;
      v13 = 0;
      IsTabletMode = (unsigned __int8)TabletModeHelpers::IsTabletMode(v5, v4);
      p_IsTabletMode = &IsTabletMode;
      v12 = 4;
      TlgWrite(v3, &unk_180460CB7, 0LL, 0LL, 4u, &pData);
    }
  }
}
