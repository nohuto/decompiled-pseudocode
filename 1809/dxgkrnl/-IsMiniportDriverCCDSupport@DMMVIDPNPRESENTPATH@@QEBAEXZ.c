/*
 * XREFs of ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DCDD0
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E4FCC (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v2 = *(_QWORD *)(v1 + 40);
  }
  v3 = *(_QWORD *)(v2 + 72);
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v11);
    }
  }
  return (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v5 + 16)) >= 1105;
}
