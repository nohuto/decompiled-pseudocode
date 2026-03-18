/*
 * XREFs of ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C004D4F0
 * Callers:
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C027D88C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C027D9E0 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !result )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v3);
    return *(_QWORD *)(a1 + 8);
  }
  return result;
}
