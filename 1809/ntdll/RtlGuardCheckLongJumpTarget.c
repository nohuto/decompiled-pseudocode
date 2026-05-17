/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180002F20
 * Callers:
 *     RtlGuardRestoreContext @ 0x180003240 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x180084430 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x180092A30 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A52D0 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  __int64 Config; // rax
  rsize_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v6 = 1;
LABEL_15:
    *a3 = v6;
    return 0LL;
  }
  v6 = 0;
  if ( a1 < *((_QWORD *)&xmmword_180178500 + 1)
    || a1 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
  {
    RtlpxLookupFunctionTable(a1, &v11);
  }
  else
  {
    v11 = xmmword_180178500;
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    Config = LdrImageDirectoryEntryToLoadConfig();
    if ( !Config
      || *(_DWORD *)Config < 0xC0u
      || (*(_DWORD *)(Config + 144) & 0x10000) == 0
      || (Key = a1 - DWORD2(v11), (v8 = *(_QWORD *)(Config + 184)) != 0)
      && bsearch_s(
           &Key,
           *(const void **)(Config + 176),
           v8,
           (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v6 = 1;
      goto LABEL_11;
    }
  }
  else if ( (int)RtlQueryProtectedPolicy(&unk_180137E90) >= 0 && v10 )
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
