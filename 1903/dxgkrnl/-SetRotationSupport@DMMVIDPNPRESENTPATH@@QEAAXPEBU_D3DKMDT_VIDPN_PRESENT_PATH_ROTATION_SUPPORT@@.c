/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005690
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000E598 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E5CF0 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C00E6058 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E613C (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00F1D60 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v6);
  }
  if ( DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(this) )
  {
    *((_DWORD *)this + 31) = 31;
    return;
  }
  *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)this + 31) = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
  {
    *((_DWORD *)this + 31) |= 0x10u;
    return;
  }
  if ( g_OSTestSigningEnabled && (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v7) >= 0 )
  {
    v4 = *((_DWORD *)this + 31);
    if ( v7 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        if ( (v4 & 0xE0) == 0 )
          return;
        v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v5[3] = 275LL;
        v5[4] = 28LL;
        v5[5] = *a2;
        v5[6] = 2LL;
      }
      else
      {
        v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v5[3] = 275LL;
        v5[4] = 28LL;
        v5[5] = *a2;
        v5[6] = 1LL;
      }
      goto LABEL_11;
    }
    if ( (v4 & 0xF0) == 0 )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v5[3] = 275LL;
      v5[4] = 28LL;
      v5[5] = *a2;
      v5[6] = 0LL;
LABEL_11:
      v5[7] = 0LL;
      WdLogEvent5_WdCriticalError(v5);
    }
  }
}
