/*
 * XREFs of ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C02B6D04
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F2870 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = *((_QWORD *)this + 10);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 100) = a3;
    v16 = 0;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v13 + 24) = v4;
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v15);
      v14 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v14 + 16);
    WdLogEvent5_WdError(v13);
    v16 = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64), v8, v10);
  return v16;
}
