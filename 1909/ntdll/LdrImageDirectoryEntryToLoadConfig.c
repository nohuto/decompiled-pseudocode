/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x18001F450
 * Callers:
 *     LdrpFetchAddressOfSecurityCookie @ 0x180020454 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlpGetTargetRvaFlag @ 0x1800553F8 (RtlpGetTargetRvaFlag.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180055648 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078810 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F7624 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  int v2; // eax
  _DWORD *v3; // r8
  __int16 v4; // dx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1, a1, 0LL, &v8);
  if ( !a1 )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xAu, &v6, (__int64 *)&v7);
  v3 = v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  v4 = *(_WORD *)(v8 + 4);
  if ( v4 == 14948 )
    v4 = 332;
  if ( v4 == -31132 )
    return v3;
  else
    return 0LL;
}
