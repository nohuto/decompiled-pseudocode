/*
 * XREFs of ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E64B8
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000576C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E64A4 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 72);
  if ( !v4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v4 = *(_QWORD *)(v3 + 72);
  }
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v6 = *(_QWORD *)(v5 + 8);
    if ( !v6 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v13);
    }
  }
  return *(_DWORD *)(*(_QWORD *)(v6 + 16) + 2452LL) >= 1105;
}
