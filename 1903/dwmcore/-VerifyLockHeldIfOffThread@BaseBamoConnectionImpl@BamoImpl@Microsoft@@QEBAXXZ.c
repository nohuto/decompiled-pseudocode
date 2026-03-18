/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800E57FC
 * Callers:
 *     ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x1800E57D0 (-GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CurrentThreadId = GetCurrentThreadId();
  if ( *((_DWORD *)this + 34) != CurrentThreadId && *((_DWORD *)this + 6) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v3);
    JUMPOUT(0x1801542EELL);
  }
}
