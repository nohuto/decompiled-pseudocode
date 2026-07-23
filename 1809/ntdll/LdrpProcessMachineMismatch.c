/*
 * XREFs of LdrpProcessMachineMismatch @ 0x18008A47C
 * Callers:
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     NtRaiseHardError @ 0x1800A2EF0 (NtRaiseHardError.c)
 */

NTSTATUS __fastcall LdrpProcessMachineMismatch(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  NTSTATUS result; // eax
  unsigned __int64 Parameters[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG Response; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8, &v9);
  v4 = v9;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    Parameters[0] = v1 + 72;
    result = NtRaiseHardError(1073741838, 1u, 1u, Parameters, 2u, &Response);
    if ( result >= 0 )
    {
      if ( Response == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        return -1073741701;
      }
      else
      {
        *(_DWORD *)(v1 + 104) &= ~4u;
      }
    }
  }
  else
  {
    return 1073741838;
  }
  return result;
}
