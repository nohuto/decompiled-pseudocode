/*
 * XREFs of CmpCheckCreateAccessOnKcbStack @ 0x1406B6854
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckCreateAccess @ 0x1406B68F4 (CmpCheckCreateAccess.c)
 *     CmpSetAccessStateForBackupRestore @ 0x140706890 (CmpSetAccessStateForBackupRestore.c)
 */

char __fastcall CmpCheckCreateAccessOnKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rsi
  char v15; // bl

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a7, 0LL);
  v14 = SecurityCacheEntryForKcbStack;
  if ( !a6 )
    goto LABEL_2;
  v15 = 1;
  LOBYTE(v13) = 1;
  LOBYTE(v11) = a4;
  if ( (int)CmpSetAccessStateForBackupRestore(a3, v11, SecurityCacheEntryForKcbStack + 32, v13) < 0 )
  {
    v15 = 0;
    *a8 = -1073741790;
    return v15;
  }
  if ( *(_DWORD *)(a3 + 16) )
  {
LABEL_2:
    LOBYTE(v13) = a4;
    return CmpCheckCreateAccess(v12, v14 + 32, a3, v13, a5, a8);
  }
  else
  {
    *a8 = 0;
  }
  return v15;
}
