/*
 * XREFs of ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00F18B4
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0004454 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0006870 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000E598 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  DXGADAPTER *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v4 = *(_QWORD *)(v3 + 40);
  }
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7 = *(DXGADAPTER **)(v6 + 16);
  DXGADAPTER::IsCoreResourceSharedOwner(v7);
  *((_BYTE *)this + 110) = *((_BYTE *)v7 + 2504);
}
