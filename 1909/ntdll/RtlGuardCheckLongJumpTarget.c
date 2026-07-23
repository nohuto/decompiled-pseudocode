/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180078810
 * Callers:
 *     RtlGuardRestoreContext @ 0x18001EE50 (RtlGuardRestoreContext.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlQueryProtectedPolicy @ 0x180080180 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18008F9C0 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A1FA0 (RtlFailFast2.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char *v7; // r8
  char *v8; // r9
  char v9; // bl
  _DWORD *Config; // rax
  rsize_t v11; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  int v14[4]; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !IsLongJumpTarget )
      return 0;
    v9 = 1;
LABEL_15:
    *(_BYTE *)IsLongJumpTarget = v9;
    return 0;
  }
  v9 = 0;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18017A500 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18017A500 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18017A510 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (signed __int64)v14, v7, v8);
  }
  else
  {
    *(_OWORD *)v14 = xmmword_18017A500;
  }
  if ( *(_QWORD *)&v14[2] )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(*(void **)&v14[2]);
    if ( !Config
      || *Config < 0xC0u
      || (Config[36] & 0x10000) == 0
      || (Key = (_DWORD)PcValue - v14[2], (v11 = *((_QWORD *)Config + 23)) != 0)
      && bsearch_s(
           &Key,
           *((const void **)Config + 22),
           v11,
           (unsigned int)((Config[36] >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v9 = 1;
      goto LABEL_11;
    }
  }
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_180138248, &PolicyValue) >= 0 && PolicyValue )
  {
    goto LABEL_10;
  }
  if ( !v4 )
    RtlFailFast2(38LL, PcValue);
LABEL_11:
  if ( IsLongJumpTarget )
    goto LABEL_15;
  return 0;
}
