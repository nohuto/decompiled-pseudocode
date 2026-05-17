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

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v8; // bl
  _DWORD *Config; // rax
  rsize_t v10; // r8
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v8 = 1;
LABEL_15:
    *a3 = v8;
    return 0LL;
  }
  v8 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18017A500 + 1)
    || a1 >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
  {
    RtlpxLookupFunctionTable(a1, (signed __int64)&v13, v6, v7);
  }
  else
  {
    v13 = xmmword_18017A500;
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(*((unsigned __int64 *)&v13 + 1));
    if ( !Config
      || *Config < 0xC0u
      || (Config[36] & 0x10000) == 0
      || (Key = a1 - DWORD2(v13), (v10 = *((_QWORD *)Config + 23)) != 0)
      && bsearch_s(
           &Key,
           *((const void **)Config + 22),
           v10,
           (unsigned int)((Config[36] >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v8 = 1;
      goto LABEL_11;
    }
  }
  else if ( (int)RtlQueryProtectedPolicy(&unk_180138248) >= 0 && v12 )
  {
    goto LABEL_10;
  }
  if ( !a2 )
    RtlFailFast2(38LL, a1);
LABEL_11:
  if ( a3 )
    goto LABEL_15;
  return 0LL;
}
