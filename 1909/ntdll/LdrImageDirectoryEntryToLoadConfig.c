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

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  NTSTATUS v2; // eax
  _DWORD *v3; // r8
  unsigned __int16 Machine; // dx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, a1, 0LL, &OutHeaders);
  if ( !a1 )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)a1, 1, 0xAu, &v6, &v7);
  v3 = (_DWORD *)v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  Machine = OutHeaders->FileHeader.Machine;
  if ( Machine == 14948 )
    Machine = 332;
  if ( Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
