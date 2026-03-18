/*
 * XREFs of ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000F980
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0002C44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E4E34 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E4FCC (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetScalingSupport(
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  this[30] = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 0x10) != 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    WdLogEvent5_WdWarning(v11);
    *(_DWORD *)&this[30] &= ~0x10u;
  }
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)this)
    && (*(_DWORD *)&this[30] & 8) != 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    WdLogEvent5_WdWarning(v12);
    *(_DWORD *)&this[30] &= ~8u;
  }
}
